//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IWAAppEntryExtension-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WADynamicBackgroundGLViewControllerDelegate-Protocol.h"
#import "WAMainFrameTaskItemMgrExt-Protocol.h"
#import "WAMainFrameTaskbarOperationViewControllerDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WAStarCollectionViewLayoutDelegate-Protocol.h"

@class CAGradientLayer, CAShapeLayer, DynamicBackgroundSystemConfig, MMUIViewController, NSMutableArray, NSString, UIBarButtonItem, UIButton, UICollectionReusableView, UICollectionView, UIImageView, UILabel, UISearchBar, WAMainFrameDesktopLogic, WAMainFrameTaskBarDeleteActionWindow, WAMainFrameTaskBarDragContext, WAMainFrameTaskBarSearchBar, WAMainFrameTaskMoreCollectionViewCell, WAStarCollectionViewLayout;
@protocol WAMainFrameDesktopViewActionDelegate, WAMainFrameDesktopViewDelegate;

@interface WAMainFrameDesktopView : UIView <WAMainFrameTaskItemMgrExt, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WAMainFrameTaskbarOperationViewControllerDelegate, WASearchControllerDelegate, WADynamicBackgroundGLViewControllerDelegate, IWAAppEntryExtension, WAStarCollectionViewLayoutDelegate, MMLimitedModeExt>
{
    _Bool _containerVCDisappearing;
    _Bool _visible;
    _Bool _draggingShowState;
    _Bool _showState;
    _Bool _isSpread;
    _Bool _isStarNodeSpread;
    _Bool _containerTableViewIsSettingInset;
    _Bool _isPresentingSearchPage;
    _Bool _forbidInnerItemTransform;
    _Bool _tapTicState;
    _Bool _shouldRecoverLeftButton;
    _Bool _reseted;
    _Bool _isInEditMode;
    _Bool _tipAdded;
    _Bool _isAnimatingMoreView;
    _Bool _canShowDynamicBackground;
    _Bool _isDraggingDown;
    _Bool _isShowSearchBar;
    _Bool _isAnimatingShowing;
    _Bool _isAnimatingHiding;
    _Bool _currentInDarkStyle;
    id <WAMainFrameDesktopViewDelegate> _desktopViewDelegate;
    id <WAMainFrameDesktopViewActionDelegate> _actionDelegate;
    MMUIViewController *_containerVC;
    UIView *_fakeNavigationBottomBackground;
    UIView *_fakeNavigationBackground;
    UIView *_contentView;
    UICollectionReusableView *_topMarginReusableView;
    UIView *_topMarginView;
    UILabel *_taskTitleLabel;
    UICollectionReusableView *_gapMarginReusableView;
    UIView *_gapMarginView;
    UILabel *_starTitleLabel;
    UIView *_fakeTopTitleView;
    UIImageView *_fakeTopTitleIcon;
    UILabel *_fakeTopTitleLabel;
    UIView *_fakeTopTitleSeperateLine;
    UIView *_transformViewContainerView;
    UIView *_mixedCollectionViewContainerView;
    UIView *_transformView;
    CAGradientLayer *_gradientLayer;
    UICollectionView *_mixedCollectionView;
    UIImageView *_closeImageView;
    UILabel *_closeLabel;
    UIButton *_closeButton;
    UIView *_searchArea;
    WAMainFrameTaskBarSearchBar *_searchBar;
    UISearchBar *_realSearchBar;
    UIView *_emptyView;
    UIImageView *_emptyLogo;
    UILabel *_emptyTips;
    UIView *_starEmptyView;
    UILabel *_starEmptyTips;
    CAShapeLayer *_starDashLayer;
    UIBarButtonItem *_savedLeftButtonItem;
    WAStarCollectionViewLayout *_mixedLayout;
    WAMainFrameDesktopLogic *_taskBarLogic;
    NSMutableArray *_mixedSectionData;
    WAMainFrameTaskBarDeleteActionWindow *_operationWindow;
    WAMainFrameTaskBarDragContext *_dragContext;
    UIView *_currentStarTip;
    UIImageView *_allowStarTip;
    UIView *_forbidStarTip;
    UIImageView *_forbidInfoImageView;
    UILabel *_forbidLabel;
    WAMainFrameTaskMoreCollectionViewCell *_moreView;
    DynamicBackgroundSystemConfig *_manualBackgroundSystemConfig;
    double _manualColorRatio;
    struct CGPoint _tableViewLastContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool currentInDarkStyle; // @synthesize currentInDarkStyle=_currentInDarkStyle;
@property(nonatomic) _Bool isAnimatingHiding; // @synthesize isAnimatingHiding=_isAnimatingHiding;
@property(nonatomic) _Bool isAnimatingShowing; // @synthesize isAnimatingShowing=_isAnimatingShowing;
@property(nonatomic) _Bool isShowSearchBar; // @synthesize isShowSearchBar=_isShowSearchBar;
@property(nonatomic) _Bool isDraggingDown; // @synthesize isDraggingDown=_isDraggingDown;
@property(nonatomic) struct CGPoint tableViewLastContentOffset; // @synthesize tableViewLastContentOffset=_tableViewLastContentOffset;
@property(nonatomic) double manualColorRatio; // @synthesize manualColorRatio=_manualColorRatio;
@property(retain, nonatomic) DynamicBackgroundSystemConfig *manualBackgroundSystemConfig; // @synthesize manualBackgroundSystemConfig=_manualBackgroundSystemConfig;
@property(nonatomic) _Bool canShowDynamicBackground; // @synthesize canShowDynamicBackground=_canShowDynamicBackground;
@property(nonatomic) _Bool isAnimatingMoreView; // @synthesize isAnimatingMoreView=_isAnimatingMoreView;
@property(retain, nonatomic) WAMainFrameTaskMoreCollectionViewCell *moreView; // @synthesize moreView=_moreView;
@property(nonatomic) _Bool tipAdded; // @synthesize tipAdded=_tipAdded;
@property(retain, nonatomic) UILabel *forbidLabel; // @synthesize forbidLabel=_forbidLabel;
@property(retain, nonatomic) UIImageView *forbidInfoImageView; // @synthesize forbidInfoImageView=_forbidInfoImageView;
@property(retain, nonatomic) UIView *forbidStarTip; // @synthesize forbidStarTip=_forbidStarTip;
@property(retain, nonatomic) UIImageView *allowStarTip; // @synthesize allowStarTip=_allowStarTip;
@property(retain, nonatomic) UIView *currentStarTip; // @synthesize currentStarTip=_currentStarTip;
@property(retain, nonatomic) WAMainFrameTaskBarDragContext *dragContext; // @synthesize dragContext=_dragContext;
@property(retain, nonatomic) WAMainFrameTaskBarDeleteActionWindow *operationWindow; // @synthesize operationWindow=_operationWindow;
@property(retain, nonatomic) NSMutableArray *mixedSectionData; // @synthesize mixedSectionData=_mixedSectionData;
@property(nonatomic) _Bool isInEditMode; // @synthesize isInEditMode=_isInEditMode;
@property(nonatomic) _Bool reseted; // @synthesize reseted=_reseted;
@property(nonatomic) _Bool shouldRecoverLeftButton; // @synthesize shouldRecoverLeftButton=_shouldRecoverLeftButton;
@property(nonatomic) _Bool tapTicState; // @synthesize tapTicState=_tapTicState;
@property(retain, nonatomic) WAMainFrameDesktopLogic *taskBarLogic; // @synthesize taskBarLogic=_taskBarLogic;
@property(retain, nonatomic) WAStarCollectionViewLayout *mixedLayout; // @synthesize mixedLayout=_mixedLayout;
@property(retain, nonatomic) UIBarButtonItem *savedLeftButtonItem; // @synthesize savedLeftButtonItem=_savedLeftButtonItem;
@property(retain, nonatomic) CAShapeLayer *starDashLayer; // @synthesize starDashLayer=_starDashLayer;
@property(retain, nonatomic) UILabel *starEmptyTips; // @synthesize starEmptyTips=_starEmptyTips;
@property(retain, nonatomic) UIView *starEmptyView; // @synthesize starEmptyView=_starEmptyView;
@property(retain, nonatomic) UILabel *emptyTips; // @synthesize emptyTips=_emptyTips;
@property(retain, nonatomic) UIImageView *emptyLogo; // @synthesize emptyLogo=_emptyLogo;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak UISearchBar *realSearchBar; // @synthesize realSearchBar=_realSearchBar;
@property(retain, nonatomic) WAMainFrameTaskBarSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *searchArea; // @synthesize searchArea=_searchArea;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *closeLabel; // @synthesize closeLabel=_closeLabel;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UICollectionView *mixedCollectionView; // @synthesize mixedCollectionView=_mixedCollectionView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *transformView; // @synthesize transformView=_transformView;
@property(retain, nonatomic) UIView *mixedCollectionViewContainerView; // @synthesize mixedCollectionViewContainerView=_mixedCollectionViewContainerView;
@property(retain, nonatomic) UIView *transformViewContainerView; // @synthesize transformViewContainerView=_transformViewContainerView;
@property(retain, nonatomic) UIView *fakeTopTitleSeperateLine; // @synthesize fakeTopTitleSeperateLine=_fakeTopTitleSeperateLine;
@property(retain, nonatomic) UILabel *fakeTopTitleLabel; // @synthesize fakeTopTitleLabel=_fakeTopTitleLabel;
@property(retain, nonatomic) UIImageView *fakeTopTitleIcon; // @synthesize fakeTopTitleIcon=_fakeTopTitleIcon;
@property(retain, nonatomic) UIView *fakeTopTitleView; // @synthesize fakeTopTitleView=_fakeTopTitleView;
@property(retain, nonatomic) UILabel *starTitleLabel; // @synthesize starTitleLabel=_starTitleLabel;
@property(retain, nonatomic) UIView *gapMarginView; // @synthesize gapMarginView=_gapMarginView;
@property(retain, nonatomic) UICollectionReusableView *gapMarginReusableView; // @synthesize gapMarginReusableView=_gapMarginReusableView;
@property(retain, nonatomic) UILabel *taskTitleLabel; // @synthesize taskTitleLabel=_taskTitleLabel;
@property(retain, nonatomic) UIView *topMarginView; // @synthesize topMarginView=_topMarginView;
@property(retain, nonatomic) UICollectionReusableView *topMarginReusableView; // @synthesize topMarginReusableView=_topMarginReusableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool forbidInnerItemTransform; // @synthesize forbidInnerItemTransform=_forbidInnerItemTransform;
@property(nonatomic) _Bool isPresentingSearchPage; // @synthesize isPresentingSearchPage=_isPresentingSearchPage;
@property(nonatomic) _Bool containerTableViewIsSettingInset; // @synthesize containerTableViewIsSettingInset=_containerTableViewIsSettingInset;
@property(nonatomic) _Bool isStarNodeSpread; // @synthesize isStarNodeSpread=_isStarNodeSpread;
@property(nonatomic) _Bool isSpread; // @synthesize isSpread=_isSpread;
@property(nonatomic) _Bool showState; // @synthesize showState=_showState;
@property(nonatomic) _Bool draggingShowState; // @synthesize draggingShowState=_draggingShowState;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIView *fakeNavigationBackground; // @synthesize fakeNavigationBackground=_fakeNavigationBackground;
@property(retain, nonatomic) UIView *fakeNavigationBottomBackground; // @synthesize fakeNavigationBottomBackground=_fakeNavigationBottomBackground;
@property(nonatomic) _Bool containerVCDisappearing; // @synthesize containerVCDisappearing=_containerVCDisappearing;
@property(nonatomic) __weak MMUIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <WAMainFrameDesktopViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <WAMainFrameDesktopViewDelegate> desktopViewDelegate; // @synthesize desktopViewDelegate=_desktopViewDelegate;
- (void)onLimitedModeChanged;
- (void)onBackgroundClicked;
- (void)close;
- (_Bool)isPointInItemArea:(struct CGPoint)arg1;
- (void)processDragContext:(id)arg1;
- (_Bool)backToNormal;
- (_Bool)getStarNodeShowState;
- (void)setForbidStarTipsString:(id)arg1;
- (void)onSearchPlaceHolderUpdate:(id)arg1;
- (void)collectionView:(id)arg1 dragingView:(id)arg2 didDragToPosition:(struct CGPoint)arg3;
- (struct CGPoint)collectionView:(id)arg1 dragViewToPointForItemAtIndexPath:(id)arg2;
- (struct CGPoint)collectionView:(id)arg1 dragViewFromPointForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dragViewForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemDidCommitToDeleteAtIdexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 itemDidMoveInDeleteAreaAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 itemCenterIsInDeleteArea:(struct CGPoint)arg2;
- (_Bool)collectionView:(id)arg1 itemCenterIsInAddArea:(struct CGPoint)arg2 fromIndexPath:(id)arg3 toAddIndexPath:(id *)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3;
- (void)collectionView:(id)arg1 itemDidDeleteSuccessAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 isIndexPathNeedDragDelay:(id)arg2;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (unsigned long long)collectionView:(id)arg1 dragTypeForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (_Bool)isPointInStarAddArea:(struct CGPoint)arg1;
- (void)animateToHideForbidTips;
- (void)animateToShowForbidTipsOnView:(id)arg1 withForbidTips:(id)arg2;
- (void)animateToHideAllowStarTips;
- (void)animateToShowAllowStarTipsOnView:(id)arg1;
- (double)starAreaBeginOffset;
- (id)getItemDataFromIndexPath:(id)arg1;
- (unsigned long long)getDragType;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dragUpToClose;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onTranslationYChanged:(double)arg1;
- (void)onMore:(id)arg1;
- (void)hideFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hideRealSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (void)showFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showRealSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (void)hideRealSearchBarAnimated:(_Bool)arg1;
- (void)showRealSearchBarAnimated:(_Bool)arg1;
- (void)hideFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (void)showFakeSearchBarAnimated:(_Bool)arg1 needOffset:(_Bool)arg2;
- (void)hideFakeSearchBarAnimated:(_Bool)arg1;
- (void)showFakeSearchBarAnimated:(_Bool)arg1;
- (void)updateFakeSearchBarShowStateWithDoInitRealSearchBar:(_Bool)arg1;
- (void)scrollToShowSearchBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToHideSearchBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (double)getSelfContentViewY;
- (void)reverseVoiceTic;
- (void)voiceTic;
- (void)taptic;
- (_Bool)canBecomeFirstResponder;
- (void)onTapSearchArea:(id)arg1;
- (void)onTapFakeMenuBtn:(id)arg1;
- (void)layoutOperationWindow;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)calMixedCollectionViewStarNodeHeight;
- (double)calMixedCollectionViewStarViewHeight;
- (double)calMixedCollectionViewTaskNodeHeight;
- (double)calMixedCollectionViewTaskViewHeight;
- (id)getIndexPathForFirstTaskItem;
- (id)getIndexPathForLastTaskItem;
- (void)layoutMoreView;
- (void)layoutEmptyView;
- (void)layoutStarEmptyView;
- (void)updateItemPerLineAndGapIfNeeded;
- (void)layoutContentView;
- (void)updateEmptyViewState;
- (void)updateMoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateMoreState;
- (void)reloadData;
- (void)onDidClose;
- (void)onBeginClose;
- (void)setCloseLeftButton;
- (void)showRealLeftButton;
- (void)onDidOpen;
- (void)onBeginOpen;
- (void)initEmptyView;
- (void)initStarEmptyView;
- (void)initGapMarginView;
- (void)initTopMarginView;
- (void)initRealSearchBarIfNeeded;
- (void)initSearchArea;
- (void)willEndSearch;
- (void)willBeginSearch;
- (_Bool)needFixVerticalScrollIssue;
- (void)addGradientMaskView;
- (void)initMoreView;
- (void)initMixedCollectionView;
- (void)initFakeTopTitleView;
- (void)initContentView;
- (void)initView;
- (_Bool)shouldShowStarNodes;
- (_Bool)shouldShowTaskNodes;
- (void)checkViewNodes;
- (void)relayoutSubviews;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)onEnterForeground;
- (void)onMemoryWarning;
- (void)didRotate:(id)arg1;
- (void)moveToTopMostItem;
- (void)reset;
- (void)unreset;
- (void)endAnimateToHide;
- (void)startAnimateToHide;
- (void)endAnimateToShow;
- (void)startAnimateToShow;
- (void)animateToHide;
- (void)hideOperationWindow;
- (void)showOperationWindow;
- (void)updateDarkStyle;
- (_Bool)isXDevice;
- (void)animateToShow;
- (void)updateFilteredStickingOffset:(double)arg1;
- (void)updateStickingOffset:(double)arg1;
- (double)calTitleLabelLeftMargin;
- (void)calItemPerLine:(unsigned int *)arg1 itemGap:(double *)arg2 sectionInset:(double *)arg3;
- (double)calSectionInset;
- (double)calItemGap;
- (unsigned int)calItemPerLine;
- (double)getFullScreenHeight;
- (double)calTaskBarHeight;
- (void)becomeUnVisible;
- (void)becomeVisible;
- (void)relayout;
- (void)updateItemPerLine;
- (void)updateSectionData;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithMainFrameDesktopLogic:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

