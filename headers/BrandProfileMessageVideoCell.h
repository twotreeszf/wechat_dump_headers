//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileMessageBaseCell.h"

@class BrandProfileMessageVideoViewModel, CAGradientLayer, MMUILabel, SightIconView;

@interface BrandProfileMessageVideoCell : BrandProfileMessageBaseCell
{
    CAGradientLayer *m_maskLayer;
    SightIconView *m_playIconView;
    MMUILabel *m_timeLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviewsNormalItem;
- (void)layoutSubviewsTopItem;
- (void)onUpdateViewModel;
- (void)initTimeLabel;
- (void)initPlayBtnView;
- (void)initNormalReaderItem;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, nonatomic) BrandProfileMessageVideoViewModel *viewModel; // @dynamic viewModel;

@end

