//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "FaceRecogPayHandlerDelegate-Protocol.h"

@class FaceRecogPayHandler, JSEvent, NSString;

@interface WebviewJSEventHandler_faceVerifyForPay : WebviewJSEventHandlerBase <FaceRecogPayHandlerDelegate>
{
    JSEvent *_cbEvent;
    FaceRecogPayHandler *_faceHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPayHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(retain, nonatomic) JSEvent *cbEvent; // @synthesize cbEvent=_cbEvent;
- (void)faceRecogPayHandlerDidCancel:(id)arg1;
- (void)faceRecogPayHandlerDidFinish:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

