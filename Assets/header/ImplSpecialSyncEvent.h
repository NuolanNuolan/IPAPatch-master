//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSyncBaseEvent.h"

@class NSData, NSMutableArray, NSString;

@interface ImplSpecialSyncEvent : CSyncBaseEvent
{
    NSMutableArray *m_arrOplogList;
    unsigned int m_uiSelector;
    NSString *m_nsUsrName;
    NSData *m_dtSyncBuffer;
    _Bool m_bUploadOplog;
    unsigned int m_uiSyncScene;
}

@property(retain, nonatomic) NSData *m_dtSyncBuffer; // @synthesize m_dtSyncBuffer;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)ClearOplog;
- (_Bool)LoadOplog;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (_Bool)SetEventInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end
