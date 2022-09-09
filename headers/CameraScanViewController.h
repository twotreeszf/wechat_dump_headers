//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "CNetworkStatusExt-Protocol.h"
#import "CameraScanTabViewDelegate-Protocol.h"
#import "CameraScannerStatusExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class BizScanTabBarInfo, CameraScanBlurButtonWrapView, CameraScanTabView, CameraScanViewControllerOpenParams, CameraScannerViewWrapper, MMUIButton, NSMutableDictionary, NSString, OCRTransReport, RecentPhotoBubbleView, UIImageView, UILabel, UISwipeGestureRecognizer, UIView;
@protocol CameraScanUIDelegate;

@interface CameraScanViewController : MMUIViewController <MMImagePickerManagerDelegate, IVOIPUILogicMgrExt, CameraScannerStatusExt, MultiTalkMgrExt, CameraScanTabViewDelegate, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, CNetworkStatusExt>
{
    long long _cameraScanType;
    long long _scanTabAction;
    int _cameraScanCodeType;
    _Bool _hideBottomBar;
    _Bool _showAllBottomBtn;
    id <CameraScanUIDelegate> _delegate;
    NSMutableDictionary *_logicDict;
    unsigned int _beepSound;
    _Bool _isManualCameraZoom;
    OCRTransReport *_transReport;
    _Bool _isNetDisconnect;
    _Bool _bTorchViewHidden;
    _Bool _hasInit;
    _Bool _hasInvokedViewDidLoad;
    _Bool _isPickingImageFromAlbum;
    _Bool _isShowingAlertView;
    _Bool _isLoading;
    unsigned int _enterSessionID;
    unsigned int _tabSessionID;
    CameraScanViewControllerOpenParams *_openParams;
    unsigned long long _enterScene;
    CameraScanBlurButtonWrapView *_albumButtonWrapView;
    UIImageView *_bgImageView;
    UILabel *_infoLabel;
    CameraScanTabView *_tabView;
    MMUIButton *_closeButton;
    MMUIButton *_torchButton;
    UILabel *_torchLabel;
    UILabel *_descLabel;
    UIView *_alertBgView;
    UILabel *_alertLabel;
    UILabel *_smallAlertLabel;
    RecentPhotoBubbleView *_recentPhotoBubbleView;
    UISwipeGestureRecognizer *_leftSwipeGesture;
    UISwipeGestureRecognizer *_rightSwipeGesture;
    CameraScannerViewWrapper *_cameraScannerWrapper;
    BizScanTabBarInfo *_tabBarInfo;
    unsigned long long _enterTimestampInMS;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int tabSessionID; // @synthesize tabSessionID=_tabSessionID;
@property(nonatomic) unsigned long long enterTimestampInMS; // @synthesize enterTimestampInMS=_enterTimestampInMS;
@property(nonatomic) unsigned int enterSessionID; // @synthesize enterSessionID=_enterSessionID;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isShowingAlertView; // @synthesize isShowingAlertView=_isShowingAlertView;
@property(nonatomic) _Bool isPickingImageFromAlbum; // @synthesize isPickingImageFromAlbum=_isPickingImageFromAlbum;
@property(retain, nonatomic) BizScanTabBarInfo *tabBarInfo; // @synthesize tabBarInfo=_tabBarInfo;
@property(retain, nonatomic) CameraScannerViewWrapper *cameraScannerWrapper; // @synthesize cameraScannerWrapper=_cameraScannerWrapper;
@property(retain, nonatomic) UISwipeGestureRecognizer *rightSwipeGesture; // @synthesize rightSwipeGesture=_rightSwipeGesture;
@property(retain, nonatomic) UISwipeGestureRecognizer *leftSwipeGesture; // @synthesize leftSwipeGesture=_leftSwipeGesture;
@property(nonatomic) _Bool hasInvokedViewDidLoad; // @synthesize hasInvokedViewDidLoad=_hasInvokedViewDidLoad;
@property(nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(retain, nonatomic) RecentPhotoBubbleView *recentPhotoBubbleView; // @synthesize recentPhotoBubbleView=_recentPhotoBubbleView;
@property(retain, nonatomic) UILabel *smallAlertLabel; // @synthesize smallAlertLabel=_smallAlertLabel;
@property(retain, nonatomic) UILabel *alertLabel; // @synthesize alertLabel=_alertLabel;
@property(retain, nonatomic) UIView *alertBgView; // @synthesize alertBgView=_alertBgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) _Bool bTorchViewHidden; // @synthesize bTorchViewHidden=_bTorchViewHidden;
@property(retain, nonatomic) UILabel *torchLabel; // @synthesize torchLabel=_torchLabel;
@property(retain, nonatomic) MMUIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) CameraScanTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) _Bool isNetDisconnect; // @synthesize isNetDisconnect=_isNetDisconnect;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) CameraScanBlurButtonWrapView *albumButtonWrapView; // @synthesize albumButtonWrapView=_albumButtonWrapView;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) CameraScanViewControllerOpenParams *openParams; // @synthesize openParams=_openParams;
@property(readonly, nonatomic) int cameraScanCodeType; // @synthesize cameraScanCodeType=_cameraScanCodeType;
@property(nonatomic) __weak id <CameraScanUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hideBottomBar; // @synthesize hideBottomBar=_hideBottomBar;
@property(nonatomic) long long cameraScanType; // @synthesize cameraScanType=_cameraScanType;
- (long long)businessSubTypeForScanTabAction:(long long)arg1;
- (long long)businessTypeForEnterScene:(unsigned long long)arg1;
- (id)getGoodsLogicControllerIfCodesActive;
- (id)getCodesLogicControllerIfCodesActive;
- (void)resetCommonViewsLogicController:(id)arg1;
- (void)setCommonViewsOfLogicController:(id)arg1;
- (void)onTakePhotoButtonClicked;
- (void)onMyQRButtonClicked;
- (void)onAlbumButtonClicked;
- (void)onCloseButtonClicked;
- (_Bool)isActiveLogicController:(id)arg1;
- (_Bool)isNetworkDisconnect;
- (_Bool)isForbidSwitchTabIndex;
- (void)tabView:(id)arg1 didSelectTag:(unsigned long long)arg2 fromAction:(long long)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMoreAction:(id)arg1;
- (void)onShowScanHistory;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onInviteMultiTalk;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)startLogicCtrlHandler:(long long)arg1 tabAction:(long long)arg2;
- (void)stopCurrLogicCtrlHandler;
- (void)tabSwitchWithDiffValue:(long long)arg1 tabAction:(long long)arg2;
- (_Bool)shouldViewControllerDisplayRecentPhotoBubble;
- (void)onFetchedLastAssetOriginImage:(id)arg1 ThumbImage:(id)arg2;
- (_Bool)isScanCodeLogicCtrlActiveAndShowingScanGoodsGuide;
- (_Bool)isScanCodeLogicCtrlActiveAndHandlingMultiCodes;
- (_Bool)isScanCodeLogicCtrlActiveAndShowingError;
- (_Bool)isGoodsLogicCtrlActiveAndHandlingResult;
- (_Bool)shouldHandleDetectResult:(id)arg1;
- (void)voipWindowMaximized;
- (void)voipWindowMinimized;
- (double)getZoomFactor;
- (void)onSetCameraZoomFactor:(double)arg1;
- (void)onScanRequestTimeout;
- (void)onScanInUnreachableNetworkStatus;
- (void)onShowAlertWording;
- (void)setInfoLabelHidden:(_Bool)arg1 bAnim:(_Bool)arg2;
- (void)onUpdateWording;
- (id)getMainViewController;
- (void)onDetectSuccess;
- (void)onStopLoading;
- (void)onStartLoading;
- (void)onPopFromStack;
- (void)onEdgePanGestureRecognizerChanged:(_Bool)arg1;
- (void)onDismissModalViewControllerAnimated:(_Bool)arg1;
- (void)onPresentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)onPopViewControllerCount:(int)arg1 animated:(_Bool)arg2;
- (void)onPushViewContoller:(id)arg1 animated:(_Bool)arg2;
- (id)getNavigationController;
- (void)onLowLightStatusChanged:(_Bool)arg1;
- (_Bool)canScanInCurrentReachability;
- (void)ReachabilityChange:(unsigned int)arg1;
- (_Bool)shouldIgnoreSwipeGestureEvent:(id)arg1;
- (_Bool)isGestureInValidLocation:(id)arg1;
- (void)onRightSwipeGesture:(id)arg1;
- (void)onLeftSwipeGesture:(id)arg1;
- (void)onPinchGesture:(id)arg1;
- (void)onDoubleTapGesture:(id)arg1;
- (void)tapAtPoint:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)scanPickedImage:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)showImagePicker;
- (void)onIKnowItBtnClick;
- (void)stopAndHideLoadingView;
- (void)showAndStartLoadingView:(id)arg1;
- (void)onTorchButtonClicked:(id)arg1;
- (void)doHideTorchButton;
- (void)tryHideTorchButton;
- (void)showTorchButton;
- (void)setupTorchViewsWithOutAddToSuperView;
- (void)updateTorchButtonFrame;
- (void)reportAfterBePoped;
- (void)reportAfterExit;
- (_Bool)preViewControllerIsKindOf:(Class)arg1;
- (void)onOCRAlbumAction:(id)arg1;
- (void)onQRCodeAction:(id)arg1;
- (struct CGRect)getContentRect;
- (float)getContentHeight;
- (_Bool)isTorchViewHiddenNow;
- (double)getTabViewHeight;
- (id)getScanBookWording:(id)arg1;
- (float)getPreviewScale:(long long)arg1;
- (void)hideAlertWording;
- (void)showAlertWording:(id)arg1 Animated:(_Bool)arg2;
- (void)updateWording;
- (_Bool)shouldResetScanWhenViewWillAppear;
- (void)didTranslateResultViewControllerClose;
- (void)initActiveLogicControllerFromSwitchTab:(_Bool)arg1;
- (void)openLogicController:(long long)arg1 tabAction:(long long)arg2;
- (void)switchToLogicController:(long long)arg1 fromAction:(long long)arg2;
- (void)resetCameraZoomFactor;
- (void)resetOldLogicController;
- (void)ensureHasInvokedViewDidLoad;
- (id)getScanLogicController:(long long)arg1;
- (id)getActiveLogicController;
- (_Bool)hasScanLogicController:(long long)arg1;
- (void)stopLoadingDark;
- (void)startLoadingDarkAnimated:(_Bool)arg1;
- (void)stopScan;
- (void)startActiveLogicScan;
- (void)startScan;
- (void)alignTop:(id)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)dismissSelfAndDoReset;
- (void)stopScanAndPopSelf;
- (_Bool)shouldStopScanAndPopSelf;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setScannerDelegate:(id)arg1 cameraScanType:(long long)arg2;
- (void)viewDidTransitionToNewSize;
- (void)UISplitViewWillChangeSplitMode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)realDidRotateFromInterfaceOrientation;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (void)setupTabView;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (void)initGesture;
- (void)setupCommonViews;
- (void)setupCloseButton;
- (void)setupAlbumButtonWrapView;
- (void)setupBgImageView;
- (void)tryHideRecentPhotoBubbleView;
- (void)onRecentPhotoButtonClicked;
- (void)initView;
- (void)dealloc;
- (void)initMember;
- (void)initBottomBarHidden:(unsigned long long)arg1;
- (id)initWithCameraScanType:(long long)arg1 CodeType:(int)arg2 presentModal:(_Bool)arg3 enterScene:(unsigned long long)arg4 bottomBarConfig:(unsigned long long)arg5 openParams:(id)arg6;
- (id)initWithCameraScanType:(long long)arg1 presentModal:(_Bool)arg2 enterScene:(unsigned long long)arg3 bottomBarConfig:(unsigned long long)arg4 openParams:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

