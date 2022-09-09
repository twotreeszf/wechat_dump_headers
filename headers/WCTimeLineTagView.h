//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMImageLoaderObserver-Protocol.h"

@class NSArray, NSString, UIColor, UIFont;

@interface WCTimeLineTagView : UIView <MMImageLoaderObserver>
{
    NSArray *_dataArray;
    UIColor *_tagDefaultBackgroundColor;
    UIFont *_tagFont;
    UIColor *_tagDefaultColor;
    double _tagMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double tagMargin; // @synthesize tagMargin=_tagMargin;
@property(retain, nonatomic) UIColor *tagDefaultColor; // @synthesize tagDefaultColor=_tagDefaultColor;
@property(retain, nonatomic) UIFont *tagFont; // @synthesize tagFont=_tagFont;
@property(retain, nonatomic) UIColor *tagDefaultBackgroundColor; // @synthesize tagDefaultBackgroundColor=_tagDefaultBackgroundColor;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)layoutSubviews;
- (_Bool)isTagHasIcon:(int)arg1;
- (id)fetchIconUrl:(int)arg1 isForDark:(_Bool)arg2;
- (id)fetchDefaultUIImage;
- (id)fetchUIImageAtIndex:(int)arg1;
- (id)fetchTagNameAtIndex:(int)arg1;
- (id)fetchTagNameColorAtIndex:(int)arg1;
- (id)fetchTagBgColorAtIndex:(int)arg1;
- (id)fetchUIColorAtIndex:(int)arg1 isForTagName:(_Bool)arg2;
- (void)downloadIconInner:(id)arg1 isForDark:(_Bool)arg2 andIndex:(int)arg3;
- (void)checkAndDownloadIcon;
- (void)setIconImage:(id)arg1 andIndex:(int)arg2 isForDark:(_Bool)arg3;
- (void)setIconImageInner:(int)arg1;
- (void)setIconImage:(id)arg1 andUrl:(id)arg2;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

