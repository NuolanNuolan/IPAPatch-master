//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SightDraft;

@protocol SightDraftBoxDelegate <NSObject>

@optional
- (void)onPlayerCleared;
- (void)onUndo;
- (void)onItemDeleted;
- (void)onItemChecked:(long long)arg1 withSightDraft:(SightDraft *)arg2;
- (void)onItemClicked:(long long)arg1 withSightDraft:(SightDraft *)arg2;
- (void)onItemLongClicked:(long long)arg1;
@end
