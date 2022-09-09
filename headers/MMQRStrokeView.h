//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMTimer, SightIconView, UIColor;
@protocol MMQRStrokeViewDelegate;

@interface MMQRStrokeView : UIView
{
    float m_targetFrame[8];
    float m_currFrame[8];
    float m_startFrame[8];
    MMTimer *m_timer;
    _Bool m_inAnim;
    int m_animState;
    int m_currenHiddenID;
    int m_currenTriggerID;
    int m_postTriggerID;
    SightIconView *m_trigProgress;
    id <MMQRStrokeViewDelegate> _delegate;
    UIColor *_strokeColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) __weak id <MMQRStrokeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int animState; // @synthesize animState=m_animState;
- (void)printArray:(float *)arg1 title:(id)arg2;
- (void)hideFrame;
- (void)trigProgress;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepariForQRFrameGone;
- (void)updateAnimation;
- (void)setTargetFrame:(float *)arg1;
- (void)stopTimer;
- (void)startTimer;
- (void)setArray:(float *)arg1 withArray:(float *)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

