//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FullScreenGestureDelegate.h"
#import "SightViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "WCFacadeExt.h"

@class NSString, SightView, UIActivityIndicatorView, WCMediaItem, WXFullScreenGestureRecognizer;

@interface WCAlbumSightFullPlayView : UIView <UIActionSheetDelegate, WCFacadeExt, SightViewDelegate, FullScreenGestureDelegate>
{
    _Bool m_bIsLongPressHandled;
    _Bool m_isSightVisible;
    UIView *m_fullScreenContent;
    SightView *_sightView;
    _Bool m_bHasStartedDownLoadingVideo;
    _Bool m_bCachedRealDownloadProgress;
    unsigned long long m_videoRestPlayTime;
    WXFullScreenGestureRecognizer *m_gesture;
    _Bool _stopped;
    _Bool m_isImageReady;
    unsigned long long index;
    UIActivityIndicatorView *mActivityIndicator;
    WCMediaItem *m_mediaData;
    id <WCAlbumSightFullPlayViewDelegate> m_delegate;
}

@property(nonatomic) _Bool m_isSightVisible; // @synthesize m_isSightVisible;
@property(readonly, nonatomic) _Bool m_isImageReady; // @synthesize m_isImageReady;
@property(nonatomic) __weak id <WCAlbumSightFullPlayViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
@property(readonly, nonatomic) UIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) unsigned long long index; // @synthesize index;
- (void).cxx_destruct;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (void)makeFakeProgress;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(int)arg2;
- (unsigned long long)getVideoTotalTime;
- (id)getShowTime:(unsigned long long)arg1;
- (void)rotateToOrientation:(_Bool)arg1;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onClickSightView:(id)arg1;
- (void)onLongPressSightView:(id)arg1;
- (void)stopDownload;
- (void)clearPlayer;
- (void)resumePlay;
- (void)stopPlay;
- (void)playSight;
- (void)cacheFakeProgressValue;
- (struct CGRect)playerRectWithScreenOrientation:(_Bool)arg1;
- (void)reloadSightPreviewImage;
- (id)getImage;
- (void)reloadSight;
- (_Bool)isSightVideoExist;
- (id)getProcessCacheKey;
- (int)getSightDownloadType;
- (id)getSightPath;
- (void)downloadSight;
- (void)downloadImage;
- (void)onOrientationChanged;
- (void)onVideoStreamDownloadFail:(_Bool)arg1;
- (void)onStartToPlayVideo;
- (_Bool)sightView:(id)arg1 playbackDidReadEnd:(_Bool)arg2;
- (void)downloadVideoAndPlay;
- (void)dealloc;
- (void)createAndSetupPlayer;
- (void)willMoveToSuperview:(id)arg1;
- (void)setDataAndView:(id)arg1;
- (void)displaySightWithMediaItem:(id)arg1;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithMediaData:(id)arg1;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)UnRegister;
- (void)register;
- (void)setContentViewTop:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

