//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 29 2017 23:22:24).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMSearchBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WASearchActionDelegate-Protocol.h"
#import "WASearchGuideDelegate-Protocol.h"
#import "WASearchGuideViewDataSource-Protocol.h"

@class MMSearchBar, MMUIViewController, NSString, WASearchGuideView, WASearchLogic, WASearchResultLogic, WebSearchView;
@protocol WASearchControllerDelegate;

@interface WASearchController : MMObject <MMSearchBarDelegate, WASearchActionDelegate, WASearchGuideDelegate, WASearchGuideViewDataSource, UIScrollViewDelegate>
{
    _Bool _isContainerInteractivePopEnabled;
    MMSearchBar *_searchBar;
    id <WASearchControllerDelegate> _delegate;
    unsigned long long _pageType;
    WASearchLogic *_searchLogic;
    WASearchResultLogic *_searchResultLogic;
    WebSearchView *_resultView;
    WASearchGuideView *_searchGuideView;
    MMUIViewController *_containerController;
}

@property(nonatomic) __weak MMUIViewController *containerController; // @synthesize containerController=_containerController;
@property(retain, nonatomic) WASearchGuideView *searchGuideView; // @synthesize searchGuideView=_searchGuideView;
@property(retain, nonatomic) WebSearchView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) WASearchResultLogic *searchResultLogic; // @synthesize searchResultLogic=_searchResultLogic;
@property(retain, nonatomic) WASearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) __weak id <WASearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)onOpenWeappItem:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onOpenNearByPage:(id)arg1;
- (void)onTap;
- (void)searchGuideViewDidScroll;
- (void)onOpenStaredWeappPage;
- (void)getNearWeappLink:(CDUnknownBlockType)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)visitViewToHideDimView:(id)arg1;
- (void)hideKeyboardForSearchBar;
- (void)hideSearchBarDimView;
- (void)hideSearchBarResultView;
- (void)resetSearchGuideViewSuperView;
- (void)showSearchGuideView;
- (void)hideSearchGuideView;
- (void)showSearchGuideViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupSearchGuideView;
- (void)hideResultViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showResultViewWithOffset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideResultView;
- (void)showResultView;
- (void)clearResultView;
- (void)setupResultView;
- (void)restoreInteractivePop;
- (void)forbidInteractivePop;
- (void)onTypedTextChanged:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchDisplayControllerDidEndSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmSearchDisplayControllerDidBeginSearch;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)onClearSearchText;
- (void)resetStatusBarFontColor;
- (void)onExitSearch;
- (void)animateSearchBarCancelButton;
- (void)fixSearchBarMaskBug;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

