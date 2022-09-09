//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMLiveOperationView, NSError, NSMutableDictionary;

@protocol MMLiveLogicDelegate <NSObject>
- (void)onGetAnchorStatus;
- (void)onGetLiveInfo;
- (void)onLiveClosed:(NSError *)arg1 withExtraInfo:(NSMutableDictionary *)arg2;
- (void)onLiveClosed:(NSError *)arg1;
- (void)onShareLive:(NSError *)arg1;
- (void)onJoinLive:(NSError *)arg1;
- (void)onCreateLive:(NSError *)arg1;
- (MMLiveOperationView *)getLiveOperationView;
@end

