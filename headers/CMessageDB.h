//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMDB;

@interface CMessageDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
- (_Bool)InsertOrUpdateRoomHistoryMsg:(id)arg1 historyId:(unsigned long long)arg2 svrId:(long long)arg3;
- (void)ClearHadMigrateDOpenImChatRoomMsgResouceWithOpenIMChatRoomUserName:(id)arg1;
- (void)RenameMigrateOpenImChatRoomMsg:(id)arg1 andTargetPath:(id)arg2;
- (void)MigrateOpenImChatRoomMsgResouceWithOpenIMChatRoomUserName:(id)arg1 andSourceMsgWrap:(id)arg2 andAssociateChatRoomUserName:(id)arg3 andTargetMsgWrap:(id)arg4;
- (void)AddMigrateOpenImChatRoomMsgToAssociateChatRoomUserName:(id)arg1 MsgWrap:(id)arg2;
- (void)MigrateOpenImChatRoomMsgWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (long long)numberOfRedPacketsIn:(id)arg1 newerThan:(id)arg2 destination:(id)arg3 fromSender:(id)arg4;
- (long long)numberOfMessagesIn:(id)arg1 newerThan:(id)arg2 type:(long long)arg3 destination:(id)arg4 fromSender:(id)arg5;
- (long long)numberOfMessagesIn:(id)arg1 newerThan:(id)arg2 destination:(id)arg3 fromSender:(id)arg4;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMaxCreateTimeInMessage:(id)arg1;
- (_Bool)hasMsg:(id)arg1 fromCreateTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (id)getImageMsg:(id)arg1 beforeCreateTime:(unsigned int)arg2 limit:(int)arg3;
- (id)getImageMsg:(id)arg1 limit:(int)arg2;
- (void)setMessageUnreadCondition:(struct Expression *)arg1;
- (void)setMessageUnreadConditionIncludingNewXML:(struct Expression *)arg1;
- (void)fillDBMsg:(id)arg1 andProperty:(SyntaxList_7f15fe8c *)arg2 fromMsgWrap:(id)arg3 des:(unsigned int)arg4;
- (void)HandleMessage:(id)arg1 ChatName:(id)arg2 Des:(unsigned int)arg3;
- (id)GetLocalUsrName:(id)arg1;
- (unsigned int)GetUnReadCountInHello:(id)arg1;
- (unsigned int)GetCountInHello:(id)arg1;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)ModHelloLocationMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (_Bool)ClearHelloUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)DelHelloMsg:(id)arg1 HelloUser:(id)arg2;
- (id)GetHelloMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(_Bool)arg4;
- (id)GetDBHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(_Bool)arg3;
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(_Bool)arg3;
- (id)GetHelloMsgForSyncRead:(id)arg1 Where:(const struct Expression *)arg2;
- (id)GetHelloMsg:(id)arg1 Where:(const struct Expression *)arg2 Order:(const SyntaxList_64caf671 *)arg3 Limit:(int)arg4;
- (void)AddHelloMsg:(id)arg1 MsgWrap:(id)arg2 HelloUser:(id)arg3 OpCode:(unsigned int)arg4 DES:(unsigned int)arg5 checkCreateTime:(_Bool)arg6 status:(unsigned int)arg7;
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)arg1;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(_Bool)arg5;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(_Bool)arg5;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 CreateTime:(unsigned int)arg4;
- (id)GetAppMsgList:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 Where:(struct Expression)arg5;
- (id)GetAppMsgList:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetAppMsgList:(id)arg1 AfterID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetLastVoipMsg:(id)arg1 AfterTime:(unsigned int)arg2;
- (void)UpdateVideoMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceStatus:(id)arg1 LocalID:(unsigned int)arg2 DownloadStatus:(unsigned int)arg3;
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2;
- (id)getValidNewMessageWrapArray:(id)arg1 onType:(unsigned int)arg2;
- (_Bool)addMessageToWCPayBizExtTable:(id)arg1;
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2 onType:(unsigned int)arg3;
- (id)GetAllChatNameWithValidNewBizMsg:(unsigned int)arg1;
- (void)DelOverTimeNewBizMessageOnType:(unsigned int)arg1;
- (unsigned int)GetValidNewBizMsgCountByChatName:(id)arg1 bizType:(unsigned int)arg2;
- (unsigned int)GetAllValidNewBizMsgCount:(unsigned int)arg1;
- (void)ModBizMsg:(id)arg1 bizId:(id)arg2 bizStatus:(unsigned int)arg3 bizType:(unsigned int)arg4;
- (_Bool)addMessageToNewWCPayBizExtTable:(id)arg1 type:(long long)arg2;
- (_Bool)AddBackupMessageToChatExt:(id)arg1 MsgWraps:(id)arg2;
- (_Bool)AddMessageToChatExt:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)GetAllMesCount:(id)arg1;
- (unsigned int)GetMyMesCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2;
- (unsigned int)GetUnReadCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2;
- (unsigned int)GetUnReadCount:(id)arg1;
- (unsigned int)GetTextMsgCount:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (_Bool)isMessageExist:(id)arg1 MsgSvrId:(long long)arg2;
- (void)DelAllMsgs:(id)arg1;
- (void)DelMsgForBatchDelete:(id)arg1 MsgList:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)TransferMsgFromChatToDuplicate:(id)arg1;
- (void)ClearUnReadForSync:(id)arg1 CreateTime:(unsigned int)arg2;
- (_Bool)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)DropChatTable:(id)arg1;
- (void)ModVoipMsgStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)ModLocationMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)GetMsgForUsr:(id)arg1 fromLocalIdList:(id)arg2;
- (_Bool)RemoveOldRevokeMessagesBefore:(unsigned int)arg1;
- (_Bool)InsertRevokeMessage:(id)arg1;
- (id)GetRevokeMessage:(long long)arg1;
- (_Bool)RemoveOldSecMessagesBefore:(unsigned int)arg1;
- (_Bool)InsertSecMessage:(id)arg1;
- (id)GetSecMessage:(long long)arg1;
- (unsigned int)GetMsgSeqMaxLocalId:(id)arg1;
- (id)GetFirstUnreadMsgIncludingNewXML:(id)arg1;
- (id)GetFirstUnreadMsg:(id)arg1;
- (id)GetLastMsgToUsr:(id)arg1;
- (id)GetLastMsgFromUsr:(id)arg1;
- (id)GetLastInsertMsg:(id)arg1;
- (id)GetLastMsg:(id)arg1;
- (id)GetTextMsg:(id)arg1 AscendinglyFromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetTextMsg:(id)arg1 DescendinglyToID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetLastNonSysMsg:(id)arg1;
- (id)GetMsg:(id)arg1 HistoryId:(unsigned long long)arg2;
- (id)GetMsg:(id)arg1 BizMsgClientID:(id)arg2;
- (id)GetMsg:(id)arg1 n64SvrIDArray:(id)arg2;
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2 hasError:(_Bool *)arg3;
- (id)QueryMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 Where:(const struct Expression *)arg5;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetMsgForSyncRead:(id)arg1 Where:(const struct Expression *)arg2;
- (id)GetMsg:(id)arg1 Where:(const struct Expression *)arg2 order:(const SyntaxList_64caf671 *)arg3 Limit:(int)arg4 hasError:(_Bool *)arg5;
- (_Bool)checkSqliteMasterExistFor:(id)arg1;
- (id)GetFTSMsgRealChatUsrInTransaction:(id)arg1 forIdList:(id)arg2;
- (id)GetMsgForSimple:(id)arg1 Where:(const struct Expression *)arg2 order:(const SyntaxList_64caf671 *)arg3 Limit:(int)arg4 hasError:(_Bool *)arg5;
- (id)GetMsg:(id)arg1 Where:(const struct Expression *)arg2 order:(const SyntaxList_64caf671 *)arg3 Limit:(int)arg4;
- (const SyntaxList_64caf671 *)orderOfAscCreateTimeAndMsgLocalId;
- (const SyntaxList_64caf671 *)orderOfDescCreateTimeAndMsgLocalId;
- (void)AddBackupMsg:(id)arg1 MsgWraps:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2 withTimeFixed:(_Bool)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)InitDB:(id)arg1;
- (id)init;

@end

