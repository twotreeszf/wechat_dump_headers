//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TAVRangeViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIScrollView;
@protocol TAVRangeViewDelegate, TAVTimelineViewDelegate, UIScrollViewDelegate;

@interface TAVTimelineView : UIView <TAVRangeViewDelegate>
{
    UIScrollView *_scrollView;
    UIImageView *_centerLineView;
    id <TAVTimelineViewDelegate> _delegate;
    id <TAVRangeViewDelegate> _rangeViewDelegate;
    NSMutableArray *_rangeViews;
    double _rangeViewLeftInset;
    double _rangeViewRightInset;
    double _contentWidthPerSecond;
    UIView *_scrollContentView;
    UIView *_scrollRangeContentView;
    double _videoRangeViewEarWidth;
    id <UIScrollViewDelegate> _previousScrollViewDelegate;
}

+ (id)timelineViewWithAssets:(id)arg1 imageSize:(struct CGSize)arg2 widthPerSecond:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UIScrollViewDelegate> previousScrollViewDelegate; // @synthesize previousScrollViewDelegate=_previousScrollViewDelegate;
@property(nonatomic) double videoRangeViewEarWidth; // @synthesize videoRangeViewEarWidth=_videoRangeViewEarWidth;
@property(retain, nonatomic) UIView *scrollRangeContentView; // @synthesize scrollRangeContentView=_scrollRangeContentView;
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(nonatomic) double contentWidthPerSecond; // @synthesize contentWidthPerSecond=_contentWidthPerSecond;
@property(nonatomic) double rangeViewRightInset; // @synthesize rangeViewRightInset=_rangeViewRightInset;
@property(nonatomic) double rangeViewLeftInset; // @synthesize rangeViewLeftInset=_rangeViewLeftInset;
@property(retain, nonatomic) NSMutableArray *rangeViews; // @synthesize rangeViews=_rangeViews;
@property(nonatomic) __weak id <TAVRangeViewDelegate> rangeViewDelegate; // @synthesize rangeViewDelegate=_rangeViewDelegate;
@property(nonatomic) __weak id <TAVTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *centerLineView; // @synthesize centerLineView=_centerLineView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)rangeViewEndUpdateRightOffset:(id)arg1;
- (void)rangeView:(id)arg1 updateRightOffset:(double)arg2 isAuto:(_Bool)arg3;
- (void)rangeViewBeginUpdateRight:(id)arg1;
- (void)rangeViewEndUpdateLeftOffset:(id)arg1;
- (void)rangeView:(id)arg1 updateLeftOffset:(double)arg2 isAuto:(_Bool)arg3;
- (void)rangeViewBeginUpdateLeft:(id)arg1;
- (void)rangeView:(id)arg1 didChangeActive:(_Bool)arg2;
- (id)fetchVisiableRangeViews;
- (void)displayRangeViewsIfNeed;
- (void)removeAllRangeViews;
- (void)resignVideoRangeView;
- (_Bool)isActived;
- (void)scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToEndOfRangeView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToStartOfRangeView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)adjustScrollViewOffsetAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)getRangeViewIndexAtOffsetX:(double)arg1;
- (CDStruct_1b6d18a9)calculateTimeAtOffsetX:(double)arg1;
- (long long)getRangeViewIndexAtTime:(CDStruct_1b6d18a9)arg1;
- (double)calculateOffsetXAtTime:(CDStruct_1b6d18a9)arg1;
- (double)timelineWidthPerSeconds;
- (void)removeRangeViewAtIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeCurrentActivedRangeViewCompletion:(CDUnknownBlockType)arg1;
- (void)insertRangeView:(id)arg1 atIndex:(long long)arg2;
- (void)reloadWithRangeViews:(id)arg1;
- (void)tapRangeViewAction:(id)arg1;
- (void)tapContentAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

