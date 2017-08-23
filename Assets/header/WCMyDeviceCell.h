//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMDeviceHeadImageView, NSString, UILabel;

@interface WCMyDeviceCell : MMTableViewCell
{
    _Bool _isInited;
    NSString *_iconUrl;
    NSString *_deviceName;
    MMDeviceHeadImageView *_headImageView;
    UILabel *_deviceNameLbl;
    UILabel *_deviceDetailLbl;
}

@property(retain, nonatomic) UILabel *deviceDetailLbl; // @synthesize deviceDetailLbl=_deviceDetailLbl;
@property(retain, nonatomic) UILabel *deviceNameLbl; // @synthesize deviceNameLbl=_deviceNameLbl;
@property(retain, nonatomic) MMDeviceHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) _Bool isInited; // @synthesize isInited=_isInited;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
- (void).cxx_destruct;
- (void)setDefaultIcon:(id)arg1;
- (void)setDeviceName:(id)arg1 detail:(id)arg2;
- (void)initCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
