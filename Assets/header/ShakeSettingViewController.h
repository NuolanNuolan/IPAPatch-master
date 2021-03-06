//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ShakeMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;
@protocol ShakeSettingViewControllerDelegate;

@interface ShakeSettingViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, ShakeMgrExt>
{
    id <ShakeSettingViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_tableSections;
}

- (void).cxx_destruct;
- (void)onShakeStatusChanged;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSouncStatusSwitchChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnXXX;
- (void)OnDataChange;
- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initData;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

