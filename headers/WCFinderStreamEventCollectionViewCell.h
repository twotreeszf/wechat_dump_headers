//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface WCFinderStreamEventCollectionViewCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_particantNumLabel;
    MMWebImageView *_thumbImageView;
    UIView *_separator;
}

+ (double)streamCellHeigh;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *particantNumLabel; // @synthesize particantNumLabel=_particantNumLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithEventInfo:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

