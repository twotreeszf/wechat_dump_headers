//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class FinderLiveTagInfo, UIImageView, UILabel;

@interface MMLiveCategorySelectButton : MMUIButton
{
    FinderLiveTagInfo *_tagInfo;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FinderLiveTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
- (void)sizeToFit;
- (void)updateWithTag:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
