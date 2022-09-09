//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCPlayerConfigDelegate-Protocol.h"

@class MMEasterEggNewYearActivityMaterialInfo, MMEasterEggNewYearActivityReportObject, MMUILabel, MMWebImageView, NSString, UIButton, UIImageView, WCPlayerConfigControlView, WCPlayerHttpMediaWrap, WCPlayerPlayArgs, WCPlayerView;
@protocol MMEasterEggNewYearActivityCardViewDelegate;

@interface MMEasterEggNewYearActivityCardView : UIView <WCPlayerConfigDelegate>
{
    _Bool _buttonEnabled;
    id <MMEasterEggNewYearActivityCardViewDelegate> _delegate;
    MMEasterEggNewYearActivityMaterialInfo *_materialInfo;
    MMEasterEggNewYearActivityReportObject *_reportObject;
    NSString *_buttonTitle;
    UIView *_contentView;
    UIImageView *_backgroundImageView;
    MMWebImageView *_brandLogoImageView;
    MMUILabel *_brandNameLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMWebImageView *_creativeImageView;
    MMUILabel *_moneyAmountLabel;
    MMUILabel *_moneyMeasureLabel;
    UIButton *_actionButton;
    WCPlayerView *_creativeVideoView;
    WCPlayerConfigControlView *_creativeVideoControlView;
    WCPlayerPlayArgs *_creativeVideoPlayerInfo;
    WCPlayerHttpMediaWrap *_creativeVideoMediaWrap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerHttpMediaWrap *creativeVideoMediaWrap; // @synthesize creativeVideoMediaWrap=_creativeVideoMediaWrap;
@property(retain, nonatomic) WCPlayerPlayArgs *creativeVideoPlayerInfo; // @synthesize creativeVideoPlayerInfo=_creativeVideoPlayerInfo;
@property(nonatomic) __weak WCPlayerConfigControlView *creativeVideoControlView; // @synthesize creativeVideoControlView=_creativeVideoControlView;
@property(nonatomic) __weak WCPlayerView *creativeVideoView; // @synthesize creativeVideoView=_creativeVideoView;
@property(nonatomic) __weak UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak MMUILabel *moneyMeasureLabel; // @synthesize moneyMeasureLabel=_moneyMeasureLabel;
@property(nonatomic) __weak MMUILabel *moneyAmountLabel; // @synthesize moneyAmountLabel=_moneyAmountLabel;
@property(nonatomic) __weak MMWebImageView *creativeImageView; // @synthesize creativeImageView=_creativeImageView;
@property(nonatomic) __weak MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMUILabel *brandNameLabel; // @synthesize brandNameLabel=_brandNameLabel;
@property(nonatomic) __weak MMWebImageView *brandLogoImageView; // @synthesize brandLogoImageView=_brandLogoImageView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) _Bool buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
@property(retain, nonatomic) MMEasterEggNewYearActivityReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(retain, nonatomic) MMEasterEggNewYearActivityMaterialInfo *materialInfo; // @synthesize materialInfo=_materialInfo;
@property(nonatomic) __weak id <MMEasterEggNewYearActivityCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoopPlayToEnd;
- (void)onVideoPlay;
- (void)reportMaterialExposure;
- (void)onTapActionButton;
- (id)createPlayerInfoFromMediaWrap:(id)arg1;
- (id)createMediaWrapFromURL:(id)arg1;
- (id)createPlayerConfig;
- (void)resumeVideoIfNeeded;
- (void)pauseVideoIfNeeded;
- (void)didShow;
- (double)estimatedHeight;
- (void)layoutSubviews;
- (void)setupActionButton;
- (void)setupCreativeView;
- (void)setupTitleAndSubtitle;
- (void)setupBrandHeader;
- (void)transformButtonToOpenMoneyStyle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

