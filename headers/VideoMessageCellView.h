//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "IVideoExt-Protocol.h"
#import "MMDragDelegate-Protocol.h"

@class CAGradientLayer, MMDragManager, NSString, SightIconView, UIDragInteraction, UIImageView, UILabel, UIView, VideoMessageViewModel, YYAsyncImageView;

@interface VideoMessageCellView : CommonMessageCellView <IVideoExt, MMDragDelegate>
{
    YYAsyncImageView *m_thumbImageView;
    SightIconView *m_sightIconView;
    UIView *m_videoInfoBgView;
    CAGradientLayer *m_videoInfoMaskLayer;
    UILabel *m_videoTimeLabel;
    UILabel *m_videoSizeLabel;
    int m_uiStatus;
    MMDragManager *dragManager;
    UIImageView *tmp_liftingImgView;
    UIDragInteraction *dragInteraction;
}

- (void).cxx_destruct;
- (void)onClickAsRefer;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)onTryToResendVideoWithAssetExist:(_Bool)arg1;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onSendFailButtonClicked:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)onClick:(_Bool)arg1 soundable:(_Bool)arg2;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StartUploadVideo:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onAppear;
- (void)liftingImageNeedRemove;
- (id)liftingItemWithImage:(id)arg1 parameters:(id)arg2;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)onSliencePlay:(id)arg1;
- (void)onForward:(id)arg1;
- (id)operationMenuItems;
- (void)initVideoInfoView;
- (void)initSightIconView;
- (void)initThumbImageView;
- (void)showVideo;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForImageBrowser;
- (void)updateStatus;
- (void)layoutContentView;
- (_Bool)canBeReused;
- (void)dealloc;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

