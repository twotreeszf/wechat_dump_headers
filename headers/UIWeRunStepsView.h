//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CALayer, NSArray, NSMutableArray, UIView;

@interface UIWeRunStepsView : MMUIView
{
    NSMutableArray *m_timeLblAry;
    NSMutableArray *m_stepNumLblAry;
    NSMutableArray *m_pointsAry;
    NSMutableArray *m_alignLineAry;
    CALayer *m_aliginLineLayer;
    long long m_highLightedIndex;
    unsigned int m_maxStepLine;
    UIView *m_sView;
    UIView *m_hintView;
    NSArray *m_months;
    _Bool _isMySelf;
    NSArray *_stepItems;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMySelf; // @synthesize isMySelf=_isMySelf;
@property(retain, nonatomic) NSArray *stepItems; // @synthesize stepItems=_stepItems;
- (void)onStepBtnClicked:(id)arg1;
- (void)makeAlignLines:(id)arg1;
- (void)makeClickHints:(id)arg1;
- (void)makeStepBtns:(id)arg1;
- (void)makeStepNumOnTop:(id)arg1;
- (void)initTimeLineFooter;
- (double)calPointYWithStepItem:(id)arg1;
- (void)makeDashLine:(id)arg1;
- (void)makePointsViewWithPointArray:(id)arg1;
- (void)makeLinePath:(id)arg1 pointArray:(id)arg2;
- (void)makeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 isDash:(_Bool)arg3 lineKey:(id)arg4;
- (void)makeStepsLines:(id)arg1;
- (void)makeGrientLayerWithPointArray:(id)arg1;
- (void)initBezierLine;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

