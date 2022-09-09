//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "BrandTimelineMsgMgrExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "IMMNewSessionMgrFilterExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "ISessionInfoExt-Protocol.h"
#import "ISessionStorageDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMSessionRefreshExt-Protocol.h"
#import "WXGImportMessageNotification-Protocol.h"

@class BrandSessionCache, MMBaseSessionStorage, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface BrandNewSessionMgr : MMUserService <ISessionStorageDelegate, WXGImportMessageNotification, ISessionInfoExt, MMSessionRefreshExt, BrandTimelineMsgMgrExt, MMServiceProtocol, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt>
{
    BrandSessionCache *m_mainSessionCache;
    _Bool m_isUpgradeFromOldVersion;
    MMBaseSessionStorage *m_sessionStorage;
    NSMutableDictionary *m_dictCellData;
    NSData *m_oldSessionCacheData;
    NSMutableArray *m_dicMsgListArray;
    NSMutableArray *m_setUsrNameArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandSessionCache *m_mainSessionCache; // @synthesize m_mainSessionCache;
- (void)onMigrateBrandMsgFinish:(unsigned long long)arg1;
- (void)onTimelineAbtestChange:(_Bool)arg1;
- (unsigned int)genSendMsgTime;
- (void)addSession:(id)arg1;
- (void)untopSessionOfUser:(id)arg1;
- (void)topSessionOfUser:(id)arg1;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (id)pathForNewCache;
- (void)deleteOldVersionSessionCache;
- (void)cleanUpNoMsgSessions:(id)arg1;
- (id)importSessions;
- (id)getStarContactArr;
- (id)getLastUserNameOnSessionStorage;
- (id)getAllUserNamesOnSessionStorgae;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (unsigned int)sessionCount;
- (void)updateSessionCellData:(id)arg1;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (_Bool)isContactNeedProcess:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)onImportMessageSuccess;
- (void)rebuildSessionStorage;
- (void)onRebuildSessionStorage;
- (void)onSessionUpgrade;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (_Bool)isMessageShouldHandled:(id)arg1;
- (_Bool)isUserShouldHandled:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)p_onAddMsgListArray:(id)arg1 notifyUserNameArray:(id)arg2;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)onModifyDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long)arg3 draftTime:(unsigned int)arg4;
- (void)onGetDraft:(id)arg1 draft:(id)arg2 referMsgSvrId:(long long *)arg3;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (unsigned int)updateOrAddSessionForUser:(id)arg1 AllowAdd:(_Bool)arg2;
- (unsigned int)innerUpdateSessionForUser:(id)arg1;
- (void)updateSessionOfUser:(id)arg1;
- (void)innerNotifyDeletedAllSession;
- (void)deleteAllSessions;
- (void)deleteSessionOfSession:(id)arg1 withDeleteContact:(_Bool)arg2 withDeleteMsg:(_Bool)arg3;
- (void)deleteSessionOfUserName:(id)arg1 withDeleteContact:(_Bool)arg2 withDeleteMsg:(_Bool)arg3;
- (void)clearReadCountForBrand:(id)arg1;
- (_Bool)isServiceValid;
- (void)unregisterExt;
- (void)dealloc;
- (void)internalInit;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

