//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImgageBrowseViewDelegate-Protocol.h"

@class MMImageBrowseView, NSString, UIImage;
@protocol ImageBrowseDelegate;

@interface PickImageForCommonViewController : MMUIViewController <MMImgageBrowseViewDelegate>
{
    MMImageBrowseView *m_imageView;
    UIImage *m_image;
    id <ImageBrowseDelegate> m_delegate;
    id m_singleTapOnNav;
}

@property(nonatomic) __weak id <ImageBrowseDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) id m_singleTapOnNav; // @synthesize m_singleTapOnNav;
- (void).cxx_destruct;
- (void)onSingleTapImageBrowseView;
- (void)doCancel;
- (void)doSelect;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (void)onTopBarFrameChanged;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initImageView;
- (void)initNavigationBar;
- (void)exitFullScreen;
- (void)setFullScreen:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)adjustImageViewRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

