//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AudioRecorderUserData;

@protocol AQAudioRecorderDelegate

@optional
- (void)OnAQPart:(AudioRecorderUserData *)arg1 Duration:(float)arg2 EndFlag:(unsigned int)arg3 ForceDelete:(_Bool)arg4;
- (void)OnAQEndRecording:(AudioRecorderUserData *)arg1;
- (void)OnAQBeginRecording:(AudioRecorderUserData *)arg1 ErrNo:(int)arg2;
@end

