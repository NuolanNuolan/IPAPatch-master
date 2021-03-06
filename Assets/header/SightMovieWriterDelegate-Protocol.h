//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SightMovieWriter;

@protocol SightMovieWriterDelegate <NSObject>
- (void)movieWriter:(SightMovieWriter *)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(SightMovieWriter *)arg1 onMovieWriteFinished:(NSString *)arg2 ret:(unsigned int)arg3;

@optional
- (void)onMovieWriterInvalidate:(SightMovieWriter *)arg1;
@end

