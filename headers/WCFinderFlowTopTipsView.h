//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderFlowTopTipsViewDelegate;

@interface WCFinderFlowTopTipsView : UICollectionViewCell
{
    id <WCFinderFlowTopTipsViewDelegate> _delegate;
    double _triggerHeight;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_tipsLabel;
    unsigned long long _state;
    double _pulldownHeight;
    NSString *_normalTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *normalTips; // @synthesize normalTips=_normalTips;
@property(nonatomic) double pulldownHeight; // @synthesize pulldownHeight=_pulldownHeight;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
@property(nonatomic) __weak id <WCFinderFlowTopTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderFlowTopTipsViewDataSourceDidFinishedLoading:(id)arg1;
- (void)finderFlowTopTipsViewDidEndDragging:(id)arg1;
- (void)finderFlowTopTipsViewDidScroll:(id)arg1;
- (void)onStateOfNone;
- (void)onStateOfNoMore:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onResumeOfLoading;
- (_Bool)isLoadingNow;
- (void)setLoadingTop:(double)arg1;
- (void)configNormalTips:(id)arg1;
- (void)setLoadingImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

