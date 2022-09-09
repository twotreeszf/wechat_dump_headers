//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IBrandAttrMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "IUpdateProfileMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CContactDB, CContactOPLog, CContactUpdateMgr, NSMutableDictionary, NSRecursiveLock, NSString, NewContactDB, OpenImContactMgr;

@interface CContactMgr : MMUserService <IUpdateProfileMgrExt, INewSyncExt, MMServiceProtocol, PBMessageObserverDelegate, IMMLanguageMgrExt, IBrandAttrMgrExt, IMsgExt>
{
    NSRecursiveLock *m_oLock;
    unsigned int m_uiLoadedType;
    CContactDB *m_oContactDB;
    NewContactDB *m_oNewContactDB;
    CContactOPLog *m_oContactOPLog;
    OpenImContactMgr *m_openImContactMgr;
    CContactUpdateMgr *m_contactUpdateMgr;
    NSMutableDictionary *m_dicRemark;
    NSMutableDictionary *m_dicLastAccessTime;
    NSMutableDictionary *m_dicContacts;
    NSMutableDictionary *m_dicEncodeContacts;
    NSMutableDictionary *m_mapLastGetTime;
    NSMutableDictionary *m_dicHardCodeUsers;
    unsigned int m_uiDBVersion;
    _Bool m_bFirstContactDBMigration;
    _Bool m_bContactDBMigrationFinished;
    NSMutableDictionary *m_dicContactSendMsgTickets;
    NSMutableDictionary *m_dicLastSendMsgTicketAccessTime;
    unsigned int m_uiMaxStrangerCache;
    _Bool m_bOpenStrangerCache;
}

+ (void)reportGroupCreateResultWithSessionId:(id)arg1 andChatRoomUserName:(id)arg2 andActionCode:(unsigned int)arg3;
+ (void)reportGroupCreateResultWithSessionId:(id)arg1 andChatRoomUserName:(id)arg2 andActionCode:(unsigned int)arg3 andChatRoomCreateResult:(int)arg4;
- (void).cxx_destruct;
- (id)contactUpdateMgr;
- (id)openIMMgr;
- (id)getAddsceneChatRoomContactSource:(id)arg1 fromMe:(_Bool)arg2;
- (id)getContactByAlias:(id)arg1;
- (id)getAllContactUserNameFromCache;
- (id)getAllContactUserName;
- (id)getContactForSearchByName:(id)arg1;
- (void)callModifyContactForCPState:(id)arg1;
- (_Bool)isHeadImgUpdated:(id)arg1 Local:(id)arg2;
- (void)onBrandContactModified:(id)arg1 withAttrChanged:(id)arg2;
- (_Bool)ChangeNotifyStatus:(id)arg1 withStatus:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)ChangeNotifyStatusForChatRoom:(id)arg1 withStatus:(_Bool)arg2 sync:(_Bool)arg3;
- (id)thread_onBatchModifyChatRoomMember:(id)arg1;
- (id)thread_onpushBatchModContact:(id)arg1;
- (void)main_onPushAddContact:(id)arg1;
- (void)main_onPushDeleteContact:(id)arg1;
- (void)setSelfContactUpdated;
- (id)getSelfContact;
- (_Bool)updateContactToCache:(id)arg1;
- (_Bool)shouldUpdateContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetContact:(id)arg1;
- (id)HandleMemContact:(id)arg1;
- (void)MainThread_ReloadMemContact:(id)arg1;
- (void)thread_ReloadMemConact:(id)arg1 ChatRoom:(id)arg2;
- (id)thread_HandleMemContact:(id)arg1;
- (id)thread_sync_HandleMemContact:(id)arg1;
- (void)onNewSyncBatchModContacts:(id)arg1;
- (void)onProfilePreChange;
- (void)onNewSyncDeleteContact:(id)arg1;
- (void)main_onPushBatchModContact:(id)arg1;
- (void)onLanguageChange;
- (void)updateSelfContactLocalPatSuffix;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (id)getFinderBlackList;
- (id)getSocialBlackList;
- (void)updateContactLocalData;
- (void)fixContactPluginOldData;
- (id)getGroupCardMemberList:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1 chatContact:(id)arg2 withScene:(int)arg3 withTicket:(id)arg4 usrData:(id)arg5;
- (_Bool)getInviteeContactsFromServer:(id)arg1 withTicket:(id)arg2;
- (_Bool)getContactsFromServer:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1 chatContact:(id)arg2;
- (_Bool)getContactsFromSvrForTempChat:(id)arg1;
- (_Bool)internalGetContactsFromSvr:(id)arg1 chatContact:(id)arg2 usrData:(id)arg3;
- (void)addToGetContactMap:(id)arg1;
- (_Bool)checkIfForbiddenGetContact:(id)arg1;
- (void)tryLoadExtInfoForContact:(id)arg1;
- (void)reloadContact:(id)arg1;
- (_Bool)delayLoadAllContactInBackGround;
- (void)reportIDKey:(id)arg1 stranger:(id)arg2;
- (void)thread_saveContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3 Url:(id)arg4;
- (void)reloadContactImageStatus:(id)arg1 Status:(id)arg2 Image:(id)arg3;
- (_Bool)setLocalContactToUntopSession:(id)arg1;
- (_Bool)setContact:(id)arg1 sessionTop:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 notifyOpen:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 hideHashPhone:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 watchContact:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 favour:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setLocalContact:(id)arg1 notifyOpen:(_Bool)arg2;
- (_Bool)setContact:(id)arg1 typeBit:(unsigned int)arg2 set:(_Bool)arg3 sync:(_Bool)arg4;
- (_Bool)setContact:(id)arg1 typeBit:(unsigned int)arg2 set:(_Bool)arg3 sync:(_Bool)arg4 localSet:(_Bool)arg5;
- (void)modifyContactNickName:(id)arg1 nickName:(id)arg2 callMod:(_Bool)arg3;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2 andScene:(unsigned int)arg3 sync:(_Bool)arg4 local:(_Bool)arg5;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2 andScene:(unsigned int)arg3 sync:(_Bool)arg4;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2 sync:(_Bool)arg3;
- (_Bool)deleteContact:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)deleteContactLocal:(id)arg1 listType:(unsigned int)arg2;
- (id)getAllBrandContacts;
- (id)getAllEnterpriseMainBrandContacts;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2 needLoadExt:(_Bool)arg3;
- (id)getContactList:(unsigned int)arg1 contactType:(unsigned int)arg2;
- (_Bool)isBelongToMMContactInCache:(id)arg1;
- (_Bool)isInContactList:(id)arg1;
- (_Bool)isContactExistLocal:(id)arg1;
- (_Bool)isContactBlack:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (id)getContactByNameFromCache:(id)arg1;
- (id)getContactByEncodeNameFromCache:(id)arg1;
- (id)getContactByNameFromDB:(id)arg1;
- (id)getContactByName:(id)arg1;
- (void)updateCache:(id)arg1;
- (void)initDB:(id)arg1;
- (void)updateNewDB:(id)arg1 NewUser:(_Bool)arg2;
- (_Bool)isUserNewDB;
- (void)onPushDeleteContact:(id)arg1;
- (void)onPushModifyContact:(id)arg1;
- (void)main_onPushModifyContact:(id)arg1;
- (void)handleLocalField:(id)arg1 oldContact:(id)arg2;
- (id)reloadContact:(id)arg1 mergeImage:(id)arg2;
- (void)callOnRemoveContactFromAddressBook:(id)arg1;
- (void)callOnModifyContactHeadImageExt:(id)arg1;
- (void)callOnDeleteExt:(id)arg1;
- (void)callOnModifyExt:(id)arg1;
- (void)internalModifyContact:(id)arg1 CallExt:(_Bool)arg2;
- (void)mergeChatRoomData:(id)arg1 oldContact:(id)arg2;
- (void)handleWeChatTeamNickName:(id)arg1;
- (void)handleOfficalContactName:(id)arg1;
- (_Bool)isContactMatch:(id)arg1 listType:(unsigned int)arg2 contactType:(unsigned int)arg3;
- (int)interalReloadContacts:(unsigned int)arg1 needLoadExt:(_Bool)arg2;
- (_Bool)isHardCodeContact:(id)arg1;
- (void)addHardCodeContacts;
- (void)addAddHardcodeContact:(id)arg1 selector:(SEL)arg2;
- (id)generateOfficialContact:(id)arg1;
- (id)generatePluginContactNoListContact:(id)arg1;
- (id)generatePluginContact:(id)arg1;
- (id)generatePluginContact:(id)arg1 uiType:(unsigned int)arg2;
- (void)internalUpdateContactLocalDataWithUserName:(id)arg1;
- (void)refreshContactLocalData;
- (void)refreshPluginNickName:(_Bool)arg1;
- (void)addDictoryDataToCache:(id)arg1 listType:(unsigned int)arg2;
- (int)autoreloadContacts:(unsigned int)arg1 needLoadExt:(_Bool)arg2;
- (int)autoreloadContacts:(unsigned int)arg1;
- (id)addSelfContactToCache;
- (_Bool)isCacheAllLoaded;
- (void)dealloc;
- (void)removeListen;
- (void)initListen;
- (id)init;
- (void)updateContactSendMsgTicket:(id)arg1;
- (void)updateContactSendMsgTicketCache;
- (id)getContactSendMsgTicketFromDic:(id)arg1;
- (id)getSendMsgTicketWithUserName:(id)arg1;
- (unsigned int)getSendMsgActionFlag;
- (void)asynUdpateContactSendMsgTicketList:(id)arg1;
- (void)udpateSendMsgActionFlag:(unsigned int)arg1;
- (void)DisabledShareCardMessageMsg:(id)arg1 shareCardMessageState:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)makeSendMsgFailedWithSystemMsgWrap:(id)arg1;
- (_Bool)SetFriendMetaFlag:(unsigned int)arg1 ForUser:(id)arg2;
- (_Bool)ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2;
- (_Bool)thread_onPushModifyContact:(id)arg1 isInit:(_Bool)arg2;
- (_Bool)thread_BatchModifyContact:(id)arg1;
- (_Bool)thread_BatchModifyContact:(id)arg1 isInit:(_Bool)arg2;
- (id)addOrUpdateContactToDB:(id)arg1 listType:(unsigned int)arg2 add:(_Bool *)arg3 modify:(_Bool *)arg4;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (_Bool)getAllContactNoExtInfoList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllContactList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)migrationContacts:(unsigned int)arg1 first:(_Bool)arg2;
- (void)reportMigrationStat:(unsigned int)arg1 status:(unsigned int)arg2;
- (_Bool)splist_migrationContactList:(id)arg1;
- (void)setMigrationFinished;
- (_Bool)loadContactExtInfo:(id)arg1;
- (_Bool)updateContactToDb:(id)arg1;
- (_Bool)addContactToDb:(id)arg1;
- (_Bool)removeContactFromDB:(id)arg1;
- (id)getContactFromDB:(id)arg1;
- (void)removeContactFromDic:(id)arg1;
- (void)setContactToDic:(id)arg1 forKey:(id)arg2;
- (id)getContactFromDic:(id)arg1;
- (_Bool)setLocalListTypeWithUserName:(id)arg1 listType:(unsigned int)arg2 addFlag:(_Bool)arg3;
- (_Bool)setContactUserName:(id)arg1 textStateId:(id)arg2 extInfo:(id)arg3;
- (id)getLocalSelfPatSuffixJson;
- (_Bool)setLocalPatSuffixWithUserName:(id)arg1 patSuffix:(id)arg2;
- (_Bool)setContactUserName:(id)arg1 chatRoomLocalSendUpgradeType:(unsigned int)arg2;
- (_Bool)setContact:(id)arg1 socialBlack:(_Bool)arg2;
- (_Bool)RemoveContactFromChatList:(id)arg1;
- (_Bool)addContact:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)addContact:(id)arg1 listType:(unsigned int)arg2 opLog:(_Bool)arg3 callExt:(_Bool)arg4;
- (_Bool)addLocalContact:(id)arg1 listType:(unsigned int)arg2;
- (void)addContactInternal:(id)arg1;
- (_Bool)addFromMobileContact:(id)arg1;
- (_Bool)setNoBlack:(id)arg1 sync:(_Bool)arg2;
- (_Bool)setBlack:(id)arg1 sync:(_Bool)arg2;
- (_Bool)setNoBlack:(id)arg1;
- (_Bool)setBlack:(id)arg1;
- (_Bool)setBlack:(id)arg1 blackFlag:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setBlackInLocal:(id)arg1 blackFlag:(_Bool)arg2;
- (_Bool)setContact:(id)arg1 chatRoomBusinessType:(unsigned long long)arg2;
- (_Bool)setContact:(id)arg1 chatRoomAccessType:(unsigned int)arg2;
- (_Bool)setContact:(id)arg1 RoomDetail:(id)arg2;
- (_Bool)setContact:(id)arg1 chatRoomData:(id)arg2;
- (_Bool)setContact:(id)arg1 owner:(id)arg2;
- (_Bool)setContact:(id)arg1 WeRunBlack:(_Bool)arg2;
- (_Bool)setContact:(id)arg1 snsBlack:(_Bool)arg2;
- (_Bool)setContact:(id)arg1 mobileIdentify:(id)arg2;
- (_Bool)clearDraftForContact:(id)arg1;
- (_Bool)setContact:(id)arg1 nickName:(id)arg2;
- (_Bool)setContact:(id)arg1 cardUrl:(id)arg2;
- (_Bool)setContact:(id)arg1 cardDesc:(id)arg2;
- (_Bool)setPhone:(id)arg1 Contact:(id)arg2;
- (unsigned int)startModifyContactUserName:(id)arg1 remark:(id)arg2 hideHashPhone:(_Bool)arg3;
- (_Bool)setContact:(id)arg1 remark:(id)arg2 hideHashPhone:(_Bool)arg3 isLocal:(_Bool)arg4;
- (_Bool)setContact:(id)arg1 antispamTicket:(id)arg2;
- (_Bool)setHDHeadUpdated:(id)arg1 Url:(id)arg2;
- (_Bool)setContact:(id)arg1 chatState:(unsigned int)arg2;
- (_Bool)setContact:(id)arg1 remark:(id)arg2;
- (void)internalNewContact:(id)arg1;
- (_Bool)modifyContactForInternel:(id)arg1 Des:(id)arg2 WithBlock:(CDUnknownBlockType)arg3;
- (_Bool)modifyContact:(id)arg1 Des:(id)arg2 WithBlock:(CDUnknownBlockType)arg3;
- (_Bool)modifyOrAddContact:(id)arg1 Des:(id)arg2 WithAddBlock:(CDUnknownBlockType)arg3 AddDoneBlock:(CDUnknownBlockType)arg4 WithModBlock:(CDUnknownBlockType)arg5 ModDoneBlock:(CDUnknownBlockType)arg6;
- (_Bool)modifyContact:(id)arg1 Des:(id)arg2 WithBlock:(CDUnknownBlockType)arg3 WithDoneBlock:(CDUnknownBlockType)arg4;
- (id)getChatRoomToolWeAppListInDBWithUserName:(id)arg1;
- (_Bool)deleteChatRoomToolWeAppInDBWithUserName:(id)arg1 insertNewWeAppItemList:(id)arg2;
- (void)reportContactImportantChangeData:(id)arg1 actionCode:(unsigned int)arg2 actionScene:(unsigned int)arg3 oldValue:(id)arg4 newValue:(id)arg5;
- (void)reportContactImportantChangeData:(id)arg1 oldContact:(id)arg2 actionCode:(unsigned int)arg3 actionScene:(unsigned int)arg4;
- (void)reportContactImportantChangeData:(id)arg1 actionCode:(unsigned int)arg2 actionScene:(unsigned int)arg3;
- (void)reportContactImportantChangeData:(id)arg1 actionScene:(unsigned int)arg2;
- (void)reportGetContactFromServiceContactImportantChangeData:(id)arg1;
- (void)reportNewSyncCmdContactImportantChangeData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

