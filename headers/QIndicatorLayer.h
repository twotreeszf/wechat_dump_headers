//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface QIndicatorLayer : CALayer
{
    _Bool _isDarkStyle;
    _Bool _showUpIndicator;
    _Bool _showDownIndicator;
}

@property(nonatomic) _Bool showDownIndicator; // @synthesize showDownIndicator=_showDownIndicator;
@property(nonatomic) _Bool showUpIndicator; // @synthesize showUpIndicator=_showUpIndicator;
@property _Bool isDarkStyle; // @synthesize isDarkStyle=_isDarkStyle;
- (void)DrawBottomIndicator:(struct CGContext *)arg1 withCenter:(struct CGPoint)arg2;
- (void)DrawTopIndicator:(struct CGContext *)arg1 withCenter:(struct CGPoint)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setDarkMode:(_Bool)arg1;

@end

