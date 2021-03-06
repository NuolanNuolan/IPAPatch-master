//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCADCanvasInfo;

@protocol WCTimelineDelegate <NSObject>
- (void)onRemoveCachesOfContentWithDataItemId:(NSString *)arg1;
- (void)onRemoveCachesOfLikeUserWithDataItemId:(NSString *)arg1;
- (void)onTimelineDataChanged:(NSArray *)arg1 andAdItems:(NSArray *)arg2;
- (void)onNoMoreTimelineData;
- (void)onTimelineDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;

@optional
- (_Bool)isCanvasTypesAllValid:(WCADCanvasInfo *)arg1;
@end

