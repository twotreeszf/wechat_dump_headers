//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMUIViewControllerTransitionInfo-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class MinimizeTaskData, NSString, UIImageView, UIView, UIViewController;
@protocol MiniTaskTransitionAnimationDelegate;

@interface MiniTaskNewPopAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    _Bool _isInteracting;
    _Bool _isDismiss;
    UIViewController *animatedTransitionRespondViewController;
    UIView *_backgroundView;
    UIImageView *_fakeSnapshot;
    UIView *_fakeSnapshotMask;
    MinimizeTaskData *_launchTaskData;
    id <MiniTaskTransitionAnimationDelegate> _delegate;
    UIView *_fakeSnapshotShadowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *fakeSnapshotShadowView; // @synthesize fakeSnapshotShadowView=_fakeSnapshotShadowView;
@property(nonatomic) __weak id <MiniTaskTransitionAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MinimizeTaskData *launchTaskData; // @synthesize launchTaskData=_launchTaskData;
@property(retain, nonatomic) UIView *fakeSnapshotMask; // @synthesize fakeSnapshotMask=_fakeSnapshotMask;
@property(retain, nonatomic) UIImageView *fakeSnapshot; // @synthesize fakeSnapshot=_fakeSnapshot;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

