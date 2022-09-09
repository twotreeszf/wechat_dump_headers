//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor;

@interface WAMapCalloutView : UIView
{
    UIButton *_btn;
    UIButton *_btnBig;
    UIColor *_bgColor;
    double _radius;
    double _borderWidth;
    UIColor *_borderColor;
    double _margin;
    double _arrowLen;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowOffsetX;
    double _shadowOffsetY;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
@property(nonatomic) double shadowOffsetY; // @synthesize shadowOffsetY=_shadowOffsetY;
@property(nonatomic) double shadowOffsetX; // @synthesize shadowOffsetX=_shadowOffsetX;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double arrowLen; // @synthesize arrowLen=_arrowLen;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIButton *btnBig; // @synthesize btnBig=_btnBig;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithParam:(id)arg1 view:(id)arg2;
- (id)initWithParam:(id)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

