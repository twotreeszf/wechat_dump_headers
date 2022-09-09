//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "AppUserInterfaceSizeDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MainTabBarControllerDelegate-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"
#import "WCPayWalletLockVerifyLogicDelegate-Protocol.h"

@class MMMainViewController, MMSplitViewController, MainTabBarViewController, NSMutableArray, NSString, PreEnterWechatLogic, SplitViewEmptyViewController, UIViewController, UIWindow;

@interface CAppViewControllerManager : MMObject <MainTabBarControllerDelegate, WCPayWalletLockVerifyLogicDelegate, UISplitViewControllerDelegate, AppUserInterfaceSizeDelegate, UITabBarControllerDelegate, MMKernelExt, IMsgExt>
{
    UIWindow *m_window;
    unsigned int m_uCurrentTabViewIndex;
    NSMutableArray *m_vecViewController;
    _Bool m_bFromReg;
    PreEnterWechatLogic *m_PreEnterWechatLogic;
    MainTabBarViewController *m_tabbarController;
    MMMainViewController *m_mainViewController;
    MMSplitViewController *m_splitViewController;
    SplitViewEmptyViewController *m_emptyVc;
    NSMutableArray *m_detailViewControllers;
    _Bool m_lastPush;
    _Bool _m_isHandlingOrientationEvent;
    _Bool _m_isForceUsingSingleColumnMode;
    NSMutableArray *_m_presentedViewControllers;
    UIViewController *_m_lastPresentedViewController;
}

+ (_Bool)shouldTopRightMenuShowID:(id)arg1;
+ (id)getPrevNavigationControllerFor:(id)arg1;
+ (_Bool)isVisibleChildViewControllerOf:(id)arg1 ToFindViewController:(id)arg2;
+ (id)rootPresentingViewControllerWithViewController:(id)arg1;
+ (id)navigationControllerListWithViewController:(id)arg1;
+ (id)topNavigationControllerOnMainWindow;
+ (id)topViewControllerOfWindow:(id)arg1;
+ (id)topViewControllerOfMainWindow;
+ (id)topMostController;
+ (id)getCurrentNavigationController;
+ (id)getTabBarController;
+ (id)getAppViewControllerManager;
+ (_Bool)hasEnterWechatMain;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_isForceUsingSingleColumnMode; // @synthesize m_isForceUsingSingleColumnMode=_m_isForceUsingSingleColumnMode;
@property(nonatomic) _Bool m_isHandlingOrientationEvent; // @synthesize m_isHandlingOrientationEvent=_m_isHandlingOrientationEvent;
@property(retain, nonatomic) UIViewController *m_lastPresentedViewController; // @synthesize m_lastPresentedViewController=_m_lastPresentedViewController;
@property(retain, nonatomic) NSMutableArray *m_presentedViewControllers; // @synthesize m_presentedViewControllers=_m_presentedViewControllers;
- (void)setStatusBarStyle:(long long)arg1 viewController:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 animation:(long long)arg2 viewController:(id)arg3;
- (void)onInterfaceSizeChangedToRegular;
- (void)onInterfaceSizeChangedToCompact;
- (void)onAppUserInterfaceSizeChanged:(id)arg1 previousTraitCollection:(id)arg2 currentTraitCollection:(id)arg3;
- (void)printView:(id)arg1 withLevel:(int)arg2 buffer:(id)arg3;
- (id)formatCGFloat:(double)arg1;
- (void)didTakeSnapshot:(id)arg1;
- (void)didChangeScreenCapture:(id)arg1;
- (id)getMMTabBarController;
- (id)getMMSplitViewController;
- (id)getTabBarController;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)UIWindowDidResignKeyNotification:(id)arg1;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (void)jumpToChat:(id)arg1 msgToLocate:(id)arg2;
- (void)JumpToViewController:(id)arg1;
- (void)HandleMoreJump:(id)arg1;
- (void)HandleFindFriendJump:(id)arg1;
- (void)HandleMainFrameJump:(id)arg1;
- (id)getMainWindow;
- (void)changeLanguage;
- (void)refreshLanguage:(long long)arg1;
- (void)refreshLanguage:(long long)arg1 withChildScene:(id)arg2;
- (_Bool)isNowInRootViewController;
- (void)openPluginFeature:(long long)arg1;
- (void)jumpToSettingWcRecentPrivacy:(unsigned long long)arg1;
- (void)jumpToSettingPrivacy:(_Bool)arg1;
- (void)jumpToOfflinePay;
- (void)internalJumpToShareCard;
- (void)jumpToShareCardAndCheck;
- (void)jumpToShareCard;
- (void)jumpToAlbum;
- (void)jumpToShake;
- (void)jumpToCameraScan:(int)arg1 showMainView:(_Bool)arg2;
- (void)jumpToCameraScan:(int)arg1;
- (void)jumpToURLShardBy3rdApp:(id)arg1;
- (unsigned int)getCurTabBarIndex;
- (id)getTopViewController;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)removeViewFromRootViewController:(id)arg1;
- (void)addViewControllerToRootView:(id)arg1;
- (void)removeViewFromRootView:(id)arg1;
- (void)addViewToRootView:(id)arg1;
- (unsigned int)getAppIconTotalUnReadCount;
- (id)getSplitPresentedViewController;
- (_Bool)isUsingSplitView;
- (id)getSplitDetailNavigationController;
- (id)getMMMainViewController;
- (void)closeMainFrame;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2;
- (void)openMainFrame:(_Bool)arg1 showStyle:(id)arg2 startPreStep:(_Bool)arg3;
- (void)openMainFrameFirstStep:(_Bool)arg1;
- (void)openFirstView;
- (void)setAllTabBarItemEnabled:(_Bool)arg1;
- (void)newMessageByEnterpriseContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 showSessionList:(_Bool)arg4 animated:(_Bool)arg5 extraInfo:(id)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4 extraInfo:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4 extraInfo:(id)arg5;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 showMainView:(_Bool)arg3 animated:(_Bool)arg4;
- (void)moveToTab:(long long)arg1 showMainView:(_Bool)arg2;
- (void)moveToRootViewControllerForIndex:(long long)arg1;
- (void)moveToRootViewController;
- (void)safeMoveToRoot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)safeMoveToRootViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissToRootViewControllerForIndex:(long long)arg1;
- (void)dismissToRootViewController;
- (void)mainTabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)mainTabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)onMainTabBarMainFrameSingleClicked:(id)arg1;
- (void)onMainTabBarMainFrameDoubleClicked:(id)arg1;
- (double)getLeftColumnWidthForSplitView;
- (void)setRightViewControllerForSplitView:(id)arg1 forPush:(_Bool)arg2;
- (void)setPrimaryShown;
- (void)setPrimaryHidden;
- (void)splitViewPopToRootViewController;
- (id)getRightViewControllerForSplitView;
- (void)dealloc;
- (_Bool)splitViewController:(id)arg1 shouldHideViewController:(id)arg2 inOrientation:(long long)arg3;
- (void)toogleColumnModelIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)endForceUsingSingleColumnMode;
- (void)forceUsingSingleColumnMode;
- (void)checkIfTopVCAnimatingAndToogleColumnMode;
- (_Bool)isTopVCAnimating;
- (void)checkColumnModeForCurOrientationIfNeeded;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)resetTabbarAndSplitView;
- (void)resetNavItem:(id)arg1;
- (_Bool)shouldChangeToOtherSplitMode:(id)arg1;
- (void)changeToSplitViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)internalChangeToSplitViewController:(id)arg1;
- (void)changeToSingleViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)internalChangeToSingleViewController:(id)arg1;
- (void)presentAllViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAllPresentedViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)findLastPresentedViewControllerWith:(id)arg1;
- (void)createSplitViewControllerWithNavigationController:(id)arg1;
- (void)createMainFrameWithShowStyle:(id)arg1 startPreStep:(_Bool)arg2;
- (_Bool)shouldUseSplitView;
- (void)createTabbarController;
- (void)replaceTwoFile:(id)arg1 desFile:(id)arg2;
- (void)recreateFindFriendViewController;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getNewMainFrameViewController;
- (id)getPreEnterWechatLogic;
- (void)forceRedrawNavigationBars;
- (void)registerNotification;
- (id)initWithWindow:(id)arg1;
- (void)restartAllFailUploadFromLocalNotification;
- (void)reSendAllMsgFromNotificationDone;
- (void)resendAllFailMsgFromLocalNotification:(id)arg1;
- (_Bool)checkResentFailMsgForNotification:(id)arg1 isFromLaunch:(_Bool)arg2;
- (void)openView:(unsigned int)arg1 launchOptions:(id)arg2 isAppUpdated:(_Bool)arg3;
- (id)getMainWindowViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

