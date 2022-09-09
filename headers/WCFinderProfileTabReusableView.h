//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, UIScrollView, UIView;
@protocol WCFinderProfileTabDelegate;

@interface WCFinderProfileTabReusableView : UICollectionReusableView
{
    id <WCFinderProfileTabDelegate> _delegate;
    NSArray *_entryBtnArray;
    UIView *_bar;
    UIScrollView *_scrollView;
    UIView *_blurView;
    UIView *_lineView;
}

+ (double)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *bar; // @synthesize bar=_bar;
@property(retain, nonatomic) NSArray *entryBtnArray; // @synthesize entryBtnArray=_entryBtnArray;
@property(nonatomic) __weak id <WCFinderProfileTabDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBlurHeight:(double)arg1;
- (void)setBlurAlpha:(double)arg1;
- (void)_switchTabItem:(long long)arg1 notifyDelegate:(_Bool)arg2 animated:(_Bool)arg3;
- (void)onClickTabButton:(id)arg1;
- (void)transferTo:(long long)arg1;
@property(readonly, nonatomic) long long selectedType;
- (void)setContentOffset:(double)arg1;
- (id)buttonWithType:(long long)arg1;
- (id)p_createMenuItem:(id)arg1 font:(id)arg2;
- (id)displayTitleForTabType:(long long)arg1;
- (void)configDisplayItems:(id)arg1;
@property(nonatomic) double scrollOffsetX;
@property(readonly, nonatomic) UIView *containerView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

