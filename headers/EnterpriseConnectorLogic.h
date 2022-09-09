//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EnterpriseBrandContactSelectViewControllerDelegate-Protocol.h"
#import "EnterpriseSessionSelectViewControllerDelegate-Protocol.h"
#import "ShareMessageConfirmLogicHelperDelegate-Protocol.h"

@class EnterpriseConnectorContext, JSEvent, NSString, ShareMessageConfirmLogicHelper;
@protocol EnterpriseConnectorLogicDelegate;

@interface EnterpriseConnectorLogic : NSObject <EnterpriseBrandContactSelectViewControllerDelegate, EnterpriseSessionSelectViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate>
{
    EnterpriseConnectorContext *_context;
    NSString *_scopeBrand;
    NSString *_targetBrand;
    NSString *_targetEnterpriseChat;
    ShareMessageConfirmLogicHelper *_jsSendAppMsgHelper;
    JSEvent *_jsEvent;
    id <EnterpriseConnectorLogicDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EnterpriseConnectorLogicDelegate> delegate; // @synthesize delegate;
- (void)callDelegateConnectFail;
- (void)callDelegateConnectSucceed;
- (void)errorConnect;
- (void)cancelConnect;
- (_Bool)isSendAppMessage:(id)arg1;
- (_Bool)isSendEnterpriseChat:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)onEnterpriseCancelSelectBrand:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (_Bool)checkTarget;
- (_Bool)hasEnterpriseChatContext;
- (void)connectWithMsgWrap:(id)arg1 extraData:(id)arg2;
- (void)clearTarget;
- (id)getContext;
- (void)useContextAsTarget;
- (void)selectTargetInScope:(id)arg1 viewController:(id)arg2;
- (id)initWithContextBrand:(id)arg1 contextEnterpriseChat:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

