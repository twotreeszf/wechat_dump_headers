//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBase.h"

#import "GetA8KeyLogicDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, NSURLConnection;
@protocol APAuthDelegate;

@interface APAuth : APBase <GetA8KeyLogicDelegate, NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    int _retryCount;
    id <APAuthDelegate> delegate;
    NSURLConnection *_connection;
}

+ (id)apAuthFromApBase:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <APAuthDelegate> delegate; // @synthesize delegate;
- (void)handleHomeBarClicked:(id)arg1;
- (void)onAPAuth:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)didFail:(_Bool)arg1;
- (void)didExpired;
- (void)didSuccess;
- (void)didStart;
- (void)sendToWeixinSvrToGetAPAuth:(id)arg1;
- (void)sendRequestToAPWithUrlString:(id)arg1 withParams:(id)arg2;
- (void)sendRequestWithGatewayUrl:(id)arg1 withParams:(id)arg2;
- (void)sendRequestWithCheckUrl:(id)arg1 withParams:(id)arg2;
- (id)currMac;
- (_Bool)isExpired;
- (_Bool)isFromCacheAndExpired;
- (_Bool)isFromCacheAndValid;
- (void)prepareForAuth;
- (_Bool)checkExpired;
- (void)logout;
- (void)cancel;
- (void)startWithMac:(id)arg1;
- (void)startIniOS9;
- (void)start;
@property(readonly, copy) NSString *description;
- (id)initWithGetA8KeyResult:(id)arg1 cache:(id)arg2 scene:(unsigned int)arg3 delegate:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

