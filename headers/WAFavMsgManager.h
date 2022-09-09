//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IExptServiceExt-Protocol.h"
#import "IMMNewSessionMgrExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WAFavMsgGetConfigCgiDelegate-Protocol.h"
#import "WAFavMsgSetConfigCgiDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface WAFavMsgManager : MMUserService <WAFavMsgSetConfigCgiDelegate, WAFavMsgGetConfigCgiDelegate, IMMNewSessionMgrExt, INewSyncExt, IExptServiceExt, MMServiceProtocol>
{
    NSMutableDictionary *_appIdWrapDic;
    NSMutableArray *_wrapList;
    NSMutableArray *_arrCgi;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *arrCgi; // @synthesize arrCgi=_arrCgi;
@property(retain, nonatomic) NSMutableArray *wrapList; // @synthesize wrapList=_wrapList;
@property(retain, nonatomic) NSMutableDictionary *appIdWrapDic; // @synthesize appIdWrapDic=_appIdWrapDic;
- (id)getMsgRejectStatusFromLocal;
- (void)saveMsgRejectStatusToLocal;
- (id)genWrapListWithConfigItemList:(id)arg1;
- (id)genWrapWithConfigItem:(id)arg1;
- (id)genConfigItemListWithWrapList:(id)arg1;
- (id)genConfigItemWithWrap:(id)arg1;
- (void)addGuidingMessageNode;
- (void)onExptItemListChange;
- (void)onNewSyncAddMessage:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)getConfigCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getConfigCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)setConfigCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)setConfigCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)fetchFavMsgConfig;
- (void)batchSetFavMsgConfig:(id)arg1 withScene:(int)arg2;
- (void)setFavMsgConfig:(id)arg1 withScene:(int)arg2;
- (void)deleteFavWeAppMsgSession;
- (_Bool)isFavWeAppMsgEnable;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

