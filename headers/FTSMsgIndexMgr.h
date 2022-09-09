//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFTSIndexOperation-Protocol.h"
#import "IFTSMessageExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"

@class FTS5MigrationInfo, FTSDB, FTSMessageDB, FTSMsgIndexState, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface FTSMsgIndexMgr : NSObject <IMsgExt, WXGImportMessageNotification, IFTSMessageExt, IFTSIndexOperation>
{
    FTSDB *_ftsDB;
    _Bool _canceled;
    int _currentPriority;
    NSRecursiveLock *_lock;
    unsigned int _unIndexNewMsgCount;
    NSMutableDictionary *_dicUnIndexMsgCache;
    NSMutableDictionary *_dicSessionMaxId;
    _Bool _hasDeleteTask;
    _Bool _hasMigrationTask;
    NSMutableSet *_newMsgIndexSessions;
    NSMutableSet *_oldMsgIndexSessions;
    FTSMsgIndexState *_indexingState;
    NSMutableDictionary *_dicSessionContact;
    FTS5MigrationInfo *_migrationInfo;
    int _iFTSIndexingType;
    NSObject<OS_dispatch_queue> *_taskQueue;
    FTSMessageDB *_ftsMessageDB;
    NSMutableSet *_indexRepairingUsrs;
}

- (void).cxx_destruct;
@property(retain) NSMutableSet *indexRepairingUsrs; // @synthesize indexRepairingUsrs=_indexRepairingUsrs;
@property(retain, nonatomic) FTSMessageDB *ftsMessageDB; // @synthesize ftsMessageDB=_ftsMessageDB;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) int iFTSIndexingType; // @synthesize iFTSIndexingType=_iFTSIndexingType;
- (void)onFTSMessageDBDidRepairIndexForUsername:(id)arg1 result:(_Bool)arg2;
- (void)onFTSMessageDBWillRepairIndexForUsername:(id)arg1;
- (_Bool)isSessionUsrValid:(id)arg1 contact:(id)arg2;
- (id)getBatchAddMessage:(_Bool)arg1 finishSessions:(id)arg2;
- (id)migrationInfoPath;
- (void)markMigrationFinish;
- (void)markMigrationStart;
- (void)internalMigrateIndex;
- (void)internalDeleteExpiredIndex;
- (void)internalBuildIndexForOldMsg;
- (void)internalBuildIndexForNewMsg;
- (void)fireMsgIndexingTaskLoop;
- (void)onImportMessageSuccess;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)safeCopyUnIndexMsgCache;
- (void)clearIndexMemCache;
- (void)removeUnIndexMsgFromID:(unsigned int)arg1 toID:(unsigned int)arg2 forKey:(id)arg3;
- (unsigned int)calAllMemMsgCount;
- (void)cacheUnIndexMsg:(id)arg1 forKey:(id)arg2;
- (void)iFTSIndexingMemoryWarning;
- (void)iFTSIndexingStop;
- (void)iFTSIndexingFireTask:(int)arg1;
- (void)iFTSIndexingPrepareSearch;
- (void)iFTSIndexingInit;
- (void)checkIndexInvalid:(id)arg1;
- (id)captureOrUpdateIndexStatus;
- (void)clearIndexStatus:(id)arg1;
- (void)updateIndexStatus:(id)arg1 withLocalId:(unsigned int)arg2;
- (_Bool)canDoIndexing;
- (_Bool)hasNewIndexTask;
- (_Bool)needIndexNewMsgFirst;
- (void)resetIndexState;
- (void)doInitMsgSourceState;
- (void)doInitIndexing;
- (void)asyncInitIndex;
- (void)makeSureInitIndexing;
- (_Bool)isValidAccount;
- (void)dealloc;
- (id)initWithFTSDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
