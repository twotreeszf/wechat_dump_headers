//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "CNetworkStatusExt-Protocol.h"
#import "EmoticonRecover-Protocol.h"
#import "EmoticonRecoverLogicObjectDelegate-Protocol.h"
#import "EmoticonServerNotifyTaskDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class EmoticonRecoverLogicObject, NSMutableArray, NSString;

@interface EmoticonCameraRecoverMgr : MMUserService <EmoticonRecoverLogicObjectDelegate, IMsgExt, CNetworkStatusExt, MMKernelExt, EmoticonServerNotifyTaskDelegate, MMServiceProtocol, EmoticonRecover>
{
    _Bool _m_hasOnceStartRecover;
    _Bool _m_hasNotStartRecoverTaskInList;
    unsigned int _m_manageViewRecentUpdateTime;
    unsigned int _m_userActionStatus;
    EmoticonRecoverLogicObject *_m_recoverLogicObject;
    NSMutableArray *_m_notifyTaskList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_userActionStatus; // @synthesize m_userActionStatus=_m_userActionStatus;
@property(nonatomic) unsigned int m_manageViewRecentUpdateTime; // @synthesize m_manageViewRecentUpdateTime=_m_manageViewRecentUpdateTime;
@property(nonatomic) _Bool m_hasNotStartRecoverTaskInList; // @synthesize m_hasNotStartRecoverTaskInList=_m_hasNotStartRecoverTaskInList;
@property(nonatomic) _Bool m_hasOnceStartRecover; // @synthesize m_hasOnceStartRecover=_m_hasOnceStartRecover;
@property(retain, nonatomic) NSMutableArray *m_notifyTaskList; // @synthesize m_notifyTaskList=_m_notifyTaskList;
@property(retain, nonatomic) EmoticonRecoverLogicObject *m_recoverLogicObject; // @synthesize m_recoverLogicObject=_m_recoverLogicObject;
- (void)runNotifyTask;
- (void)onEmoticonRecoverLogicAutoPauseOnWWan;
- (void)onEmoticonRecoverLogicDownloadOneEmoticonOK;
- (void)onEmoticonRecoverLogicFailed;
- (void)onEmoticonRecoverLogicOk;
- (_Bool)needNotifyEmoticonListChangeImmediately;
- (_Bool)isUserAllowOnRecover;
- (_Bool)isUserPauseOnRecover;
- (_Bool)isUserNoActionOnRecover;
- (void)onLogicDidResumed:(id)arg1;
- (_Bool)serverNotifyTaskCanResumeLogic:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onAuthOK;
- (void)onManulLogOut;
- (void)onManulLoginOK;
- (void)internalGoonRecover;
- (void)checkRecoverEmoticonFromServer;
- (void)goonRecover;
- (void)pauseRecover;
- (_Bool)isRecoveringEmoticonComplete;
- (_Bool)isRecoveringEmoticonPause;
- (_Bool)isRecoveringEmoticon;
- (_Bool)recoverCameraEmoticonFromManageView;
- (_Bool)recoverEmoticonFromServer;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

