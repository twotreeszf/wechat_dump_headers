//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCPayIBGCheckJSAPICgiDelegate-Protocol.h"

@class NSString, WCPayIBGCheckJSAPICgi;

@interface WebviewJSEventHandler_handleWCPayWalletBuffer : WebviewJSEventHandlerBase <WCPayIBGCheckJSAPICgiDelegate>
{
    NSString *_action;
    long long _region;
    NSString *_buffer;
    NSString *_currentBuffer;
    WCPayIBGCheckJSAPICgi *_cgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayIBGCheckJSAPICgi *cgi; // @synthesize cgi=_cgi;
@property(retain, nonatomic) NSString *currentBuffer; // @synthesize currentBuffer=_currentBuffer;
@property(retain, nonatomic) NSString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) long long region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void)handleFetchBuffer;
- (void)handleSaveBuffer;
- (void)callFail;
- (id)mmkvBufferKeyWithRegion:(long long)arg1;
- (void)ibgCheckJSAPICgi:(id)arg1 didFailWithError:(id)arg2;
- (void)ibgCheckJSAPICgi:(id)arg1 didGetResponse:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

