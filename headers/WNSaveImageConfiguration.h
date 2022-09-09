//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, UIColor, UIFont;

@interface WNSaveImageConfiguration : NSObject <NSCopying>
{
    long long _imageType;
    UIColor *_backgroundColor;
    long long _textAlignment;
    double _visibleHeight;
    double _squareHeight;
    UIFont *_longImageFont;
    UIFont *_squareImageFont;
    double _scale;
    UIColor *_textColor;
    UIColor *_logoColor;
    unsigned long long _colorType;
    NSMutableArray *_arrSelectedIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrSelectedIndex; // @synthesize arrSelectedIndex=_arrSelectedIndex;
@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(retain, nonatomic) UIColor *logoColor; // @synthesize logoColor=_logoColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIFont *squareImageFont; // @synthesize squareImageFont=_squareImageFont;
@property(retain, nonatomic) UIFont *longImageFont; // @synthesize longImageFont=_longImageFont;
@property(nonatomic) double squareHeight; // @synthesize squareHeight=_squareHeight;
@property(nonatomic) double visibleHeight; // @synthesize visibleHeight=_visibleHeight;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSaveImageConfigWithType:(long long)arg1 andFont:(id)arg2 andTextAlignment:(long long)arg3 andVisibleHeight:(double)arg4 andSquareHeight:(double)arg5 isDarkMode:(_Bool)arg6;

@end

