//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAcceptAgreementBaseViewController.h"

#import "SettingModifyAliasLogicDelegate-Protocol.h"
#import "SettingModifyAliasViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMAcceptAgreementCommonHeadView, MMTableView, MMTableViewInfo, MMUILabel, MMUITextField, NSString, SettingModifyAliasLogic, UIButton, UIFont;
@protocol SettingModifyAliasViewControllerDelegate;

@interface SettingModifyAliasInputViewController : MMAcceptAgreementBaseViewController <UITextFieldDelegate, SettingModifyAliasLogicDelegate, SettingModifyAliasViewControllerDelegate>
{
    UIButton *m_forgetPasswordButton;
    MMUITextField *m_tfAlias;
    UIButton *m_makeSureBtn;
    double m_fKeyboardHeight;
    SettingModifyAliasLogic *m_settingModifyAliasLogic;
    MMUILabel *m_aliasTitleView;
    UIFont *m_titleFont;
    UIFont *m_contentFont;
    UIFont *m_aliasFont;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    NSString *_m_checkCanSetAliasTicket;
    NSString *_m_setAliasPwdTicket;
    NSString *_m_setAliasHumanFaceTicket;
    NSString *_m_ssesionID;
    id <SettingModifyAliasViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyAliasViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSString *m_ssesionID; // @synthesize m_ssesionID=_m_ssesionID;
@property(retain, nonatomic) NSString *m_setAliasHumanFaceTicket; // @synthesize m_setAliasHumanFaceTicket=_m_setAliasHumanFaceTicket;
@property(retain, nonatomic) NSString *m_setAliasPwdTicket; // @synthesize m_setAliasPwdTicket=_m_setAliasPwdTicket;
@property(retain, nonatomic) NSString *m_checkCanSetAliasTicket; // @synthesize m_checkCanSetAliasTicket=_m_checkCanSetAliasTicket;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (id)getViewController;
- (void)onSettingModifyAliasSuccess;
- (void)OnCheckAliasValidWithResult:(unsigned int)arg1 retCode:(int)arg2 errorMsg:(id)arg3;
- (void)onBackButtonClicked:(id)arg1;
- (void)OnMakeSureClick;
- (void)makeAliasEdit:(id)arg1;
- (id)genHeaderView;
- (void)reloadTableData;
- (void)updateWordCount:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)restAcceptBtnWithKeyboardWillShow:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onAliasHideKeyBoard;
- (void)onAliasShowKeyBoard;
- (void)initAliasTitleView;
- (void)initAliasEdit;
- (void)initMakeSureBtn;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initData;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

