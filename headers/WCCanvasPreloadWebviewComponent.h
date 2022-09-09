//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "LocationRetrieveDelegate-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "WCCanvasJSLogicDelegate-Protocol.h"
#import "YYWebViewDelegate-Protocol.h"

@class LocationRetriever, NSString, NSURLRequest, WCCanvasJSLogic, WKWebView;
@protocol YYWebViewInterface;

@interface WCCanvasPreloadWebviewComponent : WCCanvasComponent <YYWebViewDelegate, WCCanvasJSLogicDelegate, MMImageLoaderObserver, LocationRetrieveDelegate>
{
    WKWebView<YYWebViewInterface> *_webView;
    WCCanvasJSLogic *_jsLogic;
    LocationRetriever *_locationRetriever;
    NSString *_getLocationCallbackID;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *getLocationCallbackID; // @synthesize getLocationCallbackID=_getLocationCallbackID;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
@property(retain, nonatomic) WCCanvasJSLogic *jsLogic; // @synthesize jsLogic=_jsLogic;
@property(retain, nonatomic) WKWebView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (id)validAuthDomainArray;
- (_Bool)checkDomain:(id)arg1;
- (_Bool)getDeviceInfo:(id)arg1 callbackID:(id)arg2;
- (_Bool)jumpToAppStore:(id)arg1 callbackID:(id)arg2;
- (_Bool)getLocation:(id)arg1 callbackID:(id)arg2;
- (void)onUpdateContentHeight:(id)arg1;
- (_Bool)dispatchUpdateContentHeight:(id)arg1 callbackID:(id)arg2;
- (id)tryGetLocalImage:(id)arg1;
- (id)getImageData:(id)arg1;
- (void)onQRScan:(_Bool)arg1 param:(id)arg2;
- (_Bool)dispatchQRScan:(_Bool)arg1 param:(id)arg2 callbackID:(id)arg3;
- (_Bool)onAdH5FuncDispatched:(id)arg1 callbackID:(id)arg2;
- (_Bool)onOperateOpenUrlInWebview:(id)arg1 callbackID:(id)arg2;
- (_Bool)onOperateVoteAdData:(id)arg1 callbackID:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (id)getPreInjectScriptStr;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

