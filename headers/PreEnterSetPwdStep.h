//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "PasswordLogicDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"

@class CMessageWrap, NSString, PasswordLogic;

@interface PreEnterSetPwdStep : PreEnterBaseStep <PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    CMessageWrap *m_wrapMsg;
    PasswordLogic *m_setPasswdLogic;
}

- (void).cxx_destruct;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)showSetPasswordView;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)startStep;
- (id)initWithMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

