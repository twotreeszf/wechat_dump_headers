//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocalJSLogicBase.h"

#import "YYWebViewDelegate.h"

@class NSString, NSURLRequest;

@interface WCCanvasJSLogic : LocalJSLogicBase <YYWebViewDelegate>
{
    _Bool _hasInjected;
    id <WCCanvasJSLogicDelegate> _delegate;
    id <YYWebViewDelegate> _wvDelegate;
}

@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate=_wvDelegate;
@property(nonatomic) __weak id <WCCanvasJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasInjected; // @synthesize hasInjected=_hasInjected;
- (void).cxx_destruct;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)sendCallbackWithRet:(int)arg1 error:(id)arg2 data:(id)arg3 callbackId:(id)arg4;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (id)initWithWebView:(id)arg1 wvDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end
