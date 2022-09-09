//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseEvent.h"

@class MMAuthInfo, NSRecursiveLock, ProtobufCGIWrap, ProtobufEventHandler, ProtobufPrtlChannel;

@interface ProtobufEvent : CBaseEvent
{
    ProtobufPrtlChannel *m_ptrl;
    ProtobufCGIWrap *m_pbCGIWrap;
    ProtobufEventHandler *m_pbEventHandler;
    _Bool m_bSpeedy;
    _Bool m_hasInvokePreHandler;
    int m_cmdstatus;
    _Bool m_ecdhHasSwitchCert;
    unsigned int m_ecdhCertVersion;
    struct HybridEcdhClient *m_ecdhClient;
    struct AxEcdhClient *m_axEcdhClient;
    MMAuthInfo *m_authInfo;
    NSRecursiveLock *m_lock;
    _Bool m_hasTerminated;
    double statrTime;
}

+ (unsigned int)switchFromCertVersion:(unsigned int)arg1;
+ (unsigned int)certVersion;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bSpeedy; // @synthesize m_bSpeedy;
@property(readonly) ProtobufCGIWrap *m_pbCGIWrap; // @synthesize m_pbCGIWrap;
- (int)UnPack:(const struct AutoBuffer *)arg1 headExtFlags:(int *)arg2;
- (_Bool)InternalPack:(struct AutoBuffer *)arg1 Host:(id)arg2;
- (_Bool)Pack:(struct AutoBuffer *)arg1 Host:(id)arg2;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (void)Stop;
- (void)TerminateIfNotReceived;
- (_Bool)realStart;
- (void)TryStart;
- (id)m_delNotifyFromEvent;
- (void)dealloc;
- (id)initWithCGIWrap:(id)arg1;

@end

