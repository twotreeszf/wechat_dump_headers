//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAOpenSDKJSEventHandler_BaseEvent.h"

#import "WAShareAppMessageForwardLogicControllerComponentDelegate-Protocol.h"

@class NSString, WAShareAppMessageCommonParamsModel, WAShareAppMessageContextModel, WAShareAppMessageForwardLogicControllerComponent;

@interface WAOpenSDKJSEventHandler_shareAppMessage : WAOpenSDKJSEventHandler_BaseEvent <WAShareAppMessageForwardLogicControllerComponentDelegate>
{
    WAShareAppMessageContextModel *_shareContextModel;
    WAShareAppMessageCommonParamsModel *_paramsModel;
    WAShareAppMessageForwardLogicControllerComponent *_forwardLogicControllerComponent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAShareAppMessageForwardLogicControllerComponent *forwardLogicControllerComponent; // @synthesize forwardLogicControllerComponent=_forwardLogicControllerComponent;
@property(retain, nonatomic) WAShareAppMessageCommonParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(retain, nonatomic) WAShareAppMessageContextModel *shareContextModel; // @synthesize shareContextModel=_shareContextModel;
- (void)reportForwardMsg:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)arg1;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)arg1;
- (id)viewControllerForForwardLogicControllerToShow:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

