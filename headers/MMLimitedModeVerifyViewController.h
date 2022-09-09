//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAcceptAgreementResultViewControllerDelegate-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMUILabel, NSString, PasswordLogic, UIButton, WCUITextField;

@interface MMLimitedModeVerifyViewController : MMUIViewController <PasswordLogicDelegate, UITextFieldDelegate, MMAcceptAgreementResultViewControllerDelegate>
{
    _Bool _isShowErrorTip;
    _Bool _isSuccess;
    MMUILabel *_titleLabel;
    WCUITextField *_passwordTextField;
    MMUILabel *_tipLabel;
    UIButton *_forgotButton;
    UIButton *_confirmButton;
    CDUnknownBlockType _successCallback;
    CDUnknownBlockType _cancelCallback;
    PasswordLogic *_passwordLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) _Bool isShowErrorTip; // @synthesize isShowErrorTip=_isShowErrorTip;
@property(retain, nonatomic) PasswordLogic *passwordLogic; // @synthesize passwordLogic=_passwordLogic;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType successCallback; // @synthesize successCallback=_successCallback;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *forgotButton; // @synthesize forgotButton=_forgotButton;
@property(retain, nonatomic) MMUILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) WCUITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordError:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldContentChange:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)clickAtBackground;
- (void)onForgetPassword;
- (void)onConfirmPassword;
- (void)onBack;
- (void)initUI;
- (id)navigationBarBackgroundColor;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSuccess:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

