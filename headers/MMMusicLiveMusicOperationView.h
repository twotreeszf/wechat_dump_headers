//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMusicPlayerExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMMusicInfo, MMTimer, MMUILabel, NSMutableArray, NSString, WCNetworkMediaSlider;
@protocol MMMusicLiveMusicOperationViewDelegate;

@interface MMMusicLiveMusicOperationView : UIView <IMusicPlayerExt, UIGestureRecognizerDelegate>
{
    _Bool _isSliding;
    id <MMMusicLiveMusicOperationViewDelegate> _delegate;
    MMMusicInfo *_musicInfo;
    WCNetworkMediaSlider *_slider;
    MMTimer *_sliderTimer;
    MMUILabel *_playedTimeLabel;
    MMUILabel *_dividerLabel;
    MMUILabel *_totalTimeLabel;
    NSMutableArray *_arrTimeInfo;
    double _musicTimeInSecondPerPx;
}

- (void).cxx_destruct;
@property(nonatomic) double musicTimeInSecondPerPx; // @synthesize musicTimeInSecondPerPx=_musicTimeInSecondPerPx;
@property(retain, nonatomic) NSMutableArray *arrTimeInfo; // @synthesize arrTimeInfo=_arrTimeInfo;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *dividerLabel; // @synthesize dividerLabel=_dividerLabel;
@property(retain, nonatomic) MMUILabel *playedTimeLabel; // @synthesize playedTimeLabel=_playedTimeLabel;
@property(retain, nonatomic) MMTimer *sliderTimer; // @synthesize sliderTimer=_sliderTimer;
@property(retain, nonatomic) WCNetworkMediaSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(nonatomic) __weak id <MMMusicLiveMusicOperationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateProgressBarMarkArr:(id)arg1;
- (id)parseNodeInfoToMarkItem:(id)arg1;
- (void)actionTapSlider:(id)arg1;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onNeedUpdatePlayedTimeWhenSetProgressEnd;
- (void)onNeedUpdatePlayedTime;
- (void)onMusicPlayStatusChanged;
- (double)getAbsorptionProgress:(double)arg1;
- (double)getMusicTimeInSecondPerPx;
- (void)updateMarkItemColorWhenPassed:(unsigned int)arg1;
- (unsigned int)setProgressEnd;
- (void)setProgress:(double)arg1;
- (void)setArrNodeTimeInfo:(id)arg1;
- (void)onPlayMusicBtnClicked;
- (void)layoutTimeLabel;
- (void)layoutSubviews;
@property(nonatomic) _Bool progressHidden;
- (void)initViews;
- (id)initWithMusicInfo:(id)arg1 andFrame:(struct CGRect)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

