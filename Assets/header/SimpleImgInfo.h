//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;
@protocol SimpleImgInfoDelegate;

@interface SimpleImgInfo : MMObject
{
    NSString *m_strMsgLocalID;
    unsigned int m_uiCreateTime;
    _Bool m_bExpired;
    id <SimpleImgInfoDelegate> m_delegate;
}

@property(nonatomic) __weak id <SimpleImgInfoDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool m_bExpired; // @synthesize m_bExpired;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_strMsgLocalID; // @synthesize m_strMsgLocalID;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (_Bool)isFromC2C;
- (_Bool)isVideoMsg;
- (_Bool)isImgMsg;
- (_Bool)isAppVideoMsg;
- (_Bool)isAppMusicMsg;
- (_Bool)isAppFileMsg;
- (_Bool)isAppUrlMsg;
- (id)getIconName;
- (id)getDefaultImg;
- (unsigned int)getVideoTime;
- (id)getSightPath;
- (id)getImgPath;
- (id)getSquareImgDir;
- (id)getTitle;

@end

