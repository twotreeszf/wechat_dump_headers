//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SightLocalVideoSwipeToSelectScrollViewDelegate-Protocol.h"

@class NSArray, NSString, SightLocalVideoSwipeToSelectScrollView;
@protocol SightLocalVideoDurationSelectViewDelegate;

@interface SightLocalVideoDurationSelectView : UIView <SightLocalVideoSwipeToSelectScrollViewDelegate>
{
    int _defaultIndex;
    id <SightLocalVideoDurationSelectViewDelegate> _delegate;
    NSArray *_durationList;
    SightLocalVideoSwipeToSelectScrollView *_swipeToSelectScrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SightLocalVideoSwipeToSelectScrollView *swipeToSelectScrollView; // @synthesize swipeToSelectScrollView=_swipeToSelectScrollView;
@property(nonatomic) int defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSArray *durationList; // @synthesize durationList=_durationList;
@property(nonatomic) __weak id <SightLocalVideoDurationSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)swipeToSelectScrollView:(id)arg1 didScrollToIndex:(unsigned long long)arg2;
- (void)didSelectOnIndex:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

