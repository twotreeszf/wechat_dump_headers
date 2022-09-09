//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBizMainViewControllerExt-Protocol.h"
#import "WCPayMallFuncManageViewControllerDelegate-Protocol.h"
#import "WCPayWalletBatchFunctionOperateCgiDelegate-Protocol.h"
#import "WCPayWalletGetFunctionSwitchListCgiDelegate-Protocol.h"

@class NSString, WCPayWalletBatchFunctionOperateCgi, WCPayWalletGetFunctionSwitchListCgi;
@protocol WCMallWalletMangeControlLogicDelegate;

@interface WCMallWalletMangeControlLogic : WCPayControlLogic <WCPayWalletGetFunctionSwitchListCgiDelegate, WCPayWalletBatchFunctionOperateCgiDelegate, WCPayMallFuncManageViewControllerDelegate, WCBizMainViewControllerExt>
{
    id <WCMallWalletMangeControlLogicDelegate> m_delegate;
    WCPayWalletGetFunctionSwitchListCgi *_getListCgi;
    WCPayWalletBatchFunctionOperateCgi *_batchOperateCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayWalletBatchFunctionOperateCgi *batchOperateCgi; // @synthesize batchOperateCgi=_batchOperateCgi;
@property(retain, nonatomic) WCPayWalletGetFunctionSwitchListCgi *getListCgi; // @synthesize getListCgi=_getListCgi;
- (void)onWCPayWalletBatchFunctionOperateCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCBizMainViewControllerGetFuncDone;
- (void)onWCPayWalletBatchFunctionOperateCgiResponseOK:(id)arg1;
- (void)OnWCPayMallFuncManageViewControllerBatchOperate:(id)arg1;
- (void)OnWCPayMallFuncManageViewControllerCancel;
- (void)onWCPayWalletGetFunctionSwitchListCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayWalletGetFunctionSwitchListCgiResponseOK:(id)arg1;
- (void)startLogic;
- (void)dealloc;
- (void)setControlLogicDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
