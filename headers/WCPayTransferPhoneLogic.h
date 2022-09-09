//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "MMUseCaseCallback-Protocol.h"
#import "WCPayNumberTipsModalDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"
#import "WCPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayT2BCTransferControlLogicDelegate-Protocol.h"
#import "WCPayTransferPhoneCheckNameCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneDelHisRcvrCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneEntryPageDelegate-Protocol.h"
#import "WCPayTransferPhoneGetHisRcvrsCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneGetRcvrCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneHistoryPageDelegate-Protocol.h"
#import "WCPayTransferPhoneHomePageCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneHomePageDelegate-Protocol.h"
#import "WCPayTransferPhoneMainPageDelegate-Protocol.h"
#import "WCPayTransferPhonePayCheckCgiDelegate-Protocol.h"
#import "WCPayTransferPhonePlaceOrderCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneSuccPageCgiDelegate-Protocol.h"
#import "WCPayTransferPhoneWelcomePageDelegate-Protocol.h"

@class MMTipsViewController, NSString, TransferPhoneCheckNameReq, TransferPhoneCheckNameResp, TransferPhoneDelHisRcvrReq, TransferPhoneGetHisRcvrsResp, TransferPhoneGetRcvrReq, TransferPhoneGetRcvrResp, TransferPhoneHomePageResp, TransferPhonePlaceOrderReq, TransferPhonePlaceOrderResp, TransferPhoneSuccPageResp, WCPayPayMoneyLogic, WCPayTransferPhoneCheckNameCgi, WCPayTransferPhoneDelHisRcvrCgi, WCPayTransferPhoneGetHisRcvrsCgi, WCPayTransferPhoneGetRcvrCgi, WCPayTransferPhoneHomePageCgi, WCPayTransferPhonePayCheckCgi, WCPayTransferPhonePlaceOrderCgi, WCPayTransferPhoneSuccPageCgi;
@protocol WCPayTransferPhoneLogicDelegate;

@interface WCPayTransferPhoneLogic : WCPayControlLogic <MMUseCaseCallback, WCPayTransferPhoneWelcomePageDelegate, WCPayT2BCTransferControlLogicDelegate, WCPayPwdViewControllerDelegate, WCPayTransferPhoneEntryPageDelegate, WCPayTransferPhoneHistoryPageDelegate, WCPayPayMoneyLogicDelegate, WCPayTransferPhoneMainPageDelegate, WCPayTransferPhoneHomePageDelegate, WCPayTransferPhoneHomePageCgiDelegate, WCPayTransferPhoneGetHisRcvrsCgiDelegate, WCPayTransferPhoneDelHisRcvrCgiDelegate, WCPayTransferPhoneGetRcvrCgiDelegate, WCPayTransferPhoneCheckNameCgiDelegate, WCPayTransferPhonePlaceOrderCgiDelegate, WCPayTransferPhonePayCheckCgiDelegate, WCPayTransferPhoneSuccPageCgiDelegate, WCPayNumberTipsModalDelegate>
{
    _Bool _bIsCheckNameFromPlaceOrder;
    int _forceCheckNameStatus;
    int _scene;
    id <WCPayTransferPhoneLogicDelegate> _m_delegate;
    WCPayTransferPhoneHomePageCgi *_homePageCgi;
    WCPayTransferPhoneGetHisRcvrsCgi *_getHisRcvrsCgi;
    WCPayTransferPhoneDelHisRcvrCgi *_delHisRcvrsCgi;
    WCPayTransferPhoneGetRcvrCgi *_getRcvrCgi;
    WCPayTransferPhoneCheckNameCgi *_checkNameCgi;
    WCPayTransferPhonePlaceOrderCgi *_placeOrderCgi;
    WCPayTransferPhonePayCheckCgi *_payCheckCgi;
    WCPayTransferPhoneSuccPageCgi *_succPageCgi;
    TransferPhoneGetRcvrReq *_getRcvrReq;
    TransferPhoneCheckNameReq *_checkNameReq;
    TransferPhonePlaceOrderReq *_placeOrderReq;
    TransferPhoneDelHisRcvrReq *_delHisRcvrReq;
    TransferPhoneHomePageResp *_homePageResp;
    TransferPhoneGetRcvrResp *_getRcvrResp;
    TransferPhoneGetHisRcvrsResp *_hisRcvrsResp;
    TransferPhoneCheckNameResp *_checkNameResp;
    TransferPhonePlaceOrderResp *_placeOrderResp;
    TransferPhoneSuccPageResp *_succPageResp;
    WCPayPayMoneyLogic *_payMoneyLogic;
    MMTipsViewController *_checkNameController;
    NSString *_replaceOrderToken;
    NSString *_realnameToken;
    NSString *_m_enterMobileNumber;
    NSString *_pastedBankCardOrMobileNumer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pastedBankCardOrMobileNumer; // @synthesize pastedBankCardOrMobileNumer=_pastedBankCardOrMobileNumer;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *m_enterMobileNumber; // @synthesize m_enterMobileNumber=_m_enterMobileNumber;
@property int forceCheckNameStatus; // @synthesize forceCheckNameStatus=_forceCheckNameStatus;
@property _Bool bIsCheckNameFromPlaceOrder; // @synthesize bIsCheckNameFromPlaceOrder=_bIsCheckNameFromPlaceOrder;
@property(retain) NSString *realnameToken; // @synthesize realnameToken=_realnameToken;
@property(retain) NSString *replaceOrderToken; // @synthesize replaceOrderToken=_replaceOrderToken;
@property(retain) MMTipsViewController *checkNameController; // @synthesize checkNameController=_checkNameController;
@property(retain) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain) TransferPhoneSuccPageResp *succPageResp; // @synthesize succPageResp=_succPageResp;
@property(retain) TransferPhonePlaceOrderResp *placeOrderResp; // @synthesize placeOrderResp=_placeOrderResp;
@property(retain) TransferPhoneCheckNameResp *checkNameResp; // @synthesize checkNameResp=_checkNameResp;
@property(retain) TransferPhoneGetHisRcvrsResp *hisRcvrsResp; // @synthesize hisRcvrsResp=_hisRcvrsResp;
@property(retain) TransferPhoneGetRcvrResp *getRcvrResp; // @synthesize getRcvrResp=_getRcvrResp;
@property(retain) TransferPhoneHomePageResp *homePageResp; // @synthesize homePageResp=_homePageResp;
@property(retain) TransferPhoneDelHisRcvrReq *delHisRcvrReq; // @synthesize delHisRcvrReq=_delHisRcvrReq;
@property(retain) TransferPhonePlaceOrderReq *placeOrderReq; // @synthesize placeOrderReq=_placeOrderReq;
@property(retain) TransferPhoneCheckNameReq *checkNameReq; // @synthesize checkNameReq=_checkNameReq;
@property(retain) TransferPhoneGetRcvrReq *getRcvrReq; // @synthesize getRcvrReq=_getRcvrReq;
@property(retain) WCPayTransferPhoneSuccPageCgi *succPageCgi; // @synthesize succPageCgi=_succPageCgi;
@property(retain) WCPayTransferPhonePayCheckCgi *payCheckCgi; // @synthesize payCheckCgi=_payCheckCgi;
@property(retain) WCPayTransferPhonePlaceOrderCgi *placeOrderCgi; // @synthesize placeOrderCgi=_placeOrderCgi;
@property(retain) WCPayTransferPhoneCheckNameCgi *checkNameCgi; // @synthesize checkNameCgi=_checkNameCgi;
@property(retain) WCPayTransferPhoneGetRcvrCgi *getRcvrCgi; // @synthesize getRcvrCgi=_getRcvrCgi;
@property(retain) WCPayTransferPhoneDelHisRcvrCgi *delHisRcvrsCgi; // @synthesize delHisRcvrsCgi=_delHisRcvrsCgi;
@property(retain) WCPayTransferPhoneGetHisRcvrsCgi *getHisRcvrsCgi; // @synthesize getHisRcvrsCgi=_getHisRcvrsCgi;
@property(retain) WCPayTransferPhoneHomePageCgi *homePageCgi; // @synthesize homePageCgi=_homePageCgi;
@property __weak id <WCPayTransferPhoneLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)popAndPush:(id)arg1;
- (void)call:(id)arg1;
- (void)onWCPayNumberTipsModalClickConfirmBtn:(id)arg1;
- (void)onWCPayTransferPhoneWelcomePageNext;
- (void)onWCPayTransferPhoneWelcomePageBack;
- (void)onClickJumpItem:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)OnWCPayT2BCTransferControlLogicFinish;
- (void)OnWCPayPwdViewControllerBack;
- (void)onWCPayTransferPhoneEntryPageToSetUp;
- (void)onWCPayTransferPhoneEntryPageToPhone;
- (void)OnContinueWCPayTransferPhoneEntryPageToPhone;
- (void)OnContinueClickTransToBank;
- (void)onWCPayTransferPhoneLogicToBank;
- (void)onWCPayTransferPhoneEntryPageToBank;
- (void)onWCPayTransferPhoneEntryPageBack;
- (void)onWCPayTransferPhoneHistoryPageDel:(id)arg1;
- (void)onWCPayTransferPhoneHistoryPageSelect:(id)arg1;
- (void)onWCPayTransferPhoneHistoryPageLoadMore;
- (id)onWCPayTransferPhoneHistoryPageGetHisRcvrsResp;
- (void)onWCPayTransferPhoneHistoryPageBack;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onWCPayTransferPhoneSuccessPageClickJumpItem:(id)arg1;
- (id)onWCPayTransferPhoneSuccessPageName;
- (id)onWCPayTransferPhoneSuccessPageAmount;
- (id)onWCPayTransferPhoneSuccessPageResp;
- (void)onWCPayTransferPhoneSuccessPageBack;
- (_Bool)gotoViewController:(id)arg1;
- (void)activeTextField;
- (void)startSuccessPageCgi;
- (void)startPayCheckCgi;
- (void)onPayMoneyLogicDidStop;
- (void)onPayMoneyLogicSuccess;
- (id)onPayMoneyConfirmViewDesc;
- (void)startCheckName:(id)arg1 reason:(unsigned int)arg2 spamInfo:(id)arg3;
- (void)startCheckName:(id)arg1 reason:(unsigned int)arg2;
- (_Bool)onWCPayTransferPhoneMainPageShowCheckName;
- (id)onWCPayTransferPhoneMainPageShowName;
- (id)onWCPayTransferPhoneMainPageGetRcvrResp;
- (void)onWCPayTransferPhoneMainPageToCheckName:(id)arg1;
- (void)onWCPayTransferPhoneMainPageToNext:(unsigned int)arg1 comment:(id)arg2 mode:(unsigned int)arg3;
- (void)onWCPayTransferPhoneMainPageBack;
- (void)onWCPayTransferPhoneMainPageActiveTextField;
- (void)cleanMainPageData;
- (void)onWCPayTransferPhoneHomePageClickJumpItem:(id)arg1;
- (void)onWCPayTransferPhoneHomePageBack;
- (void)onWCPayTransferPhoneHomePageToNext:(id)arg1;
- (void)onWCPayTransferPhoneHomePageToHistory;
- (id)onWCPayTransferPhoneHomePage;
- (void)onWCPayTransferPhoneSuccPageCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneSuccPageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhonePayCheckCgiResp:(id)arg1;
- (void)onWCPayTransferPhonePayCheckCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)checkNameDidChange:(id)arg1;
- (void)cutString:(id)arg1;
- (void)startPaymoneyLogic;
- (void)onWCPayTransferPhonePlaceOrderCgiResp:(id)arg1;
- (void)popToEntryView;
- (void)onWCPayTransferPhonePlaceOrderCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)genDoubleCheckCustomViewWithCheckWinData:(id)arg1;
- (void)placeOrderAfterCheckNameFinish;
- (void)onWCPayTransferPhoneCheckNameCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneCheckNameCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetRcvrCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneGetRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetRcvrCgiRcvidInvaild:(id)arg1;
- (void)onWCPayTransferPhoneDelHisRcvrCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneDelHisRcvrCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiResp:(id)arg1;
- (void)onWCPayTransferPhoneGetHisRcvrsCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneHomePageCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayTransferPhoneHomePageCgiResp:(id)arg1;
- (id)processBankCardNumber:(id)arg1;
- (_Bool)isMobileNumber:(id)arg1;
- (_Bool)isBankCardNumber:(id)arg1;
- (void)delayCheckPasteBoard;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)updateDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

