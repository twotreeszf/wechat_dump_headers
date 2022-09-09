//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMScrollActionSheetDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"

@class ForwardMessageLogicController, NSMutableDictionary, NSString, UIViewController;
@protocol WCFinderMegaVideoViewModelDelegate;

@interface WCFinderMegaVideoViewModel : NSObject <ForwardMessageLogicDelegate, MMScrollActionSheetDelegate, WCCommitViewResultDelegate>
{
    UIViewController<WCFinderMegaVideoViewModelDelegate> *_context;
    ForwardMessageLogicController *_shareLogic;
    NSMutableDictionary *_bulletCache;
    NSMutableDictionary *_playerCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playerCache; // @synthesize playerCache=_playerCache;
@property(retain, nonatomic) NSMutableDictionary *bulletCache; // @synthesize bulletCache=_bulletCache;
@property(retain, nonatomic) ForwardMessageLogicController *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(nonatomic) __weak UIViewController<WCFinderMegaVideoViewModelDelegate> *context; // @synthesize context=_context;
- (void)removeAllStashedPlayer;
- (id)unstashPlayerForUrl:(id)arg1;
- (void)stashPlayer:(id)arg1 forUrl:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToMoment:(id)arg1 type:(unsigned long long)arg2;
- (void)shareToFriend:(id)arg1 type:(unsigned long long)arg2;
- (void)shareVideo:(id)arg1;
- (void)showShareFailForPrivate:(id)arg1;
- (id)actionSheetItemFor:(id)arg1;
- (void)onMore:(id)arg1;
- (void)reportVideo:(id)arg1;
- (void)reportBullet:(id)arg1 inVideo:(id)arg2;
- (void)routeToAuthorByVideo:(id)arg1;
- (id)interactCountString:(unsigned long long)arg1;
- (unsigned long long)commentScene;
- (void)showToast:(id)arg1;
- (_Bool)isAuthorView;
- (id)deleteComment:(id)arg1 forVideo:(id)arg2;
- (id)deleteVideoById:(id)arg1 nonceId:(id)arg2 videoId:(id)arg3;
- (id)megaVideoForId:(unsigned long long)arg1;
- (id)postBullet:(id)arg1 forVideo:(id)arg2;
- (id)getCachedBullets:(id)arg1;
- (id)getNextPageBullets:(id)arg1 position:(double)arg2;
- (id)bulletOpenToggle:(id)arg1;
- (id)favToggle:(id)arg1;
- (id)likeToggle:(id)arg1 isPrivateLike:(_Bool)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

