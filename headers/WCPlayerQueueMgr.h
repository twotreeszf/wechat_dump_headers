//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCPlayerEventExt-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WCPlayerView;

@interface WCPlayerQueueMgr : MMUserService <WCPlayerEventExt, MMServiceProtocol>
{
    _Bool _isMulinstance;
    int _maxPreloadCount;
    WCPlayerView *_playerView;
    NSMutableDictionary *_dicPlayerObj;
    NSMutableArray *_arrNewPreObjs;
    unsigned long long _totalCreateCount;
    unsigned long long _notHitCount;
    unsigned long long _hitCount;
    unsigned long long _hitAndReadyCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMulinstance; // @synthesize isMulinstance=_isMulinstance;
@property(nonatomic) int maxPreloadCount; // @synthesize maxPreloadCount=_maxPreloadCount;
@property(nonatomic) unsigned long long hitAndReadyCount; // @synthesize hitAndReadyCount=_hitAndReadyCount;
@property(nonatomic) unsigned long long hitCount; // @synthesize hitCount=_hitCount;
@property(nonatomic) unsigned long long notHitCount; // @synthesize notHitCount=_notHitCount;
@property(nonatomic) unsigned long long totalCreateCount; // @synthesize totalCreateCount=_totalCreateCount;
@property(retain, nonatomic) NSMutableArray *arrNewPreObjs; // @synthesize arrNewPreObjs=_arrNewPreObjs;
@property(retain, nonatomic) NSMutableDictionary *dicPlayerObj; // @synthesize dicPlayerObj=_dicPlayerObj;
@property(nonatomic) __weak WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)onPlayerStartPlay:(id)arg1;
- (void)createPlayers;
- (void)preloadWithArgs:(id)arg1;
- (void)removePlayerWithScene:(unsigned long long)arg1;
- (void)removePlayerInstance:(id)arg1;
- (id)getPlayerWithArgs:(id)arg1 frame:(struct CGRect)arg2 controlView:(id)arg3;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

