//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, NSString, UIImageView, UITapGestureRecognizer;
@protocol KidsWatchSwitchCellViewDelegate;

@interface KidsWatchSwitchCellView : UIView
{
    _Bool _selected;
    id <KidsWatchSwitchCellViewDelegate> _delegate;
    NSString *_title;
    UIView *_topSeparateView;
    MMUILabel *_titleLabel;
    UIImageView *_selectIconView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *selectIconView; // @synthesize selectIconView=_selectIconView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topSeparateView; // @synthesize topSeparateView=_topSeparateView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <KidsWatchSwitchCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)onTap:(id)arg1;
- (void)initGesture;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

