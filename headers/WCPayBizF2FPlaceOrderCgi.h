//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@protocol WCPayBizF2FPlaceOrderCgiDelegate;

@interface WCPayBizF2FPlaceOrderCgi : WCPayBaseCgi
{
    id <WCPayBizF2FPlaceOrderCgiDelegate> _cgiDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBizF2FPlaceOrderCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startSendRequest;
- (id)initPlaceOrderCgiWithDelegate:(id)arg1 request:(id)arg2;

@end

