//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayQryCancelECardDescCgiDelegate-Protocol.h"

@class NSString, QryCancelECardDescRes, UIButton, WCPayQryCancelECardDescCgi;
@protocol WCPayECardDetailViewControllerDelegate;

@interface WCPayECardDetailViewController : WCPayBaseViewController <WCPayQryCancelECardDescCgiDelegate>
{
    id <WCPayECardDetailViewControllerDelegate> _delegate;
    WCPayQryCancelECardDescCgi *_descCgi;
    QryCancelECardDescRes *_descResponse;
    UIButton *_footerButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) QryCancelECardDescRes *descResponse; // @synthesize descResponse=_descResponse;
@property(retain, nonatomic) WCPayQryCancelECardDescCgi *descCgi; // @synthesize descCgi=_descCgi;
@property(nonatomic) __weak id <WCPayECardDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)qryCancelECardDescCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryCancelECardDescCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)clickfooterButton;
- (void)close;
- (void)requestData;
- (id)createDotLabel;
- (id)dotsAndLabelsWithWidth:(double)arg1 titles:(id)arg2;
- (void)setupFooterButton;
- (void)reloadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

