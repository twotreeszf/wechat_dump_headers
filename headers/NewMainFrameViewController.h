//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "BrandTimelineMsgMgrExt-Protocol.h"
#import "CreateChatLogicDelegate-Protocol.h"
#import "IAutoSetRemarkExt-Protocol.h"
#import "IMMFacebookMgrExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "IWXTalkPresentExt-Protocol.h"
#import "MMConfigMgrExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "MMTitleViewDelegate-Protocol.h"
#import "MMUIViewControllerExt-Protocol.h"
#import "MainFrameHeaderDelegate-Protocol.h"
#import "MainTableDelegate-Protocol.h"
#import "MiniTaskUIMgrExt-Protocol.h"
#import "NewMainFrameRightTopMenuBtnDelegate-Protocol.h"
#import "SelectContactsViewControllerDelegate-Protocol.h"
#import "TextStatePlanetPageSheetViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAMainFrameTaskBarLogicDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCGlobalSearchDelegate-Protocol.h"
#import "WCLazyInitObjectProtocol-Protocol.h"
#import "WCSearchDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "mainFrameLogicControllerDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class BrandTimelineViewController, CreateChatLogic, MFTitleView, MMLoadingView, MMMainTableView, MMSessionInfo, MMTimer, MainFrameHeaderLogic, MainFrameLogicController, MainFrameUnreadReporter, NSIndexPath, NSString, UIColor, UIDynamicAnimator, UIImageView, UIView, WAMainFrameDesktopLogic, WAMainFrameTaskBarLogic, WAMainFrameTaskBarView, WAMainFrameTopHeaderView;
@protocol UIViewControllerPreviewing;

@interface NewMainFrameViewController : MMTabBarBaseViewController <WAMainFrameTaskBarLogicDelegate, SelectContactsViewControllerDelegate, IMMFacebookMgrExt, MMUIViewControllerExt, MMConfigMgrExt, BrandTimelineMsgMgrExt, NewMainFrameRightTopMenuBtnDelegate, WCSearchDelegate, WCDataSearchDelegate, WCGlobalSearchDelegate, tableViewDelegate, MMLimitedModeExt, MiniTaskUIMgrExt, MMTitleViewDelegate, TextStatePlanetPageSheetViewControllerDelegate, mainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMKernelExt, IWXTalkPresentExt, IVOIPUILogicMgrExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, MainTableDelegate, IWCDeviceBrandMgrExt, MainFrameHeaderDelegate, WCLazyInitObjectProtocol>
{
    MainFrameLogicController *m_mainFrameLogicController;
    MMMainTableView *m_tableView;
    UIImageView *m_logoImageView;
    MFTitleView *m_titleView;
    MMLoadingView *m_loadingView;
    _Bool m_bSearching;
    struct CGPoint m_tableContentOffset;
    unsigned int m_uiTipStatus;
    CreateChatLogic *m_createChatLogic;
    _Bool m_tableViewReady;
    MainFrameHeaderLogic *m_headerLogic;
    NSString *m_nsTitle;
    int m_voiceSearchLevelNumber;
    _Bool m_bOnMemoryWarningToFinishedSearchBar;
    double m_tableViewOffset;
    _Bool m_bIsLastViewStatusBarHidden;
    _Bool m_needResetTableViewOffset;
    MMSessionInfo *_peekedSession;
    _Bool m_firstLoadFinished;
    double m_messageCellHeight;
    WAMainFrameTaskBarLogic *m_taskBarLogic;
    WAMainFrameDesktopLogic *m_desktopLogic;
    WAMainFrameTopHeaderView *m_tableHeaderTopView;
    WAMainFrameTaskBarView *m_taskBarView;
    struct CGPoint m_tableViewStartDraggingContentOffset;
    struct CGPoint m_tableViewLastContentOffset;
    _Bool m_isDraggingDown;
    _Bool m_isScrollingDown;
    _Bool m_isShowTableHeaderTopView;
    _Bool m_isSettingShowTableHeaderTopView;
    _Bool m_isSettingHideTableHeaderTopView;
    _Bool m_dragCancelPreviousShowTableHeaderTopView;
    _Bool m_dragCancelPreviousHideTableHeaderTopView;
    _Bool m_isChangingTableHeaderTopViewHeight;
    _Bool m_shouldReloadOnAppear;
    UIColor *m_navBGOriginColor;
    double m_originWindowLevel;
    long long m_lastRowNum;
    NSString *m_confirmingSessionName;
    MMSessionInfo *m_swipedSession;
    MMSessionInfo *m_selectedSession;
    _Bool m_firstDoMainLazyThing;
    double lastScreenHeight;
    UIView *m_inviteFriendFooterView;
    unsigned int _startTime;
    BrandTimelineViewController *m_brandTimelineViewController;
    MMTimer *m_brandTimelineCacheTimer;
    id <UIViewControllerPreviewing> _previewingContext;
    NSIndexPath *_peekedIndexPath;
    _Bool haveLazyInit;
    _Bool _willAppearFromFailedMiniTaskPushAnimation;
    MainFrameUnreadReporter *_unreadReporter;
    UIDynamicAnimator *_animator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool willAppearFromFailedMiniTaskPushAnimation; // @synthesize willAppearFromFailedMiniTaskPushAnimation=_willAppearFromFailedMiniTaskPushAnimation;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) MainFrameUnreadReporter *unreadReporter; // @synthesize unreadReporter=_unreadReporter;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (void)onGoSquareForTopicId:(id)arg1;
- (void)onTitleViewClicked:(id)arg1;
- (void)didFinishedLoading:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)onRedDotShowed:(_Bool)arg1;
- (void)onChangeBizTimelineDisplayMode;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onBrandTimelineCacheTimeOut;
- (void)onBrandTimelineReturn;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)onLastChat;
- (void)onNextChat;
- (void)closeCurChat;
- (void)newChat;
- (void)onNextUnreadChat;
- (void)onSearch;
- (id)tagForCurrentPage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)openMassSend;
- (void)onMiniTaskEntryShowStateChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onMMDynamicConfigUpdated;
- (_Bool)checkIsMainFrameScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSetStrangerRemark:(id)arg1;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)updateItem:(id)arg1;
- (void)onAuthOK;
- (id)getSessionInfoByContact:(id)arg1;
- (void)SearchBarBecomeUnActive;
- (_Bool)shouldShowTabbar;
- (void)SearchBarBecomeActive;
- (void)setSearchTableResultText:(id)arg1;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (unsigned int)getAppIconTotalUnreadCount;
- (unsigned int)getTotalUnreadCount;
- (void)clearResource;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)resetTableViewOffset:(id)arg1;
- (void)animationShow;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)stopLoadingForSessionRebuild;
- (void)startLoadingForSessionRebuild;
- (void)initLoadingView;
- (void)deleteSessionCell:(unsigned int)arg1 withUser:(id)arg2;
- (void)selectCellForName:(id)arg1;
- (void)cancelSelectedCell;
- (void)updateAllItemTimeLabel;
- (void)updateSession:(id)arg1;
- (void)clearSessionCache;
- (void)reloadSessions;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)cancelSearch;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)handleBrandUnsubscribeAtRow:(unsigned long long)arg1;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)handleHideSession:(long long)arg1 atCell:(id)arg2;
- (void)handleCommitEdit:(unsigned long long)arg1;
- (void)deleteSessionAtIndex:(unsigned long long)arg1;
- (void)onArriveFundConfirmDeleteSession:(id)arg1;
- (void)onArriveFundCancelDeleteSession:(id)arg1;
- (void)onConfirmDeleteSessionAtIndex:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showEditActionSheet:(unsigned long long)arg1;
- (id)getDestructiveBtnTitle:(unsigned long long)arg1;
- (id)getActionSheetTitle:(unsigned long long)arg1;
- (_Bool)shouldDeselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (void)deselectCellByUsername:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)openContactInfoView:(id)arg1;
- (_Bool)isNeedMutilLevelView:(id)arg1;
- (_Bool)isNeedShowProfileInVoiceSearch:(long long)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCellBackGroundBySession:(id)arg1 cell:(id)arg2 showTopList:(_Bool)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getSectionType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8;
- (void)tryMoveToMainFrameTab;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openEnterpriseBrandSessionView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)openWeAppSessionView:(CDUnknownBlockType)arg1;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1 sessionInfo:(id)arg2 indexPath:(id)arg3;
- (void)openBrandSessionViewFromSource:(unsigned long long)arg1;
- (void)openWeSportView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateNearMode;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)setSearchBarActive;
- (_Bool)isSeachActive;
- (void)handleFrameChangeForSearchBar;
- (void)hideSearchBar;
- (_Bool)shouldShowTitleWindow;
- (void)finishSearchBarImmediately;
- (_Bool)hasShowSearchBar;
- (void)resetSearchBar;
- (id)getVoiceSearchBar;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)backToSplitViewEmptyViewController:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)resetViewStatus;
- (void)unLoadView;
- (void)unLoadData;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)removeMainFrameTip;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)showInviteFriendList;
- (void)OpenContactInfo:(id)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(id)arg1;
- (void)updateRow:(unsigned int)arg1;
- (void)removeRow:(unsigned int)arg1;
- (void)insertRow:(unsigned int)arg1;
- (_Bool)checkHeaderRowValid:(unsigned int)arg1;
- (void)reloadAll;
- (void)onShowPhoneFriend;
- (void)initFooterView;
- (void)initHeaderLogicAndHeaderView;
- (void)initTableView;
- (void)initNavigationTitileView;
- (void)initTitle;
- (void)tryDoLazyInitThing;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)reLayoutSubviews;
- (void)updateTitleView;
- (void)updateUnReadCount;
- (void)willAppear;
- (void)trackSingleClickAtMainFrame;
- (void)setNewMainFrameTableViewContentOffsetToTheFirstUnreadSessionAndOpen:(_Bool)arg1;
- (void)setNewMainFrameTableViewContentOffset:(struct CGPoint)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)fixMenuBug;
- (void)appBecomeActive;
- (void)doMainLazyThing;
- (void)delayToLoadMainTableViewData;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;
- (void)onMiniTaskPushGestureEnded:(_Bool)arg1;
- (void)notifyMiniTaskEntryStateChanegd;
- (void)notifyMiniTaskEntryWhenViewDidDisappear;
- (void)notifyMiniTaskEntryWhenViewWillDisappear;
- (void)notifyMiniTaskEntryWhenViewDidAppear;
- (void)notifyMiniTaskEntryWhenViewWillAppear;
- (void)notifyToLazyInitMiniTaskVC;
- (_Bool)shouldMiniTaskGestureBegin;
- (void)notifyLimitedModeUpdated;
- (void)notifyTaskBarOnRightBtnRedDotShow:(_Bool)arg1;
- (void)notifyTaskBarOnUpdateTitleViewNearMode;
- (void)notifyTaskBarOnUpdateTitleView:(unsigned int)arg1 title:(id)arg2;
- (unsigned long long)handleTouchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (unsigned long long)handleTouchesShouldCancelInContentView:(id)arg1;
- (_Bool)checkShouldBlockMainFrameScrollView;
- (void)checkTaskBarViewWidth;
- (void)setTableViewContentOffset:(struct CGPoint)arg1;
- (void)willOpenMainListVC;
- (id)getLeftBarButton;
- (id)getRightBarButton;
- (id)getTaskBarView;
- (void)onEnterForeground;
- (void)didOpenWeapp:(id)arg1 isSuccess:(_Bool)arg2;
- (void)willOpenWeapp:(id)arg1;
- (_Bool)isTaskBarNeedHideTabBar;
- (void)onTapOnFakeRightMenuButton;
- (void)onTapOnFoldButton;
- (void)willEndSearch;
- (void)onTapOnSearchButton;
- (void)onStarNodeShowStatusDidChangedTo:(_Bool)arg1;
- (void)didRotateToInterfaceOrientation:(long long)arg1;
- (void)onTaskBarHeightDidChangeTo:(double)arg1;
- (void)onDeleteToEmptyTaskBar;
- (void)onReceiveVisibleTick;
- (void)updateTaskBarDataIfNeeded;
- (void)onTaskBarSectionShouldRemove:(id)arg1;
- (void)onTaskBarDataUpdated:(_Bool)arg1;
- (void)taskBarDidDragUpToClose;
- (_Bool)useWhiteStatusBarColorWhenShown;
- (_Bool)isXDevice;
- (void)showStatusBar;
- (void)hideStatusBar;
- (double)getFullScreenHeight;
- (_Bool)useBlackStatusbar;
- (struct UIEdgeInsets)changeContentInsetTopTo:(double)arg1;
- (void)changeTaskBarViewHeightTo:(double)arg1;
- (_Bool)isNeedAnimateNavigationBarBeforeSettingContentOffSet;
- (void)checkTaskBarHiddenState;
- (void)hideNavigationBarForTaskBarCloseScene:(unsigned long long)arg1;
- (void)setTableViewContentInsetOffsetWithoutScrollWithContentInset:(struct UIEdgeInsets)arg1 contentOffset:(struct CGPoint)arg2;
- (void)setTableViewContentInsetAndOffsetWithIsTopViewShow:(_Bool)arg1 fromScene:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3 canceled:(CDUnknownBlockType)arg4;
- (void)showTableHeaderTopView:(_Bool)arg1 fromScene:(unsigned long long)arg2;
- (void)endSetHideTableHeaderTopView;
- (void)beginSetHideTableHeaderTopView;
- (void)endSetShowTableHeaderTopView;
- (void)beginSetShowTableHeaderTopView;
- (_Bool)navigationBarBlurEffect;
- (id)navigationBarBackgroundColor;
- (void)initFakeNavigatioBackgroundIfNeeded;
- (void)changeNavigationFakeBackgroundColor;
- (void)endDragToShow;
- (void)startDragToShow;
- (id)getAddBarButton;
- (void)notifyTaskBarOnViewDidTransitionToNewSize;
- (void)notifyToLazyInit;
- (void)setTableHeaderTopViewHiddenIfNotLimitedMode:(_Bool)arg1;
- (void)initTableHeaderTopView;
- (unsigned long long)checkDisappearScene;
- (void)notifyTaskBarOnViewDidDisappear;
- (void)notifyTaskBarOnViewWillDisappear;
- (void)notifyTaskBarOnViewWillAppear;
- (void)notifyTaskBarOnViewDidAppear;
- (void)notifyTaskBarOnWillFocusOnFirstUnreadSession;
- (void)notifyTaskBarOnDidEndSearch;
- (void)notifyTaskBarOnWillBeginSearch;
- (void)updateTabbarOffset:(double)arg1;
- (void)mainTableViewOffsetDidChangeTo:(struct CGPoint)arg1;
- (void)notifyTaskBarOnMainTableViewDidScroll:(id)arg1;
- (void)notifyTaskBarOnMainTableViewDidEndDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)notifyTaskBarOnMainTableViewWillBeginDragging:(id)arg1;
- (void)notifyTaskBarOnMainTableViewInitReady;
- (_Bool)needFixMaxIssueForiOS14_2Plus;
- (void)openSelectHKReceiveOrPayMoneyFromShortcut;
- (void)openSelectReceiveOrPayMoneyFromShortcut;
- (void)openSelectReceiveOrPayMoney;
- (void)openOverseaSelectReceiveOrPayMoney;
- (void)openOverseaFacingReceiveMoney;
- (void)openFace2FaceReceiveMoney;
- (void)onRadar;
- (void)onMassSend;
- (void)showQRInfoView;
- (void)showEmoticonStoreView;
- (void)showWCPayView;
- (void)showMyWCView;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)createVideoVOIPChat;
- (void)createVoiceVOIPChat;
- (void)onCreateScanCamera;
- (void)onCreateNewMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

