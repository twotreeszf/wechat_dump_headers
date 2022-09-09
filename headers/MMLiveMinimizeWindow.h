//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "MMLiveMinimizeViewControllerDelegate-Protocol.h"

@class MMLiveMinimizeViewController, NSString, SequenceAnimationObject;
@protocol MMLiveMinimizeWindowDelegate;

@interface MMLiveMinimizeWindow : MMUIWindow <MMLiveMinimizeViewControllerDelegate>
{
    id <MMLiveMinimizeWindowDelegate> _liveMinimizeWindowDelegate;
    SequenceAnimationObject *_animationObject;
    SequenceAnimationObject *_animationObjectForAlpha;
    MMLiveMinimizeViewController *_viewController;
    struct CGRect _originMoveViewRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect originMoveViewRect; // @synthesize originMoveViewRect=_originMoveViewRect;
@property(retain, nonatomic) MMLiveMinimizeViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SequenceAnimationObject *animationObjectForAlpha; // @synthesize animationObjectForAlpha=_animationObjectForAlpha;
@property(retain, nonatomic) SequenceAnimationObject *animationObject; // @synthesize animationObject=_animationObject;
@property(nonatomic) __weak id <MMLiveMinimizeWindowDelegate> liveMinimizeWindowDelegate; // @synthesize liveMinimizeWindowDelegate=_liveMinimizeWindowDelegate;
- (_Bool)shouldHandleStatusBarAppearance;
- (long long)onMMLiveMinimizeViewControllerRequestPreviousOrientation;
- (void)onMMLiveMinimizeViewControllerTap;
- (struct CGRect)fullScreenRect;
- (void)makeKeyWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showMinimizeWindowWithBackImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideMinimizeWindowWithBackImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)restoreMoveViewOriginRect;
- (void)setBackImage:(id)arg1;
- (void)updateLiveView:(id)arg1;
- (struct CGRect)vaildFrame;
- (id)initWithLiveView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

