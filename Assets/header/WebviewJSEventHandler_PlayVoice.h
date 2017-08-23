//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IFavAudioPlayerExt-Protocol.h"

@class NSString;

@interface WebviewJSEventHandler_PlayVoice : WebviewJSEventHandlerBase <IFavAudioPlayerExt>
{
    _Bool _stopVoiceFlag;
}

- (void)OnPlayError:(id)arg1;
- (void)sendEndEventToJS:(id)arg1;
- (void)OnEndPlay:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlay:(id)arg1;
- (void)setStopVoiceFlag;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
