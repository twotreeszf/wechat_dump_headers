//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface BTLDividingLineView : UIView
{
    UILabel *_tipsLabel;
    UIView *_leftLine;
    UIView *_rightLine;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)layoutSubviews;
- (void)internalInitWithWording:(id)arg1 font:(id)arg2;
- (id)initWithTipsWording:(id)arg1 font:(id)arg2;

@end
