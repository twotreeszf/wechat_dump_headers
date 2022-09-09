//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMScrollActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCommentDetailViewControllerDelegate-Protocol.h"
#import "WCFinderCommentIdentityViewControllerDelegate-Protocol.h"
#import "WCFinderContentTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedCommentTableViewCellDelegate-Protocol.h"
#import "WCFinderFeedFriendsLikeListViewControllerDelegate-Protocol.h"
#import "WCFinderFoldListViewModelDelegate-Protocol.h"
#import "WCFinderFriendLikeTableViewCellDelegate-Protocol.h"
#import "WCFinderInduceCommentTableViewCellDelegate-Protocol.h"
#import "WCFinderLiveNoticeTableViewCellDelegate-Protocol.h"
#import "WCFinderMultiMediaTableViewCellDelegate-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRefreshTableFooterViewDelegate-Protocol.h"
#import "WCFinderTLFeedPrivateTableViewCellDelegate-Protocol.h"
#import "WCFinderToolbarTableViewCellDelegate-Protocol.h"
#import "WCFinderVideoPlayerExt-Protocol.h"
#import "WCGeneralListMonitorExt-Protocol.h"

@class NSIndexPath, NSMutableDictionary, NSString, UILabel, UITableView, UITapGestureRecognizer, UIView, UIViewController, WCActionSheet, WCFinderCreateCoordinator, WCFinderFeedContentVM, WCFinderFoldListViewModel, WCFinderRefreshTableFooterView;
@protocol WCFinderCommentBaseViewProtocol;

@interface WCFinderFollowFoldListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderMultiMediaTableViewCellDelegate, WCFinderContentTableViewCellDelegate, WCFinderToolbarTableViewCellDelegate, WCFinderFeedCommentTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCGeneralListMonitorExt, WCFinderCommentDetailViewControllerDelegate, WCFinderCommentIdentityViewControllerDelegate, WCFinderVideoPlayerExt, WCFinderFriendLikeTableViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFoldListViewModelDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCActionSheetDelegate, WCFinderTLFeedPrivateTableViewCellDelegate, WCFinderInduceCommentTableViewCellDelegate, WCFinderLiveNoticeTableViewCellDelegate>
{
    _Bool _isSilencePlay;
    _Bool _isDisableVideoAutoPlay;
    _Bool _needsResumeTimelineVideo;
    _Bool _scrollToHalfScreen;
    _Bool _showFollowTips;
    WCFinderFoldListViewModel *_viewModel;
    WCFinderRefreshTableFooterView *_footerView;
    UIView *_noDataTipsView;
    UITableView *_tableView;
    WCFinderFeedContentVM *_currentShareContentVM;
    NSString *_latestAutoplayVideoTid;
    NSIndexPath *_currentForceIndexPath;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    NSMutableDictionary *_exposureDict;
    WCFinderCreateCoordinator *_createCoordinator;
    UIViewController<WCFinderCommentBaseViewProtocol> *_lastCommentVC;
    NSString *_currentVideoTid;
    NSString *_targetId;
    unsigned long long _refreshTime;
    WCActionSheet *_forwardActionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCActionSheet *forwardActionSheet; // @synthesize forwardActionSheet=_forwardActionSheet;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool showFollowTips; // @synthesize showFollowTips=_showFollowTips;
@property(nonatomic) _Bool scrollToHalfScreen; // @synthesize scrollToHalfScreen=_scrollToHalfScreen;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *currentVideoTid; // @synthesize currentVideoTid=_currentVideoTid;
@property(nonatomic) _Bool needsResumeTimelineVideo; // @synthesize needsResumeTimelineVideo=_needsResumeTimelineVideo;
@property(retain, nonatomic) UIViewController<WCFinderCommentBaseViewProtocol> *lastCommentVC; // @synthesize lastCommentVC=_lastCommentVC;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) NSMutableDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) NSIndexPath *currentForceIndexPath; // @synthesize currentForceIndexPath=_currentForceIndexPath;
@property(nonatomic) _Bool isDisableVideoAutoPlay; // @synthesize isDisableVideoAutoPlay=_isDisableVideoAutoPlay;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(retain, nonatomic) WCFinderFeedContentVM *currentShareContentVM; // @synthesize currentShareContentVM=_currentShareContentVM;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *noDataTipsView; // @synthesize noDataTipsView=_noDataTipsView;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCFinderFoldListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)liveNoticeUserame:(id)arg1 clickLiveNoticeInfo:(id)arg2;
- (void)liveNoticeTableViewCell:(id)arg1 updateLiveNoticeInfo:(id)arg2;
- (void)onClickInduceCommnetView:(id)arg1 forFeedVM:(id)arg2 identifyType:(unsigned long long)arg3 commentPostScene:(long long)arg4;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)finderTLFeedPrivateCell:(id)arg1 stateChange:(_Bool)arg2;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(_Bool)arg4 dataItem:(id)arg5;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClickRightItem;
- (void)onClickCommentUserName:(id)arg1 contentVM:(id)arg2;
- (void)finderCommentCell:(id)arg1 didClickCommentLikeWithcomment:(id)arg2 contentVM:(id)arg3;
- (void)onRefreshMediaUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onRefreshCommentUI:(id)arg1 needAnimation:(_Bool)arg2;
- (void)onClickCommentAction:(id)arg1 contentVM:(id)arg2;
- (void)showCommentActionSheetWithComment:(id)arg1 contentVM:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(struct CGRect)arg3;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(_Bool)arg2;
- (void)onRefreshContentCellUI:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)onClickLongEntry:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickToolbarShareAction:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(_Bool)arg2 refCommentID:(unsigned long long)arg3;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(_Bool)arg2;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)doShowInduceCommentForCurrentPhoto:(id)arg1;
- (void)tryShowInduceCommentForCurrentPhoto:(id)arg1 preContentVM:(id)arg2;
- (void)showLongVideoBubble:(id)arg1;
- (void)onShowLongVideoBubble:(id)arg1;
- (void)reloadInduceCommentCell:(id)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(id)arg4;
- (_Bool)onMultiMediaCellIsInHotSpots:(id)arg1;
- (_Bool)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)retryLoadingVideoResource:(_Bool)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(_Bool)arg2;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)onFeedCellDidClickLiveNowView:(id)arg1 contentVM:(id)arg2;
- (void)onFeedCellDidClickHeaderView:(id)arg1 contentVM:(id)arg2;
- (void)didSelectVideoMediaMuteChanged:(_Bool)arg1;
- (void)onLiveFeedDidTap:(id)arg1;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onRefreshFriendUI:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)scrollEndProcess;
- (void)throttleScrollProcess;
- (void)preloadVideoItems;
- (void)checkCurrentForceIndexPath;
- (void)reportCurrentTidStats;
- (void)currentForceIndexPathWillChanged;
- (void)updateCurrentVideoThumb;
- (void)resetCurrentVideoThumb;
- (void)needsUpdateCurrentVideo:(_Bool)arg1;
- (void)stopVisibleVideo;
- (void)stopCurrentMedia;
- (void)autoplayVideoProcess;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)processLastVideoHunger;
- (void)resetFooterViewNormal;
- (void)FoldListFetchFailWithErrorCode:(int)arg1;
- (void)FoldListEmpty;
- (void)FoldListDeleteDataItemVM:(id)arg1;
- (void)FoldListDisinclineContentVM:(id)arg1 index:(long long)arg2;
- (void)FoldListNoMoreData;
- (void)FoldListLoadMoreFinished;
- (id)specialParamsForFeedId:(id)arg1;
- (void)reloadDataWrap;
- (id)getListView;
- (id)feedIdByIndex:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)configureTableView;
- (void)dealloc;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDataItem:(id)arg1 targetIndex:(unsigned long long)arg2 scrollTargetIndexPathToHalfScreen:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

