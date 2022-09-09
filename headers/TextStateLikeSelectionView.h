//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "MMMenuWindowDelegate-Protocol.h"

@class CAShapeLayer, MMMenuWindow, NSMutableArray, NSString, UIView;
@protocol TextStateLikeSelectionViewDelegate;

@interface TextStateLikeSelectionView : MMWindowViewController <MMMenuWindowDelegate>
{
    id <TextStateLikeSelectionViewDelegate> _delegate;
    CDUnknownBlockType _selectionCallback;
    MMMenuWindow *_window;
    NSMutableArray *_likeIconButtons;
    UIView *_containerView;
    CAShapeLayer *_blurMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *blurMaskLayer; // @synthesize blurMaskLayer=_blurMaskLayer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *likeIconButtons; // @synthesize likeIconButtons=_likeIconButtons;
@property(retain, nonatomic) MMMenuWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType selectionCallback; // @synthesize selectionCallback=_selectionCallback;
@property(nonatomic) __weak id <TextStateLikeSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectAtLikeButton:(id)arg1;
- (void)onTouchAtNoneMenuArea;
- (void)dismiss;
- (void)showToView:(id)arg1;
- (void)showToView:(id)arg1 selectCallback:(CDUnknownBlockType)arg2;
- (void)updateBlurMaskWithArrowCenterX:(double)arg1;
- (void)updateWithLikeIcons:(id)arg1;
- (_Bool)shouldHandleStatusBarAppearance;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
