//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMStackReportConnectionDelegate-Protocol.h"

@class MMStackReportConnection, MemoryReportTask, NSMutableArray, NSString, WCMemoryStatPlugin;

@interface MemoryStatReporter : NSObject <MMStackReportConnectionDelegate>
{
    NSString *m_reportPath;
    NSString *m_configPath;
    NSString *m_zipName;
    MemoryReportTask *m_uploadTask[2];
    NSMutableArray *m_taskList;
    WCMemoryStatPlugin *m_plugin;
    _Bool m_isAllReport;
    MMStackReportConnection *m_connection;
    MMStackReportConnection *m_dumpReportConnection;
    struct FullReportUploadObserver *m_observer;
}

- (void).cxx_destruct;
- (void)onReportUploadCompleted:(_Bool)arg1 reportType:(int)arg2;
- (void)onStackReportCompleted:(_Bool)arg1;
- (void)doFullReport:(id)arg1;
- (void)doSummaryReport:(id)arg1;
- (void)doNextReport:(int)arg1;
- (_Bool)hasNextTask:(int)arg1;
- (id)nextTask:(int)arg1;
- (id)currUsrName;
- (unsigned int)lastUin;
- (void)loadTasks;
- (void)saveTasks;
- (_Bool)canReport:(id)arg1;
- (void)dumpMemoryAndSummaryReport:(id)arg1;
- (void)uploadAllFullReport;
- (void)uploadAllSummaryReport;
- (void)removeAllFullReport;
- (_Bool)hasFullReport;
- (void)addReportTask:(unsigned long long)arg1 reportType:(int)arg2;
- (void)addFullReportTask:(unsigned long long)arg1;
- (void)addSummaryReportTask:(unsigned long long)arg1;
- (id)initWithReportPath:(id)arg1;

@end

