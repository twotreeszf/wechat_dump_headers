//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicLiveBaseMsg, MMMusicShareItem, NSString;

@protocol MMMusicLiveViewControllerDelegate <NSObject>
- (_Bool)onShouldMenuShowComplain;
- (MMMusicShareItem *)onLiveVCGetMusicShareItem;
- (void)onShareActionSuccess;
- (void)onAuthorInfoViewClickFinderHitLabel;
- (void)onAuthorInfoViewClickSwitch;
- (void)onAuthorInfoViewClickMVNickName;
- (void)onAuthorInfoViewClickMVAvatar;
- (void)onClickRetryPostMV;
- (void)onClickDeleteMV;
- (void)onClickOpenRecommendedMVList;
- (void)onToggleLikeMVStatus;
- (void)onClickComment;
- (void)onClickCreateMV;
- (void)onOpen3rdMusicApp;
- (void)onLiveVCTransitToMVWithMsg:(MMMusicLiveBaseMsg *)arg1;
- (void)onLiveVCSendCommentWithContent:(NSString *)arg1;
- (void)onLiveVCMusicResume:(double)arg1;
- (void)onLiveVCMusicPause:(double)arg1;
- (void)onLiveVCMusicSliderDidClick:(double)arg1;
- (void)onLiveVCMusicSliderDidSeek:(double)arg1;
- (void)onLiveVCMusicSliderProgressChanged:(double)arg1 isSliding:(_Bool)arg2;
@end

