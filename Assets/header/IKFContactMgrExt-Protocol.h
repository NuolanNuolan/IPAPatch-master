//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol IKFContactMgrExt <NSObject>

@optional
- (void)onUpdateKFContactsList:(NSArray *)arg1 errCode:(int)arg2;
- (void)onGetKFContactsBindList:(NSArray *)arg1 errCode:(int)arg2;
- (void)onGetKFContactsDefaultList:(NSArray *)arg1 errCode:(int)arg2;
@end

