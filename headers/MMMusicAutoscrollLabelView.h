//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAAnimation, MMMusicFadeOutLayer, UILabel;

@interface MMMusicAutoscrollLabelView : UIView
{
    _Bool _infiniteScrolling;
    UILabel *_label;
    double _maxWidth;
    double _scrollBackDelay;
    double _animationInterval;
    MMMusicFadeOutLayer *_fadeOutLayer;
    CAAnimation *_currentScrollAnim;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAAnimation *currentScrollAnim; // @synthesize currentScrollAnim=_currentScrollAnim;
@property(retain, nonatomic) MMMusicFadeOutLayer *fadeOutLayer; // @synthesize fadeOutLayer=_fadeOutLayer;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
@property(nonatomic) double scrollBackDelay; // @synthesize scrollBackDelay=_scrollBackDelay;
@property(nonatomic) _Bool infiniteScrolling; // @synthesize infiniteScrolling=_infiniteScrolling;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (double)getAnimationInterval;
- (double)getScrollBackDelay;
- (void)resetAnimationWithFitSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

