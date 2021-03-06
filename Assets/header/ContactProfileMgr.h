//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface ContactProfileMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_profiles;
    NSMutableDictionary *m_profileImages;
    _Bool m_isGettingProfile;
    _Bool m_isGettingProfileAndImage;
    unsigned int m_retryCount;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)unpackProfiles:(id)arg1;
- (void)parseBasicInfo:(id)arg1 basicInfo:(id)arg2;
- (void)parseExtInfo:(id)arg1 extInfo:(id)arg2;
- (long long)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
- (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
- (void)cleanUpContacts:(id)arg1 withOpCode:(unsigned int)arg2;
- (void)updateContacts:(id)arg1 withOpCode:(unsigned int)arg2 andNames:(id)arg3;
- (void)GetQQContactProfileAndImages:(id)arg1;
- (void)GetQQContactProfileAndImage:(id)arg1;
- (void)GetQQContactProfiles:(id)arg1;
- (void)GetQQContactProfile:(id)arg1;
- (void)InternalGetContactProfileAndImage:(id)arg1 startNow:(_Bool)arg2;
- (void)InternalGetContactProfile:(id)arg1 startNow:(_Bool)arg2;
- (void)GetProfiles:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

