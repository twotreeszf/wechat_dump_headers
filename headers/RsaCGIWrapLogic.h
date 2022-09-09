//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IRsaCertMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, ProtobufCGIWrap;

@interface RsaCGIWrapLogic : NSObject <PBMessageObserverDelegate, IRsaCertMgrExt>
{
    unsigned int m_cert_error_count;
    unsigned int m_uiFlag;
    unsigned int m_uiEventID;
    ProtobufCGIWrap *m_pbCGIWrap;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiEventID; // @synthesize m_uiEventID;
@property(nonatomic) unsigned int m_uiFlag; // @synthesize m_uiFlag;
@property(retain, nonatomic) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
- (void)dealloc;
- (void)OnRsaCertFail;
- (void)OnRsaCertCGIAgain;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)stopLogic;
- (void)startLogicAgain;
- (_Bool)startLogic;
- (id)getKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

