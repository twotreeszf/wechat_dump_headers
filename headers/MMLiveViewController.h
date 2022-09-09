//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "INetworkStatusMgrExt-Protocol.h"
#import "IRecordPermissionCheckExt-Protocol.h"
#import "MMAcceptAgreementResultViewControllerDelegate-Protocol.h"
#import "MMLiveCommentViewDelegate-Protocol.h"
#import "MMLiveCompleteViewControllerDelegate-Protocol.h"
#import "MMLiveConnectMicOperationPanelDelegate-Protocol.h"
#import "MMLiveContainerLogicControllerDelegate-Protocol.h"
#import "MMLiveLogicDelegate-Protocol.h"
#import "MMLiveOperationViewDelegate-Protocol.h"
#import "MMLiveStarterViewControllerDelegate-Protocol.h"
#import "MMLiveTaskMgrExt-Protocol.h"
#import "TRTCCloudDelegate-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMLiveCompleteViewController, MMLiveConnectMicLogic, MMLiveLogic, MMLiveOperationView, MMLiveStarterViewController, MMLiveTask, MMLiveTaskId, MMLiveView, NSMutableDictionary, NSString, UIImageView, UINavigationController;
@protocol MMLiveViewControllerDelegate;

@interface MMLiveViewController : MMUIViewController <TRTCCloudDelegate, MMLiveCommentViewDelegate, MMLiveConnectMicOperationPanelDelegate, INetworkStatusMgrExt, MMAcceptAgreementResultViewControllerDelegate, IRecordPermissionCheckExt, WAAppTaskMgrExt, MMLiveOperationViewDelegate, MMLiveCompleteViewControllerDelegate, MMLiveStarterViewControllerDelegate, MMLiveLogicDelegate, MMLiveTaskMgrExt, WCActionSheetDelegate, MMLiveContainerLogicControllerDelegate>
{
    _Bool _anchorJoinLiveAfterAbnormalExit;
    _Bool _isForcePortraitForExtend;
    _Bool _isClosing;
    _Bool _liveDidStarted;
    _Bool _liveDidFinished;
    _Bool _waitingJoinLive;
    _Bool _postponeJoinLive;
    _Bool _supressMinimizeWindowAutoupdate;
    _Bool _isAppTaskLaunchingDuringLive;
    _Bool _anchorLivePaused;
    _Bool _anchorNetworkUnavailable;
    id <MMLiveViewControllerDelegate> _delegate;
    MMLiveView *_liveView;
    MMLiveTaskId *_liveTaskId;
    MMLiveLogic *_liveLogic;
    MMLiveCompleteViewController *_completeViewController;
    UIImageView *_blurView;
    MMLiveStarterViewController *_starterViewController;
    UINavigationController *_navControl;
    CDUnknownBlockType _closeLiveBlock;
    NSString *_lastNetworkType;
    CDUnknownBlockType _forbidLiveActionCallback;
    NSMutableDictionary *_completeExtraInfo;
    MMLiveOperationView *_operationView;
    long long _currOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long currOrientation; // @synthesize currOrientation=_currOrientation;
@property(nonatomic) _Bool anchorNetworkUnavailable; // @synthesize anchorNetworkUnavailable=_anchorNetworkUnavailable;
@property(nonatomic) _Bool anchorLivePaused; // @synthesize anchorLivePaused=_anchorLivePaused;
@property(retain, nonatomic) MMLiveOperationView *operationView; // @synthesize operationView=_operationView;
@property(nonatomic) _Bool isAppTaskLaunchingDuringLive; // @synthesize isAppTaskLaunchingDuringLive=_isAppTaskLaunchingDuringLive;
@property(nonatomic) _Bool supressMinimizeWindowAutoupdate; // @synthesize supressMinimizeWindowAutoupdate=_supressMinimizeWindowAutoupdate;
@property(nonatomic) _Bool postponeJoinLive; // @synthesize postponeJoinLive=_postponeJoinLive;
@property(retain, nonatomic) NSMutableDictionary *completeExtraInfo; // @synthesize completeExtraInfo=_completeExtraInfo;
@property(copy, nonatomic) CDUnknownBlockType forbidLiveActionCallback; // @synthesize forbidLiveActionCallback=_forbidLiveActionCallback;
@property(retain, nonatomic) NSString *lastNetworkType; // @synthesize lastNetworkType=_lastNetworkType;
@property(nonatomic) _Bool waitingJoinLive; // @synthesize waitingJoinLive=_waitingJoinLive;
@property(nonatomic) _Bool liveDidFinished; // @synthesize liveDidFinished=_liveDidFinished;
@property(nonatomic) _Bool liveDidStarted; // @synthesize liveDidStarted=_liveDidStarted;
@property(nonatomic) _Bool isClosing; // @synthesize isClosing=_isClosing;
@property(copy, nonatomic) CDUnknownBlockType closeLiveBlock; // @synthesize closeLiveBlock=_closeLiveBlock;
@property(nonatomic) __weak UINavigationController *navControl; // @synthesize navControl=_navControl;
@property(retain, nonatomic) MMLiveStarterViewController *starterViewController; // @synthesize starterViewController=_starterViewController;
@property(nonatomic) _Bool isForcePortraitForExtend; // @synthesize isForcePortraitForExtend=_isForcePortraitForExtend;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMLiveCompleteViewController *completeViewController; // @synthesize completeViewController=_completeViewController;
@property(nonatomic) _Bool anchorJoinLiveAfterAbnormalExit; // @synthesize anchorJoinLiveAfterAbnormalExit=_anchorJoinLiveAfterAbnormalExit;
@property(retain, nonatomic) MMLiveLogic *liveLogic; // @synthesize liveLogic=_liveLogic;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMLiveView *liveView; // @synthesize liveView=_liveView;
@property(nonatomic) __weak id <MMLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onMMLiveFullScreenTipsViewClose;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onNetworkStatusChange:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)stopStarterViewTimer;
- (void)showForbidLiveViewWithTitleLabel:(id)arg1 withDescLabel:(id)arg2 hasLinkLabel:(_Bool)arg3 andActionCallback:(CDUnknownBlockType)arg4;
- (void)showForbidLiveViewWithTitleLabel:(id)arg1 withDescLabel:(id)arg2 andActionCallback:(CDUnknownBlockType)arg3;
- (void)showConfirm:(id)arg1 withConfirmBlock:(CDUnknownBlockType)arg2;
- (void)showAlert:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)showToastWithTitle:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMMLiveCompleteViewControllerClose;
- (void)onMMLiveOperationInviteFriendsBtnClicked;
- (void)onMMLiveOperationUserHeadImageClicked:(id)arg1 userInfo:(id)arg2;
- (double)getControllerVisibleHeight;
- (void)onMMLiveOperationShareScreen;
- (void)onMMLiveOperationConnectSwitchCamera;
- (void)onMMLiveOperationConnectMic;
- (void)onMMLiveOperationClose;
- (void)onMMLiveStarterViewControllerUserCancelLive;
- (void)onMMLiveStarterViewControllerSwitchCamera;
- (void)onMMLiveStarterViewControllerClose;
- (void)onMMLiveStarterViewControllerStartLive;
- (void)onMMLiveStarterViewControllerCreateLive:(id)arg1;
- (void)onLiveTask:(id)arg1 sysCallInterrupted:(_Bool)arg2;
- (void)onLiveTask:(id)arg1 connectOtherRoomResult:(_Bool)arg2 userId:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5;
- (void)onLiveTask:(id)arg1 remoteUserLeaveRoom:(id)arg2 reason:(long long)arg3;
- (void)onLiveTask:(id)arg1 remoteUserEnterRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 cdnPlayRemoteVideoSizeChanged:(struct CGSize)arg2;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)onLiveTask:(id)arg1 user:(id)arg2 videoAvailable:(_Bool)arg3;
- (void)onLiveTask:(id)arg1 user:(id)arg2 audioAvailable:(_Bool)arg3;
- (void)onLiveTask:(id)arg1 switchRoleType:(int)arg2 errMsg:(id)arg3;
- (void)onLiveTask:(id)arg1 liveSdkInfoWillExpire:(id)arg2;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onLiveTask:(id)arg1 enterLiveRoom:(id)arg2;
- (_Bool)checkTask:(id)arg1;
- (id)getLiveOperationView;
- (void)onGetAnchorStatus;
- (void)onGetLiveInfo;
- (void)onLiveClosed:(id)arg1;
- (void)onShareLive:(id)arg1;
- (void)onJoinLive:(id)arg1;
- (void)onCreateLive:(id)arg1;
- (void)switchCaptureSource;
- (void)switchCameraAction;
- (void)closeRoomAction;
- (id)getLiveCloseDestructiveTitle;
- (void)minimizeLive:(CDUnknownBlockType)arg1;
- (void)gotoUserProfile:(id)arg1 isAnchorHeadImage:(_Bool)arg2;
- (void)joinLive;
- (void)createLive:(id)arg1;
- (long long)getCurrentOrientation;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)rotateToOrientation:(long long)arg1;
- (_Bool)shouldShowCloseButtonWhenMinimized;
- (_Bool)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (_Bool)shouldInvokeInteractiveTransition;
- (_Bool)shouldSupportInteractiveTransition;
- (id)currentLiveViewController;
- (void)hideView;
- (void)showView;
- (id)createOperationView;
- (void)layoutOperationView;
- (void)layoutBlurView;
- (void)layoutLiveView;
- (void)layoutUI;
- (void)showLiveStarterViewController;
- (void)initUI;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
@property(readonly, nonatomic) MMLiveTask *liveTask;
@property(readonly, nonatomic) long long roleType;
@property(readonly, nonatomic) unsigned long long liveId;
@property(readonly, nonatomic) MMLiveConnectMicLogic *connectMicLogic;
- (id)realNavigationController;
- (void)delayShowAnchorVideoUnavailable:(id)arg1;
- (void)showCompleteViewController:(id)arg1;
- (id)createCompleteViewController;
- (void)gotoCompletePage;
- (void)gotoCompletePageOverride;
- (void)closeWithError:(id)arg1 needNotify:(_Bool)arg2;
- (void)closeWithoutNavigation;
- (void)closeByCutLive;
- (void)close;
- (void)closeDirectly;
- (void)exitAndClearLive;
- (long long)preferredStatusBarStyle;
- (_Bool)useBlackStatusbar;
- (void)dealloc;
- (_Bool)shouldInteractivePop;
- (unsigned long long)currentOrientationMask;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)forceLayoutForOrientationChanged;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)startHandleForLiveRoomDidLoad;
- (void)viewDidLoad;
- (void)initNotifications;
- (void)initLiveLogic;
- (void)initData;
- (void)initAbnormalState;
- (_Bool)shouldSupportLandScape;
- (_Bool)isJoinLiveAfterAbnormalExit;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

