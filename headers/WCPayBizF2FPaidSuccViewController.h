//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayTransferMoneyPaidSuccessViewV2Delegate-Protocol.h"

@class NSString, WCPayTransferMoneyPaidSuccessViewV2;
@protocol WCPayBizF2FPaidSuccViewControllerDelegate;

@interface WCPayBizF2FPaidSuccViewController : WCPayBaseViewController <WCPayTransferMoneyPaidSuccessViewV2Delegate>
{
    id <WCPayBizF2FPaidSuccViewControllerDelegate> _delegate;
    WCPayTransferMoneyPaidSuccessViewV2 *_m_layoutV2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTransferMoneyPaidSuccessViewV2 *m_layoutV2; // @synthesize m_layoutV2=_m_layoutV2;
@property(nonatomic) __weak id <WCPayBizF2FPaidSuccViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ReturnWithoutDrawLottery;
- (void)onWCPayTransferMoneyPaidSuccessViewV2StartDrawLottery:(unsigned int)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickLotteryBtn:(id)arg1;
- (void)onWCPayTransferMoneyPaidSuccessViewV2ClickDone;
- (void)refreshViewWithData:(id)arg1;
- (void)refreshActivityContent;
- (void)updateView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

