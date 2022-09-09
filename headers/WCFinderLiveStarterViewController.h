//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveStarterViewController.h"

#import "ILBSLifeMgrExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "MMFinderLiveSelectTagViewControllerDelegate-Protocol.h"
#import "MMFinderLiveShareSettingViewControllerDelegate-Protocol.h"
#import "MMGrowTextViewDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMLiveBeautyOperationPanelDelegate-Protocol.h"
#import "MMLiveCountdownTipsViewDelegate-Protocol.h"
#import "MMLiveFaceVerifyViewControllerDelegate-Protocol.h"
#import "MMLiveFilterOperationPanelDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderCameraViewControllerDelegate-Protocol.h"
#import "WCFinderLiveControlItemCellDelegate-Protocol.h"

@class CAGradientLayer, MMFinderLiveTask, MMGrowTextView, MMLiveBeautyOperationPanel, MMLiveCategorySelectButton, MMLiveCountdownTipsView, MMLiveFilterOperationPanel, MMUIButton, NSString, RichTextView, UILabel, UIScrollView, UIView, WCActionSheet, WCFinderHeadImageView, WCFinderLiveControlItemCell, WCFinderLiveStarterReporter, WCFinderStarterLiveViewModel, WCLiveStarterScrollActionSheet;
@protocol WCFinderLiveStarterViewControllerDelegate;

@interface WCFinderLiveStarterViewController : MMLiveStarterViewController <ILinkEventExt, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, ILBSLifeMgrExt, MMImagePickerManagerDelegate, MMLiveFaceVerifyViewControllerDelegate, WCFinderLiveControlItemCellDelegate, MMLiveBeautyOperationPanelDelegate, MMLiveFilterOperationPanelDelegate, MMLiveCountdownTipsViewDelegate, MMGrowTextViewDelegate, MMScrollActionSheetDelegate, MMFinderLiveSelectTagViewControllerDelegate, ILocationMgrExt, MMFinderLiveShareSettingViewControllerDelegate>
{
    _Bool _isAgreementChecked;
    _Bool _shouldStartLiveAfterSelectTag;
    unsigned int _finderLocationSource;
    id <WCFinderLiveStarterViewControllerDelegate> _delegate;
    MMUIButton *_closeButton;
    MMUIButton *_moreButton;
    UIView *_checkBoxView;
    MMUIButton *_agreementCheckbox;
    RichTextView *_agreementText;
    UIView *_inviteView;
    MMUIButton *_startLiveButton;
    MMLiveCountdownTipsView *_countdownTipsView;
    UIView *_separateLineUnderDesc;
    WCFinderStarterLiveViewModel *_starterVM;
    WCFinderHeadImageView *_coverImageView;
    WCActionSheet *_chooseCoverActionSheet;
    UIView *_cancelEditMask;
    MMGrowTextView *_growTextView;
    UILabel *_wordCountTips;
    double _keyboardHeight;
    UILabel *_titleLabel;
    UIView *_noticeTimeView;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    UIScrollView *_controlPanelView;
    MMLiveBeautyOperationPanel *_beautyOperationPanel;
    MMLiveFilterOperationPanel *_filterOperationPanel;
    WCFinderLiveControlItemCell *_mirrorCell;
    MMLiveCategorySelectButton *_categorySelectView;
    UILabel *_visibilityLabelView;
    WCLiveStarterScrollActionSheet *_settingScrollActionSheet;
    WCFinderLiveStarterReporter *_reporter;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int finderLocationSource; // @synthesize finderLocationSource=_finderLocationSource;
@property(nonatomic) _Bool shouldStartLiveAfterSelectTag; // @synthesize shouldStartLiveAfterSelectTag=_shouldStartLiveAfterSelectTag;
@property(retain, nonatomic) WCFinderLiveStarterReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCLiveStarterScrollActionSheet *settingScrollActionSheet; // @synthesize settingScrollActionSheet=_settingScrollActionSheet;
@property(retain, nonatomic) UILabel *visibilityLabelView; // @synthesize visibilityLabelView=_visibilityLabelView;
@property(retain, nonatomic) MMLiveCategorySelectButton *categorySelectView; // @synthesize categorySelectView=_categorySelectView;
@property(retain, nonatomic) WCFinderLiveControlItemCell *mirrorCell; // @synthesize mirrorCell=_mirrorCell;
@property(retain, nonatomic) MMLiveFilterOperationPanel *filterOperationPanel; // @synthesize filterOperationPanel=_filterOperationPanel;
@property(retain, nonatomic) MMLiveBeautyOperationPanel *beautyOperationPanel; // @synthesize beautyOperationPanel=_beautyOperationPanel;
@property(retain, nonatomic) UIScrollView *controlPanelView; // @synthesize controlPanelView=_controlPanelView;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) UIView *noticeTimeView; // @synthesize noticeTimeView=_noticeTimeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UILabel *wordCountTips; // @synthesize wordCountTips=_wordCountTips;
@property(retain, nonatomic) MMGrowTextView *growTextView; // @synthesize growTextView=_growTextView;
@property(retain, nonatomic) UIView *cancelEditMask; // @synthesize cancelEditMask=_cancelEditMask;
@property(retain, nonatomic) WCActionSheet *chooseCoverActionSheet; // @synthesize chooseCoverActionSheet=_chooseCoverActionSheet;
@property(retain, nonatomic) WCFinderHeadImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) WCFinderStarterLiveViewModel *starterVM; // @synthesize starterVM=_starterVM;
@property(retain, nonatomic) UIView *separateLineUnderDesc; // @synthesize separateLineUnderDesc=_separateLineUnderDesc;
@property(retain, nonatomic) MMLiveCountdownTipsView *countdownTipsView; // @synthesize countdownTipsView=_countdownTipsView;
@property(retain, nonatomic) MMUIButton *startLiveButton; // @synthesize startLiveButton=_startLiveButton;
@property(retain, nonatomic) UIView *inviteView; // @synthesize inviteView=_inviteView;
@property(retain, nonatomic) RichTextView *agreementText; // @synthesize agreementText=_agreementText;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) UIView *checkBoxView; // @synthesize checkBoxView=_checkBoxView;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <WCFinderLiveStarterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onMMLiveFilterOperationPanelClose:(_Bool)arg1;
- (void)onMMLiveBeautyOperationPanelClose:(_Bool)arg1;
- (void)onWCFinderLiveStarterControlItemClicked:(id)arg1;
- (void)onFinderLiveStartFailWith:(id)arg1 errorType:(int)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)updateWordCountTipsLabel:(int)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)hiddenSubviewsTextViewBecomeFirstRespond:(_Bool)arg1;
- (void)keyboardWillHide:(_Bool)arg1;
- (double)getGrowTextViewLeftRightMargin;
- (void)keyboardWillShow:(double)arg1;
- (void)updateCoverImageViewWith:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithDataItem:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 dataReportModel:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)showFinderPublishView;
- (_Bool)isFrontCamera;
- (void)showFinderCameraViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)currentLiveTask;
- (id)getDefaultText;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)hiddenSubviewsShowCountdown:(_Bool)arg1;
- (void)hideCountdownView;
- (void)showCountdownView;
- (void)cancelLiveAndUpdateData;
- (void)onMMLiveCountdownTimeOut;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownStart;
- (void)onMMFinderLiveShareSettingViewControllerTapDoneWithVisibilityMode:(int)arg1 andIdList:(id)arg2;
- (void)onMMFinderLiveSelectTagViewControllerTapDoneWithTagInfo:(id)arg1;
- (void)showLiveCategoryPickerView;
- (void)onCategorySelectButtonClick:(id)arg1;
- (void)updateDataItemInfos;
- (void)startFinderLive;
- (_Bool)hasSelectedValidTag;
- (void)showConfirmViewWithTitle:(id)arg1;
- (void)onClickStartLiveAction:(id)arg1;
- (void)onMoreButtonClicked;
- (void)onFilterButtonClick;
- (void)onBeautyButtonClick;
- (void)onMirrorButtonClick;
- (void)onAddGoodsButtonClick;
- (void)onSwitchCameraButtonClick;
- (void)onCloseButtonClicked;
- (void)onClickCoverImageViewAction;
- (void)onCheckBoxClicked;
- (void)onCancelEditMaskTouched:(id)arg1;
- (void)layoutFilterOperationPanel;
- (void)layoutBeautyOperationPanel;
- (void)addShakeOnCheckBoxView;
- (void)layoutCheckBoxView;
- (_Bool)shouldAgreementCheckBoxShown;
- (void)layoutCountdownTipsView;
- (void)initVisibilityLabelView;
- (void)initCategorySelectView;
- (void)initLiveButtons;
- (void)initNoticeView;
- (void)initSeparateLine;
- (void)layoutGrowTextView;
- (void)initCoverImageView;
- (void)initInviteView;
- (void)initControlPanelView;
- (void)initHeadSubViews;
- (void)updateViewsBasedOnGrowTextView;
- (void)layoutTopAndBottomLayer;
- (void)initSubViews;
- (void)onClickBackGroundResignGes;
- (id)convertLbsLifeToWCLocationInfoWithLbsLife:(id)arg1;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)getGPSListAccordingWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)getRecommendPOIInfoByUserGPS;
- (void)fetchRecommendGPSInfoByUserGpsCache;
- (void)fetchLocation;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFinderLiveTaskId:(id)arg1 shareItem:(id)arg2 andLiveNoticInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

