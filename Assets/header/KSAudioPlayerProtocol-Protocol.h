//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSSongInfo, NSDictionary, NSError;
@protocol KSAudioPlayerDelegate;

@protocol KSAudioPlayerProtocol <NSObject>
@property(readonly, nonatomic) double playTimeWithNoPause;
@property(readonly, nonatomic) unsigned int secondCacheCnt;
@property(readonly, nonatomic) double cacheProgress;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double curTime;
@property(nonatomic) _Bool pauseOnHeadPhoneOut;
@property(nonatomic) _Bool manualProcessInterrup;
@property(readonly, nonatomic) unsigned long long status;
@property(nonatomic) __weak id <KSAudioPlayerDelegate> delegate;
@property(readonly, nonatomic) KSSongInfo *curSong;
- (unsigned long long)errType;
- (NSError *)errDetail;
- (NSDictionary *)dataProviderDetail;
- (double)firstBufTime;
- (void)seek:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (_Bool)play:(KSSongInfo *)arg1 seekTime:(unsigned long long)arg2;
- (_Bool)play:(KSSongInfo *)arg1;
@end
