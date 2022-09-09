//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IGameCenterExt-Protocol.h"
#import "IGameCenterMsgNotifyExt-Protocol.h"

@class GameCenterNotifyContent, GetGameIndexForeignResponse, NSMutableArray, NSMutableSet, NSString;

@interface GameCenterForeignLogicController : MMObject <IGameCenterMsgNotifyExt, IGameCenterExt>
{
    GetGameIndexForeignResponse *_foreignHomeData;
    NSMutableArray *_sectionList;
    NSMutableArray *_rowListOfSectionMe;
    _Bool _fromFindFriendEntry;
    GameCenterNotifyContent *_gameCenterBubble;
    NSMutableSet *_msgCenterRedDotSet;
    GameCenterNotifyContent *_giftRedDot;
    CDUnknownBlockType _onRedDotChangedBlock;
    CDUnknownBlockType _requestForeignHomePageDataCompleteBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType requestForeignHomePageDataCompleteBlock; // @synthesize requestForeignHomePageDataCompleteBlock=_requestForeignHomePageDataCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType onRedDotChangedBlock; // @synthesize onRedDotChangedBlock=_onRedDotChangedBlock;
@property(retain, nonatomic) GameCenterNotifyContent *giftRedDot; // @synthesize giftRedDot=_giftRedDot;
@property(retain, nonatomic) NSMutableSet *msgCenterRedDotSet; // @synthesize msgCenterRedDotSet=_msgCenterRedDotSet;
@property(retain, nonatomic) GameCenterNotifyContent *gameCenterBubble; // @synthesize gameCenterBubble=_gameCenterBubble;
@property(nonatomic) _Bool fromFindFriendEntry; // @synthesize fromFindFriendEntry=_fromFindFriendEntry;
- (id)getNavRedDot;
- (id)gameIndexNav;
- (double)heightForHeaderOfSectionType:(unsigned long long)arg1;
- (id)titleOfSectionType:(unsigned long long)arg1;
- (id)getMsgCenterViewController;
- (void)onGameCenterDeleteOneMsg:(unsigned int)arg1;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterClearAllRedDot;
- (id)installedMore;
- (id)installedTitle;
- (id)installedGames;
- (id)libraryEntranceTitle;
- (_Bool)shouldShowBubble;
- (id)myProfileBadgeUrl;
- (id)myProfileJumpUrl;
- (id)gameSettingJumpUrl;
- (_Bool)hasMyProfile;
- (id)msgCenterJumpUrl;
- (id)giftURL;
- (id)libraryURL;
- (id)promotedGameAtIndexV2:(long long)arg1;
- (id)promotedGameAtIndex:(long long)arg1;
- (id)promotedGames;
- (_Bool)fetchForeignHomeData:(_Bool)arg1;
- (unsigned long long)typeOfRow:(id)arg1;
- (unsigned long long)typeOfSection:(long long)arg1;
- (void)reloadRows;
- (void)reloadSections;
- (void)onFetchGameCenterForeignHomeDataV4:(id)arg1 error:(long long)arg2 FromHomeCgi:(_Bool)arg3;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)requestForeignHomePageData:(_Bool)arg1 CompleteBlock:(CDUnknownBlockType)arg2 fromLocalCache:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

