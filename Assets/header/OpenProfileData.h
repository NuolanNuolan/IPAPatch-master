//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface OpenProfileData : MMObject
{
    int scene;
    int profileType;
    NSString *username;
    NSString *appID;
    NSString *bundleID;
    NSString *extMsg;
    NSString *domain;
}

@property(nonatomic) int profileType; // @synthesize profileType;
@property(nonatomic) int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(retain, nonatomic) NSString *extMsg; // @synthesize extMsg;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (void)dealloc;

@end

