//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSCrashReportFilter-Protocol.h"

@class NSString;

@interface KSCrashReportFilterGZipCompress : NSObject <KSCrashReportFilter>
{
    int _compressionLevel;
}

+ (id)filterWithCompressionLevel:(int)arg1;
@property(nonatomic) int compressionLevel; // @synthesize compressionLevel=_compressionLevel;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithCompressionLevel:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
