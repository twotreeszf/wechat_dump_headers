//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class SafeMutableDictionary;

@interface ExptAppLogic : NSObject <PBMessageObserverDelegate>
{
    unsigned int _lastUpdateTime;
    unsigned int _interval;
    unsigned int _lastReportTime;
    SafeMutableDictionary *_hitList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastReportTime; // @synthesize lastReportTime=_lastReportTime;
@property(retain, nonatomic) SafeMutableDictionary *hitList; // @synthesize hitList=_hitList;
@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (id)getCgiReportList;
- (id)getLocalExptList;
- (_Bool)needLocalList;
- (id)getGlobalSequence;
- (unsigned int)getLastGetTimeSec;
- (unsigned int)getIntervalSec;
- (id)getExptAppDeviceType;
- (id)createReportList;
- (void)saveReportOpTimeMs;
- (unsigned long long)getReportOpTimeMs;
- (void)saveReportList;
- (unsigned int)getFromMmkv:(id)arg1 defInt:(unsigned int)arg2;
- (void)saveToMMkv:(id)arg1 valInt:(unsigned int)arg2;
- (id)getFromMMkv:(id)arg1 def:(id)arg2;
- (void)saveToMMkv:(id)arg1 val:(id)arg2;
- (id)respToLocalItem:(id)arg1;
- (void)handleReportExptApp:(id)arg1;
- (void)handleExptAppConfig:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportExptConfig;
- (void)resetGetAppTime:(unsigned int)arg1 and:(unsigned int)arg2;
- (void)resetLastGetTimeSec:(unsigned int)arg1;
- (void)checkToReportConfig;
- (void)checkToGetSvrExpt;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)hit:(id)arg1;
- (void)dealloc;
- (id)init;

@end
