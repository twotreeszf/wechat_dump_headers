//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTimeLineViewController.h"

#import "BaseEmoticonViewDelegate-Protocol.h"
#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "IMMFacebookMgrExt-Protocol.h"
#import "IMMGrowTextViewExt-Protocol.h"
#import "ITranslateSnsMgrExt-Protocol.h"
#import "InputControllerDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMNavBarInteractiveDelegate-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCAdvertiseActionFloatViewDelegate-Protocol.h"
#import "WCAdvertiseFeedbackViewDelegate-Protocol.h"
#import "WCCommentDetailViewControllerFBDelegate-Protocol.h"
#import "WCCommentStrangerViewControllerDelegate-Protocol.h"
#import "WCCommitViewAnimationDelegate-Protocol.h"
#import "WCContentItemViewExt-Protocol.h"
#import "WCFacadeExt-Protocol.h"
#import "WCFinderShareCustomTransitionProtocol-Protocol.h"
#import "WCFinderSnSLiveSectionTableViewCellDelegate-Protocol.h"
#import "WCImageFullScreeViewMgrExt-Protocol.h"
#import "WCListHeaderViewDelegate-Protocol.h"
#import "WCMicroMerchantSubTimelineViewControllerDelegate-Protocol.h"
#import "WCPlainTextTipFullScreenViewDelegate-Protocol.h"
#import "WCSetPermissionsViewControllerDelegate-Protocol.h"
#import "WCSightViewExt-Protocol.h"
#import "WCTimeLineCellViewDelegate-Protocol.h"
#import "WCTimeLineCommentCellViewDelegate-Protocol.h"
#import "WCTimeLineContactSelectViewControllerDelegate-Protocol.h"
#import "WCTimelineFPSMonitorDelegate-Protocol.h"
#import "WCTimelineLogicControllerDelegate-Protocol.h"
#import "WCTimelineTrashMgrExt-Protocol.h"
#import "scrollViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class CContact, CEmoticonWrap, MMHeadImageView, MMTipsViewController, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SharePreConfirmView, UIButton, UIView, WCADPageWrap, WCAdvertiseActionFloatView, WCAdvertiseFeedbackView, WCCommentEmotionFloatView, WCDataItem, WCFinderSnSShareLiveLogicController, WCListHeaderView, WCOperateFloatView, WCPasteTextLengthLogic, WCPlainTextTipFullScreenView, WCTimeLineFooterView, WCTimeLineHeaderView, WCTimeLineVideoPreloadMgr, WCTimelineFPSLabel, WCTimelineFPSMonitor;
@protocol WCTimeLineViewControllerDelegate;

@interface WCTimeLineViewController : WCBaseTimeLineViewController <WCFinderShareCustomTransitionProtocol, ITranslateSnsMgrExt, MMSightCameraViewControllerDelegate, WCAdvertiseActionFloatViewDelegate, MMNavBarInteractiveDelegate, IMMGrowTextViewExt, WCTimelineTrashMgrExt, WCAdvertiseFeedbackViewDelegate, WCTimelineFPSMonitorDelegate, WCTimelineLogicControllerDelegate, tableViewDelegate, BaseEmoticonViewDelegate, WCCommitViewAnimationDelegate, UIViewControllerPreviewingDelegate, WCFinderSnSLiveSectionTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, WCListHeaderViewDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, IMMFacebookMgrExt, MMImagePickerManagerDelegate, WCPlainTextTipFullScreenViewDelegate, WCSightViewExt, WCContentItemViewExt, WCImageFullScreeViewMgrExt, WCTimeLineContactSelectViewControllerDelegate, WCMicroMerchantSubTimelineViewControllerDelegate>
{
    _Bool m_isReflashingHead;
    _Bool m_isDelayStopFooterLoading;
    _Bool m_bTapHeaderView;
    _Bool m_bLongPressRightButton;
    _Bool m_hasSpeedyLoadView;
    _Bool m_shouldReloadData;
    _Bool m_shouldForbidRealodData;
    _Bool m_shouldReloadDataAfterResume;
    NSArray *m_arrUploadFailItems;
    NSArray *m_arrCommentFailItems;
    NSArray *m_arrLikeFailItems;
    WCDataItem *m_SightFoldItem;
    WCDataItem *m_ImageFoldItem;
    NSString *m_userName;
    _Bool m_hasBeginTimeline;
    double m_lastWCCanvasContentHeight;
    _Bool m_hasDataSourceChanged;
    _Bool m_oldBlackList;
    struct map<long, mmsns::TimeLineSectionType, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, mmsns::TimeLineSectionType>>> m_sectionIndexToType;
    _Bool _isStayInPage;
    _Bool _hasOpenedWebViewUseFastLoad;
    _Bool _hasInvokeFastLoadPVBiz;
    NSMutableSet *_setFastLoadTemplateType;
    _Bool _hasNewPhotoWhenEnter;
    _Bool _hasRefrashHead;
    _Bool _canReload;
    _Bool _startReload;
    _Bool _isActionAtAd;
    _Bool _isViewDidAppear;
    _Bool _forbiddenAdScreenShotReport;
    _Bool _canLogDataList;
    _Bool _isReloadingData;
    _Bool _isEnableFpsMonitor;
    id <WCTimeLineViewControllerDelegate> _delegate;
    WCTimeLineHeaderView *_headRefreshView;
    WCTimeLineFooterView *_footerView;
    WCListHeaderView *_headerView;
    MMTipsViewController *_introView;
    UIButton *_messageTipView;
    MMHeadImageView *_messageHeaderView;
    WCOperateFloatView *_floatOperateView;
    WCPlainTextTipFullScreenView *_plainTextFullScreenView;
    WCDataItem *_cacheDateItem;
    UIView *_animationView;
    CContact *_atContact;
    WCPasteTextLengthLogic *_pastelogic;
    UIButton *_reEditButton;
    UIButton *_reEditTipButton;
    WCDataItem *_redditItemPlaceHolder;
    UIView *_commentEmotionBgView;
    WCCommentEmotionFloatView *_commentEmotionView;
    NSMutableDictionary *_commentEmotionReportDict;
    CEmoticonWrap *_emoticonWrap;
    SharePreConfirmView *_sharePreConfirmView;
    NSString *_latestAutoplayVideoTid;
    WCTimeLineVideoPreloadMgr *_videoPreloadMgr;
    WCTimeLineFooterView *_headViewForJumpState;
    NSString *_missReadItemIdToJump;
    WCDataItem *_missReadItem;
    WCAdvertiseFeedbackView *_adFeedbackView;
    WCADPageWrap *_floatViewPageWrap;
    NSMutableArray *_adReloadIndexPaths;
    NSMutableArray *_adInitIndexPaths;
    WCAdvertiseActionFloatView *_advertiseActionFloatView;
    WCTimelineFPSLabel *_fpsLabel;
    WCTimelineFPSMonitor *_fpsMonitor;
    WCFinderSnSShareLiveLogicController *_finderSnSShareLiveLogicController;
    NSMutableDictionary *_dataControllers;
}

+ (_Bool)shouldUseFakeContact:(id)arg1 comment:(id)arg2;
+ (id)genADContact:(id)arg1 comment:(id)arg2;
+ (id)genContactForSharePreConfirm:(id)arg1 comment:(id)arg2;
+ (id)genEmotionSharePreConfirm:(id)arg1 comment:(id)arg2 emotion:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dataControllers; // @synthesize dataControllers=_dataControllers;
@property(retain, nonatomic) WCFinderSnSShareLiveLogicController *finderSnSShareLiveLogicController; // @synthesize finderSnSShareLiveLogicController=_finderSnSShareLiveLogicController;
@property(nonatomic) _Bool isEnableFpsMonitor; // @synthesize isEnableFpsMonitor=_isEnableFpsMonitor;
@property(retain, nonatomic) WCTimelineFPSMonitor *fpsMonitor; // @synthesize fpsMonitor=_fpsMonitor;
@property(retain, nonatomic) WCTimelineFPSLabel *fpsLabel; // @synthesize fpsLabel=_fpsLabel;
@property(retain, nonatomic) WCAdvertiseActionFloatView *advertiseActionFloatView; // @synthesize advertiseActionFloatView=_advertiseActionFloatView;
@property(retain, nonatomic) NSMutableArray *adInitIndexPaths; // @synthesize adInitIndexPaths=_adInitIndexPaths;
@property(retain, nonatomic) NSMutableArray *adReloadIndexPaths; // @synthesize adReloadIndexPaths=_adReloadIndexPaths;
@property(nonatomic) _Bool isReloadingData; // @synthesize isReloadingData=_isReloadingData;
@property(retain, nonatomic) WCADPageWrap *floatViewPageWrap; // @synthesize floatViewPageWrap=_floatViewPageWrap;
@property(nonatomic) _Bool canLogDataList; // @synthesize canLogDataList=_canLogDataList;
@property(retain, nonatomic) WCAdvertiseFeedbackView *adFeedbackView; // @synthesize adFeedbackView=_adFeedbackView;
@property(nonatomic) _Bool forbiddenAdScreenShotReport; // @synthesize forbiddenAdScreenShotReport=_forbiddenAdScreenShotReport;
@property(retain, nonatomic) WCDataItem *missReadItem; // @synthesize missReadItem=_missReadItem;
@property(retain, nonatomic) NSString *missReadItemIdToJump; // @synthesize missReadItemIdToJump=_missReadItemIdToJump;
@property(retain, nonatomic) WCTimeLineFooterView *headViewForJumpState; // @synthesize headViewForJumpState=_headViewForJumpState;
@property(retain, nonatomic) WCTimeLineVideoPreloadMgr *videoPreloadMgr; // @synthesize videoPreloadMgr=_videoPreloadMgr;
@property(retain, nonatomic) NSString *latestAutoplayVideoTid; // @synthesize latestAutoplayVideoTid=_latestAutoplayVideoTid;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(retain, nonatomic) SharePreConfirmView *sharePreConfirmView; // @synthesize sharePreConfirmView=_sharePreConfirmView;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) NSMutableDictionary *commentEmotionReportDict; // @synthesize commentEmotionReportDict=_commentEmotionReportDict;
@property(retain, nonatomic) WCCommentEmotionFloatView *commentEmotionView; // @synthesize commentEmotionView=_commentEmotionView;
@property(retain, nonatomic) UIView *commentEmotionBgView; // @synthesize commentEmotionBgView=_commentEmotionBgView;
@property(retain, nonatomic) WCDataItem *redditItemPlaceHolder; // @synthesize redditItemPlaceHolder=_redditItemPlaceHolder;
@property(retain, nonatomic) UIButton *reEditTipButton; // @synthesize reEditTipButton=_reEditTipButton;
@property(retain, nonatomic) UIButton *reEditButton; // @synthesize reEditButton=_reEditButton;
@property(nonatomic) _Bool isActionAtAd; // @synthesize isActionAtAd=_isActionAtAd;
@property(retain, nonatomic) WCPasteTextLengthLogic *pastelogic; // @synthesize pastelogic=_pastelogic;
@property(retain, nonatomic) CContact *atContact; // @synthesize atContact=_atContact;
@property(nonatomic) _Bool startReload; // @synthesize startReload=_startReload;
@property(nonatomic) _Bool canReload; // @synthesize canReload=_canReload;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) WCDataItem *cacheDateItem; // @synthesize cacheDateItem=_cacheDateItem;
@property(retain, nonatomic) WCPlainTextTipFullScreenView *plainTextFullScreenView; // @synthesize plainTextFullScreenView=_plainTextFullScreenView;
@property(retain, nonatomic) WCOperateFloatView *floatOperateView; // @synthesize floatOperateView=_floatOperateView;
@property(retain, nonatomic) MMHeadImageView *messageHeaderView; // @synthesize messageHeaderView=_messageHeaderView;
@property(retain, nonatomic) UIButton *messageTipView; // @synthesize messageTipView=_messageTipView;
@property(retain, nonatomic) MMTipsViewController *introView; // @synthesize introView=_introView;
@property(retain, nonatomic) WCListHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) WCTimeLineHeaderView *headRefreshView; // @synthesize headRefreshView=_headRefreshView;
@property(nonatomic) _Bool hasRefrashHead; // @synthesize hasRefrashHead=_hasRefrashHead;
@property(nonatomic) _Bool hasNewPhotoWhenEnter; // @synthesize hasNewPhotoWhenEnter=_hasNewPhotoWhenEnter;
@property(nonatomic) __weak id <WCTimeLineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSnsLiveSectionClickClearBtnAction;
- (void)finderLiveSectionTableViewCellFetchMoreLiveList:(id)arg1;
- (void)onDidExposeLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)onDidSelectLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)genFinderHeaderCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldShowFinderLiveHeaderCell;
- (void)onSubTimelineDisplayCellForItem:(id)arg1;
- (void)onSubTimeLineViewPushed:(id)arg1;
- (void)onSubTimeLineViewReturn;
- (void)onWCTimelineTrashMgrItemClear;
- (void)onTimeLineSessionExposure:(id)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (_Bool)shouldAddShadowView;
- (void)onViewSightOutFullScreen;
- (void)onViewSightInFullScreen;
- (void)refreshWholeViewWithFixedDataItem:(id)arg1;
- (void)onWCCanvasContentItemViewOutFullScreen:(id)arg1;
- (void)onWCCanvasContentItemViewInFullScreen:(id)arg1;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCContentItemViewInFullScreen;
- (void)onWCContentItemViewOpenedWebViewUseFastLoad:(id)arg1;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(long long)arg2;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)commitAnimationWillStart:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)showAnimationToImageView;
- (void)setAnimatedImageHidden:(_Bool)arg1 withTimeLineCellView:(id)arg2;
- (void)setAnimatedImageHidden:(_Bool)arg1;
- (void)clearAnimationPropertiesProtection;
- (void)clearAnimationProperties;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (id)subAtContactString:(id)arg1;
- (_Bool)hasAtFriend:(id)arg1;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onHideKeyboard;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillHide;
- (void)updateContentOffset;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)setInputToolViewAtable:(_Bool)arg1;
- (void)onReEditForwardItem:(id)arg1 trashReportData:(id)arg2;
- (void)onReEditMultiMediaItem:(id)arg1 trashReportData:(id)arg2;
- (void)onReEditTextItem:(id)arg1 trashReportData:(id)arg2;
- (void)onReEditItem:(id)arg1;
- (void)reloadTableViewWithSameCotentOffsetYToBottom;
- (void)onPrePageUpdate:(_Bool)arg1;
- (void)updateJumpState;
- (id)getTimelineLastItem;
- (id)getMissReadDataItem:(id)arg1;
- (void)jumpToMissReadItemAferScroll;
- (unsigned long long)sectionIndexForMissReadJump:(id)arg1;
- (void)onJumpToUnreadItem;
- (void)tryToResumeInputDataInfo;
- (void)tryToCacheInputDataInfo;
- (void)setInputControllerBecomeTextView;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)floatViewHiddenWrap;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (_Bool)shouldInteractivePop;
- (void)updateNetworkStatus;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3 extraInfo:(id)arg4;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4 clickSource:(int)arg5 originView:(id)arg6;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4 clickSource:(int)arg5 originView:(id)arg6;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 userData:(id)arg4;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onCommentViewEmotionViewSingleClicked:(id)arg1 ofDataItem:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(id)arg2;
- (void)onWCTimeLineCommentCellOpenFullText:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 query:(id)arg3;
- (void)onSearchTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)onRestoreTimeLineCellView:(id)arg1;
- (void)cleanCellHeightCache:(id)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(id)arg1;
- (void)onEditBlackList:(id)arg1;
- (id)getView;
- (void)onActionLocation:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineCellMoreMenu:(id)arg1;
- (void)onShowDetailViewForDataItem:(id)arg1;
- (void)onShowDetailChanged:(id)arg1 bShowDetailBeforeChange:(_Bool)arg2;
- (void)onUpdateDataItem:(id)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onAccessibilityShowDetailDataItem:(id)arg1;
- (void)onAccessibilityCommentDataItem:(id)arg1;
- (void)onCommentDataItem:(id)arg1 point:(struct CGPoint)arg2;
- (void)onAdvertiseAction:(id)arg1 point:(struct CGPoint)arg2;
- (void)onClickNegativeReasonBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickNegativeBtn:(_Bool)arg1 dataItem:(id)arg2;
- (void)onClickPositionBtn:(id)arg1;
- (void)onClickComplainBtn:(id)arg1 dataItem:(id)arg2;
- (void)onAdFeedbackDisappear:(_Bool)arg1;
- (void)resetAdFeedbackView;
- (void)onAdFeedbackBtnClick:(id)arg1 point:(struct CGPoint)arg2;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onUnInterestOpenIMTimeLine;
- (void)onRemoveAd:(id)arg1;
- (void)onAdActoin:(id)arg1;
- (void)onWCTimeLineCellViewShowGroup:(id)arg1;
- (void)onWCTimeLineCellViewShowProfile:(id)arg1;
- (void)onWCTimeLineCellViewDeletePhotoClick:(id)arg1;
- (void)onWCTimeLineCellViewActionJump:(id)arg1;
- (void)onWCTimeLineCellViewActionMusic:(id)arg1;
- (void)onWCTimeLineCellViewActionAdPOI:(id)arg1;
- (void)onWCTimeLineCellViewActionAdChainStrengthen:(id)arg1;
- (void)onViewAnimationDidHiden;
- (void)onViewAnimationWillHide;
- (void)onIKnowItBtnClicked;
- (void)onTouchDownLikeBtnOnFloatView;
- (void)onClickCommentBtnOnFloatView;
- (id)getCachedMediaCellViewForData:(id)arg1;
- (void)cacheMediaCellView:(id)arg1 forData:(id)arg2;
- (void)onActionAtAd:(id)arg1;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3 isActionAtAd:(_Bool)arg4;
- (double)totalHeightFromTopToSection:(unsigned long long)arg1;
- (unsigned long long)getSectionCountBeforeDataItem;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (id)visibleTimeLineCellViewWithTid:(id)arg1;
- (void)showContactInfo;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)checkNewMessage;
- (_Bool)shouldShowStoryCell;
- (_Bool)hasUnReadMessage;
- (_Bool)shouldUseAdPreferAvatar:(id)arg1 commentUser:(id)arg2;
- (void)shouldUpdateMessageButton:(id)arg1;
- (void)resetHeaderView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)showUploadOption:(id)arg1;
- (_Bool)recoverFromManualSavedDraft;
- (_Bool)recoverFromAutoSavedDraft;
- (void)showPhotoAlert:(id)arg1;
- (void)reportLastDraft;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (id)getViewController;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onImagePickerManagerClickPostFinderLongVideoWithDataItem:(id)arg1 postStateModel:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)editShield:(id)arg1 forScene:(long long)arg2;
- (void)editShield:(id)arg1;
- (void)editBlackList:(id)arg1 forSource:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)openCommitViewControllerWithSightDraft:(id)arg1 trashReportData:(id)arg2;
- (void)openCommitViewControllerWithSightDraft:(id)arg1;
- (void)openCommitViewControllerWithShowLocation:(_Bool)arg1 arrImage:(id)arg2 trashReportData:(id)arg3;
- (void)openCommitViewControllerWithShowLocation:(_Bool)arg1 arrImage:(id)arg2;
- (id)visibleDataItemList;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollToTop;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)autoPauseLatestAutoplayVideo;
- (void)realAutoPlayVideo;
- (void)videoPreloadProcess;
- (void)throttleScrollProcess;
- (void)autoplayVideoProcess;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)hideMenu;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)stopRefreshHeaderView;
- (void)refreshHead:(unsigned long long)arg1;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onTimelineVcResumeRefresh;
- (void)onTimelineVcForbidRefreshFor:(double)arg1;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onTimelineServerError;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onCommentOrLikeFailQueueChange;
- (void)onCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onTimelineVideoAutoPlayCfgChange;
- (void)onHotVideoOrHotImageItemChange;
- (void)onLoadMore;
- (void)initData;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (unsigned int)dynamicHeaderSectionCntOfDataControllers;
- (void)onLogicControllerDataTriggerContentTableViewReload:(id)arg1;
- (void)onLogicControllerDataWillChange:(id)arg1;
- (_Bool)isInJumpState;
- (id)getTimelineViewController;
- (long long)getDataItemIndexForSection:(long long)arg1;
- (id)getContentTableView;
- (void)onDidTakeScreenShot;
- (void)onApplicationDidBecomeActive;
- (void)onResignActive;
- (_Bool)shouldMonitorFps;
- (void)stopFpsMonitor;
- (void)startFPSMonitor;
- (id)observerIdentifier;
- (void)onTick:(float)arg1;
- (void)touchesCancelled_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)refreshWholeView;
- (void)tryResumeStatus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showDetailView:(id)arg1;
- (void)showFoldedImageDetailView:(id)arg1;
- (void)showFoldedSightDetailView:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1 tipType:(long long)arg2;
- (void)showDetailViewForFoldedImage:(id)arg1;
- (void)showDetailViewForFoldedSight:(id)arg1;
- (void)showDetailViewForFailedCommentItem:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)onDeleteData;
- (void)onRestartUpload;
- (void)showMessageList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryClearMissReadJumpBtnWhenWillDisplay:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)fetchContentItemForCell:(id)arg1;
- (void)contentItemDidEndDeceleratingForCell:(id)arg1;
- (void)contentItemWillDisappearForCell:(id)arg1;
- (void)contentItemDidEndDisplayingForCell:(id)arg1;
- (void)contentItemWillDisplayForCell:(id)arg1;
- (void)timelineContentItemDidEndDecelerating;
- (void)timelineContentItemDidDisappear;
- (void)timelineContentItemWillDisappear;
- (void)timelineContentItemWillAppear;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)genReEditTipsCell:(id)arg1 indexPath:(id)arg2;
- (void)genStoryHeaderCell:(id)arg1 indexPath:(id)arg2;
- (void)genRedHeartCell:(id)arg1 indexPath:(id)arg2;
- (void)genUploadFailCell:(id)arg1 indexPath:(id)arg2;
- (void)genFoldMessageCell:(id)arg1 indexPath:(id)arg2;
- (void)genMissReadBtnCell:(id)arg1 indexPath:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)getUploadFailItemsFroView;
- (double)heightForStoryAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)handleLongPressEx:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panned:(id)arg1;
- (void)hideFloatView;
- (id)getNextDataItem:(long long)arg1;
- (long long)calcDataItemIndex:(long long)arg1;
- (void)willDisshow;
- (void)onNetworkActivityStatusChanged;
- (void)willShow;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)delayReload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarItem;
- (void)viewDidLayoutSubviews;
- (void)adjustViewAndNavBarRect;
- (void)viewDidTransitionToNewSize;
- (void)resetStatus:(_Bool)arg1;
- (void)onTimeLineViewReturn;
- (void)openWriteTextViewController;
- (void)OnFinishComment:(_Bool)arg1;
- (void)resetRightButtonStatus;
- (void)handleAfterReloadTableView;
- (void)p_reloadTableViewContent;
- (void)scrollEndReloadTableView;
- (void)reloadTableView;
- (void)didDisshow;
- (void)cacheInputText;
- (void)clearWCCache;
- (void)reloadDataWrap;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)reportLogicController;
- (void)resetLogicController;
- (void)initDataControllers;
- (id)init;
- (void)doShareAnimation;
- (void)preDownloadPageDataForVisibleCells;
- (void)dataItemOpenedWebViewUseFastLoad:(id)arg1;
- (void)reportAllAppmsgExposureInfoForVisibleCells;
- (void)reportAppmsgExposureInfoForDataItem:(id)arg1;
- (void)recordAllAppmsgExposureInfoForVisibleCells;
- (_Bool)isAppmsgSupportExposure:(id)arg1;
- (_Bool)isForwardAppmsg:(id)arg1;
- (void)doResetAppMsgExposureParameter;
- (_Bool)isDataItemValidAfterCheckForwardAndUrlDomain:(id)arg1 needCheckItemShowType:(_Bool)arg2;
- (void)doPreCreateWebViewAndUpdateTemplateAndBatchReport:(id)arg1;
- (unsigned int)currPageAppmsgReportScene;
- (unsigned int)currPageAppmsgEnterType;
- (void)handleAppmsgWhenInPage;
- (void)handleAppmsgWhenDidExitPage;
- (void)handleAppmsgWhenWillExitPage;
- (void)handleAppmsgWhenEnterPage;
- (void)OnSharePreConfirmViewDidHide:(id)arg1;
- (void)OnSharePreConfirmViewCancel:(id)arg1;
- (void)OnSharePreConfirmViewSend:(id)arg1;
- (void)commentEmotion;
- (void)hideEmotionConfirmView;
- (void)showEmotionConfirmView;
- (void)commentEmotionReportAllDataItem;
- (void)commentEmotionReportDisplayEnd:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)addEmotionClickRecord:(id)arg1 ofDataItem:(id)arg2;
- (void)addEmotionIconClickRecord:(id)arg1 ofDataItem:(id)arg2;
- (void)onWCCommentEmotionFloatViewClick:(id)arg1;
- (void)onCommentEmotionBgViewClick;
- (double)commentTextMaxRight;
- (double)commentTextMinLeft;
- (void)hideCommentEmotionView;
- (void)showCommentEmotionView:(id)arg1 ofDataItem:(id)arg2 withRect:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

