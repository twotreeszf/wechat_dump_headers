//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "InternalLoadingFavorDelegate-Protocol.h"
#import "InternalTransferTaskDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCPayBizF2FFavorSelectViewDelegate-Protocol.h"
#import "WCPayBusiF2FGetFavorCgiDelegate-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"

@class BusiF2FFavorCommResp, FavorComposeInfo, InternalLoadingFavor, InternalTransferTask, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WCPayBaseNetworkingError, WCPayBizF2FFavorSelectView, WCPayBusiF2FGetFavorCgi, WCPayDecimalKeyboardView, WCPayNavigationView, WCPayTextField, WCUIAlertView;
@protocol WCPayBizF2FTransferMoneyViewControllerDelegate;

@interface WCPayBizF2FTransferMoneyViewController : WCPayBaseViewController <InternalLoadingFavorDelegate, InternalTransferTaskDelegate, WCPayBusiF2FGetFavorCgiDelegate, WCPayBizF2FFavorSelectViewDelegate, UITextFieldDelegate, ILinkEventExt, WCPayDecimalKeyboardViewDelegate>
{
    _Bool _m_userHasSelectCompose;
    id <WCPayBizF2FTransferMoneyViewControllerDelegate> _delegate;
    NSString *_comment;
    UILabel *_m_favorTitleLabel;
    UIButton *_m_favorButton;
    UIView *_m_favorLine;
    UIImageView *_m_favorArrowView;
    WCPayNavigationView *_m_favorBackgroundView;
    WCPayBizF2FFavorSelectView *_m_favorSelectView;
    UILabel *_m_favorMoneyLabel;
    WCUIAlertView *_m_alertView;
    BusiF2FFavorCommResp *_m_getFavorResp;
    FavorComposeInfo *_m_selectedComposeInfo;
    WCPayBusiF2FGetFavorCgi *_getFavorCgi;
    InternalTransferTask *_m_transferTask;
    WCPayBaseNetworkingError *_m_getFavorErr;
    InternalLoadingFavor *_m_internalLoadingFavor;
    UIView *_m_headerView;
    UIView *_m_bannerView;
    UILabel *_m_mchNameLabel;
    UILabel *_m_nickNameLabel;
    UIView *_m_imageView;
    UIView *_m_contentView;
    UILabel *_m_amountTitle;
    UILabel *_m_unitLabel;
    WCPayTextField *_m_textField;
    UIView *_m_textFieldLine;
    UILabel *_m_amountLabel;
    UIButton *_m_transferButton;
    RichTextView *_m_commentView;
    WCPayDecimalKeyboardView *_keyboardView;
    UIView *_m_footerMask;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIView *m_footerMask; // @synthesize m_footerMask=_m_footerMask;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(retain, nonatomic) RichTextView *m_commentView; // @synthesize m_commentView=_m_commentView;
@property(retain, nonatomic) UIButton *m_transferButton; // @synthesize m_transferButton=_m_transferButton;
@property(retain, nonatomic) UILabel *m_amountLabel; // @synthesize m_amountLabel=_m_amountLabel;
@property(retain, nonatomic) UIView *m_textFieldLine; // @synthesize m_textFieldLine=_m_textFieldLine;
@property(retain, nonatomic) WCPayTextField *m_textField; // @synthesize m_textField=_m_textField;
@property(retain, nonatomic) UILabel *m_unitLabel; // @synthesize m_unitLabel=_m_unitLabel;
@property(retain, nonatomic) UILabel *m_amountTitle; // @synthesize m_amountTitle=_m_amountTitle;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView=_m_contentView;
@property(retain, nonatomic) UIView *m_imageView; // @synthesize m_imageView=_m_imageView;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel=_m_nickNameLabel;
@property(retain, nonatomic) UILabel *m_mchNameLabel; // @synthesize m_mchNameLabel=_m_mchNameLabel;
@property(retain, nonatomic) UIView *m_bannerView; // @synthesize m_bannerView=_m_bannerView;
@property(retain, nonatomic) UIView *m_headerView; // @synthesize m_headerView=_m_headerView;
@property(retain, nonatomic) InternalLoadingFavor *m_internalLoadingFavor; // @synthesize m_internalLoadingFavor=_m_internalLoadingFavor;
@property(retain, nonatomic) WCPayBaseNetworkingError *m_getFavorErr; // @synthesize m_getFavorErr=_m_getFavorErr;
@property(retain, nonatomic) InternalTransferTask *m_transferTask; // @synthesize m_transferTask=_m_transferTask;
@property(retain, nonatomic) WCPayBusiF2FGetFavorCgi *getFavorCgi; // @synthesize getFavorCgi=_getFavorCgi;
@property(nonatomic) _Bool m_userHasSelectCompose; // @synthesize m_userHasSelectCompose=_m_userHasSelectCompose;
@property(retain, nonatomic) FavorComposeInfo *m_selectedComposeInfo; // @synthesize m_selectedComposeInfo=_m_selectedComposeInfo;
@property(retain, nonatomic) BusiF2FFavorCommResp *m_getFavorResp; // @synthesize m_getFavorResp=_m_getFavorResp;
@property(retain, nonatomic) WCUIAlertView *m_alertView; // @synthesize m_alertView=_m_alertView;
@property(retain, nonatomic) UILabel *m_favorMoneyLabel; // @synthesize m_favorMoneyLabel=_m_favorMoneyLabel;
@property(retain, nonatomic) WCPayBizF2FFavorSelectView *m_favorSelectView; // @synthesize m_favorSelectView=_m_favorSelectView;
@property(retain, nonatomic) WCPayNavigationView *m_favorBackgroundView; // @synthesize m_favorBackgroundView=_m_favorBackgroundView;
@property(retain, nonatomic) UIImageView *m_favorArrowView; // @synthesize m_favorArrowView=_m_favorArrowView;
@property(retain, nonatomic) UIView *m_favorLine; // @synthesize m_favorLine=_m_favorLine;
@property(retain, nonatomic) UIButton *m_favorButton; // @synthesize m_favorButton=_m_favorButton;
@property(retain, nonatomic) UILabel *m_favorTitleLabel; // @synthesize m_favorTitleLabel=_m_favorTitleLabel;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <WCPayBizF2FTransferMoneyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)kvLog19821StringWithActionType:(unsigned int)arg1;
- (void)activeTextField;
- (void)updateAmount:(unsigned int)arg1;
- (void)clearTextField;
- (void)showFloatConfirmBtn;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)reportWithScene:(unsigned long long)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)updateCommentView;
- (void)updateTransferButton;
- (void)updateTextFieldLine;
- (void)adjustUnitAndTextField;
- (id)placeHolder;
- (void)updateAmountLabel;
- (double)getWCPayTextFieldOffsetY;
- (double)getWCPayTextFieldOffsetX;
- (void)updateTextField;
- (void)updateUnitTitle;
- (void)updateAmountTitle;
- (void)updateContentView;
- (void)updateImageView;
- (void)adjustMchNameAndNickName;
- (void)updateNickNameLabel;
- (void)updateMchNameLabel;
- (void)updateBannerView;
- (void)updateHeaderView;
- (void)updateView;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (unsigned int)getAmountInCent;
- (void)onInternalTransferTaskExecute;
- (void)onInternalLoadingFavorError:(id)arg1;
- (void)onInternalLoadingFavor:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiError:(id)arg1;
- (void)onWCPayBusiF2FGetFavorCgiResp:(id)arg1;
- (void)onWCPayBizF2FFavorSelectViewSelect:(id)arg1;
- (void)clearFavorInfo;
- (void)refreshTransferButton;
- (void)commentCancel;
- (void)commentConfirm;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getDiaplayTrueName;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)getFavorWithAmount:(unsigned int)arg1 andDelegate:(id)arg2;
- (void)onBizTransferMoneyViewControllerAmountDidChange:(id)arg1;
- (void)textFieldDidChange;
- (void)transferBtnClick;
- (void)leftBarButtonItemClick;
- (void)viewWillPop:(_Bool)arg1;
- (void)onFavorButtonClick;
- (void)onFavorButtonClickAction;
- (void)updateFavorArea;
- (void)updateFavorMoney;
- (void)updateFavorButtonTitle;
- (id)favorMoneyText;
- (unsigned long long)favorMoneyInt;
- (double)updateFavorMoneyLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorLineWithYOffset:(double)arg1 baseView:(id)arg2;
- (_Bool)shouldEnableFavorButton;
- (double)updateFavorButtonWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorTitleLabelWithYOffset:(double)arg1 baseView:(id)arg2;
- (double)updateFavorViewWithYOffset:(double)arg1 baseView:(id)arg2;
- (id)favorButtonTitle;
- (id)safeFavorButtonTitle;
- (id)favorButtonColor;
- (id)favorResp;
- (_Bool)shouldShowFavor;
- (_Bool)shouldGetFavor;
- (double)amountInputLabelMarginUp;
- (double)amountInputLabelHeight;
- (double)amountInputLabelFontSize;
- (void)setupNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)reportWithAction:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

