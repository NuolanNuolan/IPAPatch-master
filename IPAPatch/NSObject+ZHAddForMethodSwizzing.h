//
//  NSObject+ZHAddForMethodSwizzing.h
//  ZHCategoriesDemo
//
//  Created by 吴志和 on 15/12/12.
//  Copyright © 2015年 wuzhihe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ZHAddForMethodSwizzing)

/**
 *  使用一个新类用来替换老类的方法
 *
 *  @param className    需要被替换的老类的类名
 *  @param classPrefix  替换时的类前缀
 *  @param methodPrefix 替换时的函数前缀
 *
 *  @return 替换是否成功
 */

+ (BOOL)zh_swizzleClassWithName:(NSString *)className classPrefix:(NSString *)classPrefix methodPrefix:(NSString *)methodPrefix;

/**
 *  替换当前类的两个方法
 *
 *  @param originalSelector 需要被替换的函数
 *  @param swizzledSelector 替换时使用的函数
 *
 *  @return 替换是否成功
 */
+ (BOOL)zh_swizzleOriginal:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

/**
 *   替换当前类的某一方法
 *
 *  @param originalSelector 需要被替换的函数
 *  @param swizzedClass     替换使用的类
 *  @param swizzledSelector 替换时使用的函数
 *
 *  @return 替换是否成功
 */
+ (BOOL)zh_swizzleOriginal:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector;

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
+ (BOOL)zh_swizzleClass:(Class)clz original:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector;

+ (BOOL)zh_swizzleClassWithName:(NSString *)clzName original:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector;

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
+ (BOOL)zh_swizzleMetaClass:(Class) clz original:(SEL)originalSelector withSwizzedClass:(Class)swizzedClass swizzledSelector:(SEL)swizzledSelector;
@end
