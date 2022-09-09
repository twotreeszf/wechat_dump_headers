//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "ClickStatSwizzleExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface WCWidgetReocordMgr : MMRootService <MMServiceProtocol, ClickStatSwizzleExt>
{
    NSMutableArray *_eventList;
    struct CGPoint _touchBeginPoint;
    struct timeval _touchBeginTimeStamp;
    _Bool _bSensitive;
    _Bool _bNeedDebugInfo;
    _Bool _needRecord;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needRecord; // @synthesize needRecord=_needRecord;
- (void)printWidgetEvent:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (_Bool)isSensitiveWidget:(id)arg1;
- (_Bool)removeWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (id)getWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (_Bool)saveWidgetRecordForPage:(id)arg1 andTimeStamp:(unsigned int)arg2;
- (_Bool)isKindOfMonitorGesture:(id)arg1;
- (void)_recordTouchEvent_v3:(id)arg1;
- (void)_recordTouchEvent_v2:(id)arg1;
- (void)_recordTouchEvent_v1:(id)arg1;
- (void)recordTouchEvent:(id)arg1;
- (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (void)onSendEvent:(id)arg1;
- (id)getAndRemoveWidgetRecord;
- (void)recordEvent:(id)arg1;
- (void)dealloc;
- (void)onServiceMemoryWarning;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

