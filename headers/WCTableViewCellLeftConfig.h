//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSValue, UIColor, UIFont, UIImage, UIView;

@interface WCTableViewCellLeftConfig : NSObject
{
    _Bool _selected;
    _Bool _titleCenter;
    unsigned long long _mode;
    NSString *_title;
    double _customTitleLeft;
    double _customTitleTop;
    double _customTitleMaxWidth;
    NSValue *_customImageSize;
    NSNumber *_imageViewRightMargin;
    UIColor *_titleColor;
    UIFont *_titleFont;
    NSString *_detail;
    UIColor *_detailColor;
    double _customDetailMaxWidth;
    double _customDetailHeight;
    long long _customDetailNumberOfLines;
    UIImage *_image;
    UIImage *_smallIcon;
    NSString *_badgeText;
    UIView *_customView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool titleCenter; // @synthesize titleCenter=_titleCenter;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(retain, nonatomic) UIImage *smallIcon; // @synthesize smallIcon=_smallIcon;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long customDetailNumberOfLines; // @synthesize customDetailNumberOfLines=_customDetailNumberOfLines;
@property(nonatomic) double customDetailHeight; // @synthesize customDetailHeight=_customDetailHeight;
@property(nonatomic) double customDetailMaxWidth; // @synthesize customDetailMaxWidth=_customDetailMaxWidth;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSNumber *imageViewRightMargin; // @synthesize imageViewRightMargin=_imageViewRightMargin;
@property(retain, nonatomic) NSValue *customImageSize; // @synthesize customImageSize=_customImageSize;
@property(nonatomic) double customTitleMaxWidth; // @synthesize customTitleMaxWidth=_customTitleMaxWidth;
@property(nonatomic) double customTitleTop; // @synthesize customTitleTop=_customTitleTop;
@property(nonatomic) double customTitleLeft; // @synthesize customTitleLeft=_customTitleLeft;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;

@end

