//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderTopicListDetailViewModelDelegate-Protocol.h"

@class NSString, WCFinderFeedListView, WCFinderTopicListDetailViewModel;

@interface WCFinderTopicListDetailViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderTopicListDetailViewModelDelegate, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource>
{
    unsigned long long _topicType;
    WCFinderFeedListView *_feedListView;
    unsigned long long _firstViewOffset;
    WCFinderTopicListDetailViewModel *_viewModel;
    NSString *_displayTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) WCFinderTopicListDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderTopicListFeedWithTid:(id)arg1 pinToTop:(_Bool)arg2 errorCode:(int)arg3;
- (void)onFinderTopicListBeDeletedWith:(id)arg1 originIndex:(long long)arg2;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListResultError;
- (void)onFinderTopicListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderTopicListNextPageError;
- (void)onFinderTopicListResultChanged;
- (void)onFinderTopicListResultNoMore;
- (id)specialParamsForFeedId:(id)arg1;
- (void)onClickFeedPatMusicAction:(id)arg1;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 didSelecteItem:(id)arg3;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (_Bool)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedListViewCanPreFetchData:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2 displayTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

