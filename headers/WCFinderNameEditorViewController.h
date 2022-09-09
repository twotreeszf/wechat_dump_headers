//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextFieldDelegate-Protocol.h"
#import "WCFinderVeirfyNameTipsViewControllerDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIScrollView, UITextField, UIView, WCFinderBannerView, WCFinderContact, WCFinderCreateUserViewModel;
@protocol WCFinderNameEditorViewControllerDelegate;

@interface WCFinderNameEditorViewController : MMUIViewController <WCFinderVeirfyNameTipsViewControllerDelegate, UITextFieldDelegate>
{
    WCFinderContact *_contact;
    NSString *_tips;
    id <WCFinderNameEditorViewControllerDelegate> _delegate;
    WCFinderCreateUserViewModel *_viewModel;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    UITextField *_textField;
    UILabel *_wordTips;
    UIButton *_confirmButton;
    WCFinderBannerView *_bannerView;
    UIView *_topLine;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) WCFinderBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *wordTips; // @synthesize wordTips=_wordTips;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WCFinderCreateUserViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WCFinderNameEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)WCFinderVerifyNameTipsViewControllerDidClickConfirmButton;
- (void)checkConfirmButtonEnable;
- (void)hideBanner;
- (void)showGrayBanner:(id)arg1;
- (void)showRedBanner:(id)arg1;
- (void)updateWordCountTipsLabel:(int)arg1;
- (void)showError:(id)arg1;
- (void)modifyName:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)onSaveText;
- (void)disMissThisViewAnimated;
- (void)layoutView;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

