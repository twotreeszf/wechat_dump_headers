//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCPayJSOpenOfflinePayControlLogicDelegate-Protocol.h"

@class JSEvent, NSString, WCPayJSOpenOfflinePayControlLogic;

@interface WebviewJSEventHandler_openOfflinePayView : WebviewJSEventHandlerBase <WCPayJSOpenOfflinePayControlLogicDelegate>
{
    JSEvent *_jsEvent;
    WCPayJSOpenOfflinePayControlLogic *_openOfflinePayLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayJSOpenOfflinePayControlLogic *openOfflinePayLogic; // @synthesize openOfflinePayLogic=_openOfflinePayLogic;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)returnToOfflinePayView;
- (void)failToStartOpenOfflinePayLogic;
- (void)succToOpenOfflinePayLogic;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

