//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "MMMediaRecorderPlayerDelegate-Protocol.h"

@class AppGameRecordVideoMessageViewModel, MMUILabel, MMUIWindow, MMWebImageView, NSString, UIImageView;

@interface AppGameRecordVideoMessageCellView : CommonMessageCellView <MMMediaRecorderPlayerDelegate>
{
    MMWebImageView *_imageView;
    MMWebImageView *_maskView;
    UIImageView *_playIconImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    double _descHeight;
    double _currentY;
    MMUIWindow *_fullScreenWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIWindow *fullScreenWindow; // @synthesize fullScreenWindow=_fullScreenWindow;
@property(nonatomic) double currentY; // @synthesize currentY=_currentY;
@property(nonatomic) double descHeight; // @synthesize descHeight=_descHeight;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playIconImgView; // @synthesize playIconImgView=_playIconImgView;
@property(retain, nonatomic) MMWebImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
- (void)openAppBrand:(id)arg1 oMessageWrap:(id)arg2;
- (id)getMessageWrap;
- (void)onDirect:(id)arg1;
- (void)onForward;
- (void)onEndPlayer;
- (void)onClosePlayer;
- (void)onPausePlayer;
- (void)onStartPlayer;
- (void)onCreate;
- (_Bool)onClickAction:(id)arg1;
- (void)checkReady;
- (_Bool)isReady;
- (void)initMaskImageView;
- (void)initPlayImageView;
- (void)initPageImageView;
- (void)initDescView;
- (void)initTitleView;
- (void)initBgImageView;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (_Bool)canBeReused;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppGameRecordVideoMessageViewModel *viewModel; // @dynamic viewModel;

@end

