//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface EmotionProgressView : UIView
{
    double _progress;
    UIColor *_backColor;
    UIColor *_prsColor;
    UIView *_oneView;
    UIView *_twoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *twoView; // @synthesize twoView=_twoView;
@property(retain, nonatomic) UIView *oneView; // @synthesize oneView=_oneView;
@property(retain, nonatomic) UIColor *prsColor; // @synthesize prsColor=_prsColor;
@property(retain, nonatomic) UIColor *backColor; // @synthesize backColor=_backColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)setupViews;
- (void)setupFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

