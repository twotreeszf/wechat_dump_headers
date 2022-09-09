//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class CMultiEvent, NSData, NSMutableDictionary, NSRecursiveLock, NSString;

@interface EventService : MMUserService <MMServiceProtocol>
{
    CMultiEvent *m_oEventMgr;
    NSMutableDictionary *m_usbCmdHandler;
    NSRecursiveLock *m_usbCmdLock;
    NSData *m_usbEncyptKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMultiEvent *m_oEventMgr; // @synthesize m_oEventMgr;
- (unsigned int)AddEvent:(id)arg1;
- (int)onGYNetEnd:(int)arg1 Code:(int)arg2 Msg:(const char *)arg3 Hashcode:(unsigned int)arg4;
- (void)HandleRespThread:(id)arg1;
- (int)buf2Resp:(unsigned int)arg1 In:(const struct AutoBuffer *)arg2 Err:(int *)arg3 Flags:(unsigned long long *)arg4;
- (_Bool)req2Buf:(unsigned int)arg1 Out:(struct AutoBuffer *)arg2 Host:(id)arg3;
- (void)TerminateEventIfNotReceived:(unsigned int)arg1;
- (void)StopEvent:(unsigned int)arg1;
- (void)TryStartEvents;
- (void)StopService;
- (void)StartService;
- (unsigned int)CreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2 EventType:(unsigned int)arg3 PWB:(const struct PBCGIHelperWrap *)arg4;
- (unsigned int)CreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2 EventType:(unsigned int)arg3;
- (unsigned int)CreateProtobufEventWithoutPBW:(id)arg1 Flag:(unsigned int)arg2;
- (unsigned int)CreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2;
- (unsigned int)internalCreateProtobufEvent:(id)arg1 Flag:(unsigned int)arg2 EventType:(unsigned int)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

