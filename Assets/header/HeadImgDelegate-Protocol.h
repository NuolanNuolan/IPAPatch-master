//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol HeadImgDelegate <NSObject>
- (void)notifyHeadImageChange:(NSString *)arg1;

@optional
- (void)onGetUsrImage:(NSString *)arg1 Status:(NSString *)arg2 Image:(NSData *)arg3 Category:(unsigned char)arg4;
- (void)onGetUsrImage:(NSString *)arg1 Status:(NSString *)arg2 Image:(NSData *)arg3;
@end

