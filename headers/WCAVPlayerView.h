//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAVPlayerBaseView.h"

#import "WCPlayerResourceLoaderDelegate-Protocol.h"

@class NSString, WCPlayerResourceLoader;

@interface WCAVPlayerView : WCAVPlayerBaseView <WCPlayerResourceLoaderDelegate>
{
    WCPlayerResourceLoader *_resourceLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
- (void)onRecieveNewLoadingRequest;
- (void)onVideoMoovReady;
- (void)onChangeVideoSource;
- (void)onVideoDownloadFail:(int)arg1;
- (void)onRecieveAllVideoData;
- (void)onRecievePreLoadData;
- (void)onResponseDataToResourceLoader;
- (void)onRecieveSeekLoadingRequest;
- (_Bool)isStreamVideoPlaying;
- (void)fetchAllVideoData;
- (void)onSliderScrubbingDidEndAtTime:(double)arg1;
- (void)onStatusChange:(id)arg1;
- (void)checkStreamPlayerState;
- (void)requestNextBufferSec;
- (void)resetPlayerToLocalPlay;
- (void)resetPlayerToSystemPlay;
- (void)startBuffering;
- (void)stopVideoDowload;
- (void)startWithPlayerMode:(unsigned long long)arg1;
- (void)changeToDownloadFirstMode;
- (void)createAsset;
- (void)destoryResourceLoader;
- (id)createResourceLoader;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

