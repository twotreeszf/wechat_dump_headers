//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBackupExt.h"
#import "IChatMigrationExt.h"
#import "IVOIPWindowExt.h"

@class NSMutableArray, NSString;

@interface MMPowerMgr : NSObject <IVOIPWindowExt, IBackupExt, IChatMigrationExt>
{
    _Bool m_bLowPowerMode;
    NSMutableArray *m_minuteCPUUsageArray;
    double m_foregroundTime;
    double m_backgroundTime;
    float m_backgroundTotalCPU;
    float m_backgroundTotalSec;
    _Bool m_background;
    _Bool m_backgroundCPUTooSmall;
    unsigned int _bStopMonitorCPUAverageCount;
}

+ (long long)getVirtualMemory;
+ (long long)getResidentMemory;
+ (float)getCurrentCpuUsage;
+ (void)printCurrentAllThreadCPU;
+ (id)shareInstance;
@property unsigned int bStopMonitorCPUAverageCount; // @synthesize bStopMonitorCPUAverageCount=_bStopMonitorCPUAverageCount;
- (void).cxx_destruct;
- (void)cultivateBackgroundCpu:(float)arg1 periodTime:(float)arg2;
- (_Bool)cultivateCpuUsage:(float)arg1 periodTime:(float)arg2;
- (_Bool)isLowPowerMode;
- (void)processPowerModeChange;
- (void)p_setPowerMode;
- (void)onMigrationStopWorking;
- (void)onMigrationWorking;
- (void)onTerminateBackup;
- (void)onStartBackup;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)stopCameraScan;
- (void)startCameraScan;
- (_Bool)isBackgroundCPUTooSmall;
- (double)getBackgroundTime;
- (double)getForegroundTime;
- (void)processEnterBackground;
- (void)processEnterForeground;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

