//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TPVideoFrameBuffer, WCPlayerPlaybackInfo;

@protocol MMMusicEditVideoPlayerDelegate <NSObject>

@optional
- (void)onPlayerVideoFrameOut:(unsigned int)arg1 videoFrameBuffer:(TPVideoFrameBuffer *)arg2;
- (void)onPlayerVideoFrameOut:(TPVideoFrameBuffer *)arg1;
- (void)onVideoBufferingPercent:(double)arg1 viewId:(unsigned int)arg2;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 LocalizedErrorDes:(NSString *)arg2 viewId:(unsigned int)arg3;
- (void)onVideoDidPlayToEndTime:(unsigned int)arg1;
- (void)onPlayerSeekCompelete:(unsigned int)arg1;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2;
- (void)onPlayerStateChanged:(unsigned long long)arg1 viewId:(unsigned int)arg2;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoCurrTimeChanged:(double)arg1 totalDuration:(double)arg2 viewId:(unsigned int)arg3;
- (void)onVideoBeginPlay:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1 playBackInfo:(WCPlayerPlaybackInfo *)arg2;
@end

