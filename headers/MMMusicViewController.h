//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMusicMVPostDataServiceExt-Protocol.h"
#import "MMMusicAlbumRtnExt-Protocol.h"
#import "MMMusicDotMVDataSourceDelegate-Protocol.h"
#import "MMMusicLiveCGIMgrDelegate-Protocol.h"
#import "MMMusicLiveCommentLikeOperationHandler-Protocol.h"
#import "MMMusicLiveViewControllerDelegate-Protocol.h"
#import "MMMusicLyricsRtnExt-Protocol.h"
#import "MMMusicMVEditorViewControllerDelegate-Protocol.h"
#import "MMMusicMVMiniTransitionControllerDelegate-Protocol.h"
#import "MMMusicMVPlayerBgViewDelegate-Protocol.h"
#import "MMMusicMVRecommendViewControllerDataSource-Protocol.h"
#import "MMMusicVCCacheMgrProtocol-Protocol.h"
#import "MMMusicViewSharingTransitionAdaptedViewController-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMMusicDotMVDataSource, MMMusicInfo, MMMusicLiveBaseMsg, MMMusicLiveCGIMgr, MMMusicLiveViewController, MMMusicMVEditorViewController, MMMusicMVMiniTransitionController, MMMusicMVPlayerBgView, MMMusicVCOpenParams, NSArray, NSMutableArray, NSString, UIViewController;

@interface MMMusicViewController : MMUIViewController <MMMusicMVMiniTransitionControllerDelegate, MMMusicAlbumRtnExt, MMMusicLyricsRtnExt, MMMusicLiveViewControllerDelegate, MMMusicMVEditorViewControllerDelegate, MMMusicMVPlayerBgViewDelegate, MMMusicLiveCGIMgrDelegate, MMMusicLiveCommentLikeOperationHandler, WCActionSheetDelegate, MMMusicDotMVDataSourceDelegate, MMMusicViewSharingTransitionAdaptedViewController, IMusicMVPostDataServiceExt, MMMusicMVRecommendViewControllerDataSource, MMMusicVCCacheMgrProtocol>
{
    unsigned int m_uiCreateTime;
    _Bool m_hasPushedSystemInfo;
    unsigned int m_currentAudienceCount;
    MMMusicLiveCGIMgr *_cgiMgr;
    _Bool m_isSliding;
    double m_curMusicTimeInMs;
    double m_curMusicTimeInMsWhenBeginDragging;
    MMMusicVCOpenParams *_openParams;
    _Bool _bResumeMusicAfterBackFrom3rdApp;
    MMMusicLiveBaseMsg *_tappedBaseMsg;
    _Bool _bAppear;
    _Bool _isLoadingRecommendedModels;
    _Bool _hasRequestedDataForEmptyMV;
    _Bool _isOpeningCommentList;
    _Bool _hasGetSongStatusResponse;
    MMMusicMVMiniTransitionController *_transitionController;
    MMMusicDotMVDataSource *_mvDataSource;
    NSString *_songId;
    MMMusicInfo *_musicInfo;
    MMMusicMVPlayerBgView *_mvPlayerView;
    UIViewController *_currentTopViewController;
    NSMutableArray *_recommendedModels;
    MMMusicLiveViewController *_liveViewController;
    MMMusicMVEditorViewController *_editorViewController;
    NSString *_curVideoUsrName;
    NSString *_taskBizKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey=_taskBizKey;
@property(nonatomic) _Bool hasGetSongStatusResponse; // @synthesize hasGetSongStatusResponse=_hasGetSongStatusResponse;
@property(nonatomic) _Bool isOpeningCommentList; // @synthesize isOpeningCommentList=_isOpeningCommentList;
@property(nonatomic) _Bool hasRequestedDataForEmptyMV; // @synthesize hasRequestedDataForEmptyMV=_hasRequestedDataForEmptyMV;
@property(retain, nonatomic) NSString *curVideoUsrName; // @synthesize curVideoUsrName=_curVideoUsrName;
@property(retain, nonatomic) MMMusicMVEditorViewController *editorViewController; // @synthesize editorViewController=_editorViewController;
@property(retain, nonatomic) MMMusicLiveViewController *liveViewController; // @synthesize liveViewController=_liveViewController;
@property(retain, nonatomic) NSMutableArray *recommendedModels; // @synthesize recommendedModels=_recommendedModels;
@property(retain, nonatomic) UIViewController *currentTopViewController; // @synthesize currentTopViewController=_currentTopViewController;
@property(retain, nonatomic) MMMusicMVPlayerBgView *mvPlayerView; // @synthesize mvPlayerView=_mvPlayerView;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) MMMusicDotMVDataSource *mvDataSource; // @synthesize mvDataSource=_mvDataSource;
@property(retain, nonatomic) MMMusicMVMiniTransitionController *transitionController; // @synthesize transitionController=_transitionController;
- (void)setPushedFromType:(int)arg1;
- (void)reportFullStatsImmediately;
- (void)pourForwardStat;
- (void)pourMusicFeedStartStat;
@property(readonly) NSArray *mvModelsForMVRecommendedViewController;
@property(readonly) unsigned long long totalMVModelsCountForMVRecommendedViewController;
- (void)onMVPostDataServicePostMVFailedWithLocalId:(id)arg1;
- (void)onMVPostDataServicePostMVSuccess:(id)arg1 svrDataItem:(id)arg2 localId:(id)arg3;
- (void)onMusicLiveCheckPermissionWithIsSuccess:(_Bool)arg1 canCreate:(_Bool)arg2 statusVerifyInfo:(id)arg3;
- (void)onMusicLiveGetSongStatusWithIsSuccess:(_Bool)arg1 resp:(id)arg2;
- (void)onMusicMVCGISerivceGetMvInfoFailWithObjectId:(unsigned long long)arg1 failureType:(unsigned long long)arg2;
- (void)onMusicMVCGISerivceGetMvInfoSuccessWithMVModel:(id)arg1 objectId:(unsigned long long)arg2;
- (void)onMusicPlayStatusChanged;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)deleteCurrentMV;
- (void)doLikeMVOperation:(_Bool)arg1;
- (void)updateCurrentVideoFinderAuthorInfo;
- (void)switchToMVModelAnimated:(id)arg1 directionIsLeft:(_Bool)arg2;
- (void)reloadDataWithMVModel:(id)arg1 seekToStart:(_Bool)arg2;
- (void)requestRecommendedList;
- (void)requestInitialDataIfNoMV;
- (id)currUinNickName;
- (id)currUin;
- (void)seekMusicToDotStart;
- (void)getVideoUrlFromTrackItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startPreloadNextVideo:(unsigned long long)arg1;
- (void)onMusicLiveGetBeatTracks:(id)arg1;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(_Bool)arg2;
- (void)onMusicLivePostMsgIsSuccess:(_Bool)arg1 newMsg:(id)arg2 songId:(id)arg3 errMsg:(id)arg4;
- (void)onMusicLiveGetHotMsgList:(id)arg1 songId:(id)arg2;
- (void)onMusicLiveHeartBeatRespWithOnlineCount:(unsigned int)arg1 songId:(id)arg2 bSuccess:(_Bool)arg3;
- (void)onMusicLiveJoinWithSongId:(id)arg1 isSuccess:(_Bool)arg2;
- (void)handleLiveCommentLikeOperation:(_Bool)arg1 withModel:(id)arg2;
- (void)onMVEditorViewControllerCreatedMVFinished:(id)arg1 isDraft:(_Bool)arg2;
- (void)onDotMvDataSourceCurrDotIndexChangedFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 playedTimeInMs:(unsigned int)arg3 videoTimeOffset:(unsigned int)arg4;
- (void)onDotMvDataSourcePlayedTimeChanged:(unsigned int)arg1;
- (void)updateUIWhenEndDragging;
- (void)updateUIWhenBeginDragging;
- (void)updateStatusWhenIndexChanged:(unsigned int)arg1 videoTimeOffset:(unsigned int)arg2;
- (void)onShareActionSuccess;
- (void)onLiveVCTransitToMVWithMsg:(id)arg1;
- (void)onLiveVCSendCommentWithContent:(id)arg1;
- (void)onOpen3rdMusicApp;
- (void)onToggleLikeMVStatus;
- (void)onClickComment;
- (void)openCommentListWithRefCommentID:(unsigned long long)arg1;
- (void)onClickRetryPostMV;
- (void)onClickDeleteMV;
- (void)onClickCreateMV;
- (void)onLiveVCMusicResume:(double)arg1;
- (void)onLiveVCMusicPause:(double)arg1;
- (void)onLiveVCMusicSliderDidClick:(double)arg1;
- (void)onLiveVCMusicSliderDidSeek:(double)arg1;
- (void)onLiveVCMusicSliderProgressChanged:(double)arg1 isSliding:(_Bool)arg2;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)onPageScroll;
- (void)musicMVPlayerOnHorizontalSwipeWithDirection:(_Bool)arg1;
- (void)musicMVPlayerOnHideBufferingView;
- (void)musicMVPlayerOnShowBufferingView;
- (void)onClickOpenRecommendedMVList;
- (void)musicMVPlayerOnLikeOperation;
- (_Bool)onShouldMenuShowComplain;
- (id)onLiveVCGetMusicShareItem;
- (void)onAuthorInfoViewClickSwitch;
- (void)onAuthorInfoViewClickFinderHitLabel;
- (void)onAuthorInfoViewClickMVNickName;
- (void)onAuthorInfoViewClickMVAvatar;
- (_Bool)isEnterFromFinder;
- (void)pushFinderProfileWithUsername:(id)arg1;
- (void)musicMVPlayerOnClickMVHeadImg;
- (void)musicMVPlayerOnClickMVNickname;
- (void)musicMVPlayerOnVideoToggleJumpFinderProfileOperation:(id)arg1;
- (void)musicMVPlayerOnTappedVideo;
- (void)musicMVPlayerOnVideoTogglePostOperation;
- (void)muiscMVPlayerOnTryPostVideo;
- (void)musicMVPlayerWillDisplayEpisodeView:(id)arg1 ofIndex:(unsigned long long)arg2;
- (void)musicMVPlayerDidEndDragging;
- (double)calculateProgressFromTranslationX:(double)arg1;
- (void)musicMVPlayerDidDragWithTranslation:(double)arg1;
- (void)musicMVPlayerWillBeginDragging;
- (double)musicMVPlayerTrackPlayOffsetAtIndex:(unsigned long long)arg1;
- (id)musicMVPlayerTrackItemAtIndex:(unsigned long long)arg1;
- (long long)numberOfMusicMVTracks;
- (void)viewDidLayoutSubviews;
- (void)appWillEnterForeground:(id)arg1;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)initData;
- (void)initView;
- (_Bool)hasActiveMusicVCInCurNavVC;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOpenParams:(id)arg1;
- (void)dealloc;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(int)arg1;
- (id)minimizationTaskData;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)hideOrShowVisibleCellVideoPlayerView:(_Bool)arg1;
- (void)transitToViewController:(id)arg1 animator:(id)arg2 beforeTransition:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setupEditorViewControlleIfNeeded;
- (void)setupLiveViewControllerIfNeeded;
- (id)transitionAnimatorWithSharingViews:(id)arg1;
- (id)defaultTransitionAnimator;
- (void)presentEditorViewController;
- (void)transitToLiveViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
