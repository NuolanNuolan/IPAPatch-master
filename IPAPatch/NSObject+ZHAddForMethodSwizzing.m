//
//  NSObject+ZHAddForMethodSwizzing.m
//  ZHCategoriesDemo
//
//  Created by 吴志和 on 15/12/12.
//  Copyright © 2015年 wuzhihe. All rights reserved.
//

#import "NSObject+ZHAddForMethodSwizzing.h"
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
void ZHAssert(BOOL value, NSString *message);

void ZHAssert(BOOL value, NSString *message)
{
    NSCAssert(value, message);
    if (!value) {
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"提示" message:message delegate:nil cancelButtonTitle:@"取消" otherButtonTitles:nil];
        [alertView show];
    }
}

@implementation NSObject (ZHAddForMethodSwizzing)

+ (BOOL)zh_swizzleClassWithName:(NSString *)className classPrefix:(NSString *)classPrefix methodPrefix:(NSString *)methodPrefix
{
    BOOL ret = YES;
    Class originClass = NSClassFromString(className);
    Class destClass = NSClassFromString([classPrefix stringByAppendingString:className]);
    ZHAssert(originClass != nil, [NSString stringWithFormat:@"originClass %@ doesn't exist!", className]);
    ZHAssert(destClass != nil, [NSString stringWithFormat:@"destClass %@ doesn't exist!", [classPrefix stringByAppendingString:className]]);
    
    unsigned int outCount = 0;
    Method *methods = class_copyMethodList(destClass, &outCount);
    for (int i = 0; i < outCount; i++) {
        NSString *methodName = NSStringFromSelector(method_getName(methods[i]));
        if ([methodName hasPrefix:methodPrefix]) {
            NSString *originMethodName = [methodName substringFromIndex:methodPrefix.length];
            NSString *destMethodName = methodName;
            
            BOOL hookResult = [NSObject zh_swizzleClass:originClass original:NSSelectorFromString(originMethodName) withSwizzedClass:destClass swizzledSelector:NSSelectorFromString(destMethodName)];
            if (!hookResult) {
                NSLog(@"originMethodName = %@ destMethodName = %@ hookResult = %@", originMethodName, destMethodName, @(hookResult));
            }

            ret &= hookResult;
        }
    }
    return ret;
}

/**
 *  替换当前类的两个方法
 *
 *  @param originalSelector 需要被替换的函数
 *  @param swizzledSelector 替换时使用的函数
 *
 *  @return 替换是否成功
 */
+ (BOOL)zh_swizzleOriginal:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector
{
    return [NSObject zh_swizzleClass:self original:originalSelector withSwizzedClass:self swizzledSelector:swizzledSelector];
}

/**
 *   替换当前类的某一方法
 *
 *  @param originalSelector 需要被替换的函数
 *  @param swizzedClass     替换使用的类
 *  @param swizzledSelector 替换时使用的函数
 *
 *  @return 替换是否成功
 */
+ (BOOL)zh_swizzleOriginal:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector
{
    return [NSObject zh_swizzleClass:self original:originalSelector withSwizzedClass:swizzedClass swizzledSelector:swizzledSelector];
}

/**
 *  替换类的方法
 *
 *  @param class            需要被替换的类
 *  @param originalSelector 需要被替换的函数
 *  @param swizzedClass     替换使用的类
 *  @param swizzledSelector 替换时使用的函数
 *
 *  @return 替换是否成功
 */
+ (BOOL)zh_swizzleClass:(Class)class original:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector
{
    Method originalMethod = class_getInstanceMethod(class, originalSelector);
    Method swizzledMethod = class_getInstanceMethod(swizzedClass, swizzledSelector);
    
    if (!swizzledMethod) {
        NSLog(@"selector %@ in %@ is not found", NSStringFromSelector(swizzledSelector), swizzedClass);
        return NO;
    }
    
    BOOL didAddMethod =
    class_addMethod(class,
                    originalSelector,
                    method_getImplementation(swizzledMethod),
                    method_getTypeEncoding(swizzledMethod));
    
    if (didAddMethod)
    {
        if (originalMethod) {
            class_replaceMethod(class,
                                swizzledSelector,
                                method_getImplementation(originalMethod),
                                method_getTypeEncoding(originalMethod));
        }
        else
        {
            class_replaceMethod(class,
                                swizzledSelector,
                                method_getImplementation(swizzledMethod),
                                method_getTypeEncoding(swizzledMethod));
        }
        
    } else  //originalSelector 存在
    {
        //判断typeEncoding是否一样
        NSString *oriTypeEcodeing = [NSString stringWithCString:method_getTypeEncoding(originalMethod) encoding:NSUTF8StringEncoding];
        NSString *swizzedTypeEcodeing = [NSString stringWithCString:method_getTypeEncoding(swizzledMethod) encoding:NSUTF8StringEncoding];
        
        if (![oriTypeEcodeing isEqualToString:swizzedTypeEcodeing]) {
            NSLog(@"Trying to swizze methods with different typeEncodeingoriTypeEcodeing = %@, swizzedTypeEcodeing = %@", oriTypeEcodeing, swizzedTypeEcodeing);
            return NO;
        }
        
        //为类添加新的实例方法
        BOOL didAddSwizzedMethod =
        class_addMethod(class,
                        swizzledSelector,
                        method_getImplementation(swizzledMethod),
                        method_getTypeEncoding(swizzledMethod));
        
        if (!didAddSwizzedMethod) {
            NSLog(@"class:%@ already has method:%@", class, NSStringFromSelector(method_getName(swizzledMethod)));
            return NO;
        }
        
        Method originalMethodNew = class_getInstanceMethod(class, originalSelector);
        Method swizzledMethodNew = class_getInstanceMethod(class, swizzledSelector);
        
        method_exchangeImplementations(originalMethodNew, swizzledMethodNew);
    }
    
    return YES;
}

+ (BOOL)zh_swizzleClassWithName:(NSString *)clzName original:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector
{
    return [self zh_swizzleClass:NSClassFromString(clzName) original:originalSelector withSwizzedClass:swizzedClass swizzledSelector:swizzledSelector];
}

/**
 *  替换类的元类的方法
 *
 *  @param class            需要被替换的类
 *  @param originalSelector 需要被替换的函数
 *  @param swizzedClass     替换使用的类
 *  @param swizzledSelector 替换时使用的函数
 *
 *  @return 替换是否成功
 */
+ (BOOL)zh_swizzleMetaClass:(Class) class original:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector
{
    return [self zh_swizzleClass:objc_getMetaClass(class_getName(class)) original:originalSelector withSwizzedClass:objc_getMetaClass(class_getName(swizzedClass)) swizzledSelector:swizzledSelector];
}

@end
