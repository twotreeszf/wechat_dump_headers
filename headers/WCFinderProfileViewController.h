//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedListViewDataSource-Protocol.h"
#import "WCFinderFeedListViewDelegate-Protocol.h"
#import "WCFinderProfileViewModelProtocol-Protocol.h"

@class NSString, WCFinderCreateCoordinator, WCFinderFeedListView, WCFinderProfileViewModel, WCFinderRefreshTableFooterView;
@protocol WCFinderProfileViewControllerDelegate;

@interface WCFinderProfileViewController : MMUIViewController <WCFinderProfileViewModelProtocol, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource>
{
    _Bool _isSilencePlay;
    _Bool _hasOperateStickyTop;
    id <WCFinderProfileViewControllerDelegate> _delegate;
    WCFinderProfileViewModel *_viewModel;
    unsigned long long _firstViewOffset;
    WCFinderRefreshTableFooterView *_footerView;
    WCFinderFeedListView *_feedListView;
    WCFinderCreateCoordinator *_createCoordinator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasOperateStickyTop; // @synthesize hasOperateStickyTop=_hasOperateStickyTop;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) WCFinderFeedListView *feedListView; // @synthesize feedListView=_feedListView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) unsigned long long firstViewOffset; // @synthesize firstViewOffset=_firstViewOffset;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(retain, nonatomic) WCFinderProfileViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)profielViewChangeStickyTopTo:(_Bool)arg1 contentVM:(id)arg2 isSuccess:(_Bool)arg3 errorInfo:(id)arg4;
- (void)profileViewDataRemovedAt:(unsigned long long)arg1 contentVM:(id)arg2;
- (void)reloadData;
- (void)profileViewDataSourceNoMoreData;
- (void)profileViewDataSourceFetchError;
- (void)profileViewDataSourceAppend:(long long)arg1 toIndex:(long long)arg2;
- (void)profileViewDataSourceChanged;
- (void)changeStickyTopStatus:(_Bool)arg1 contentVM:(id)arg2;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (id)specialParamsForFeedId:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (_Bool)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 contentVM:(id)arg3;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 didSelecteItem:(id)arg3;
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
- (void)processPrivateAccountEvent;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
@property(readonly, copy, nonatomic) NSString *username;
- (void)configureTableView;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleConflictWithLive;
- (id)initWithProfileVM:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

