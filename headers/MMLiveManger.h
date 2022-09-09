//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMAVCameraCapturerDelegate-Protocol.h"
#import "MMVideoRenderViewDelegate-Protocol.h"

@class MMAVCameraCapture, MMRenderVideoFrame, MMVideoRenderView, MMWeEffectManager, NSString, TRTCCloud, WXLivePusher;

@interface MMLiveManger : NSObject <MMAVCameraCapturerDelegate, MMVideoRenderViewDelegate>
{
    long long _mode;
    long long _resolution;
    struct CGSize _videoSize;
    int _videoFPS;
    _Bool _enableFaceDetect;
    _Bool _isPaused;
    _Bool _remoteFrontMirror;
    _Bool _remoteBackMirror;
    _Bool _isSetRemoteFrontMirror;
    _Bool _isSetRemoteBackMirror;
    _Bool _enableZoom;
    _Bool _enableTouchFocus;
    MMRenderVideoFrame *_mRenderVideoFrame;
    MMWeEffectManager *_weEffectManager;
    MMAVCameraCapture *_cameraCapturer;
    MMVideoRenderView *_renderView;
    WXLivePusher *_txLivePusher;
    TRTCCloud *_trtcCloud;
}

+ (void)destroySharedIntance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, setter=hide_setTrtc:) TRTCCloud *trtcCloud; // @synthesize trtcCloud=_trtcCloud;
@property(retain, setter=hide_setLivePusher:) WXLivePusher *txLivePusher; // @synthesize txLivePusher=_txLivePusher;
@property(retain, setter=hide_setRenderView:) MMVideoRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain) MMAVCameraCapture *cameraCapturer; // @synthesize cameraCapturer=_cameraCapturer;
@property(retain, nonatomic) MMWeEffectManager *weEffectManager; // @synthesize weEffectManager=_weEffectManager;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool enableTouchFocus; // @synthesize enableTouchFocus=_enableTouchFocus;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(retain, nonatomic) MMRenderVideoFrame *mRenderVideoFrame; // @synthesize mRenderVideoFrame=_mRenderVideoFrame;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (struct CGSize)getVideoSize:(struct CGSize)arg1 homeOrientation:(long long)arg2;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)onRenderViewFocusAtPoint:(struct CGPoint)arg1;
- (void)onRenderViewPinchScale:(double)arg1;
- (void)addUser:(id)arg1 videoView:(id)arg2;
- (void)setRemoteMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setMirror:(_Bool)arg1 isFront:(_Bool)arg2;
- (void)setRotation:(int)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)setVideoResolution:(long long)arg1;
- (void)setVideoResolution:(int)arg1 sampleBufferSize:(struct CGSize)arg2 homeOrientation:(int)arg3;
- (void)setFaceDetect:(_Bool)arg1;
- (void)setFront:(_Bool)arg1;
- (void)setFrameRate:(int)arg1;
- (void)switchCamera;
- (void)stopCameraCapture;
- (void)startCameraCapture;
- (void)onCameraCapture:(struct opaqueCMSampleBuffer *)arg1 mirror:(_Bool)arg2 rotation:(long long)arg3 isFront:(_Bool)arg4;
- (void)setTrtc:(id)arg1;
- (void)setLivePusher:(id)arg1;
- (void)setRenderView:(id)arg1;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
