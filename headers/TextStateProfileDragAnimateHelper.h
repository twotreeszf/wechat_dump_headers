//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CContact, MMUIImageView, MMUILabel, MMUIView, NSDate, NSHashTable, TextStateMediaView, UITableView, UIView;

@interface TextStateProfileDragAnimateHelper : MMObject
{
    _Bool _disableHover;
    _Bool _isAtHoverState;
    _Bool _hasTriggerDragShock;
    _Bool _hasTriggerPlayMuteShock;
    UIView *_frontView;
    UITableView *_frontTableView;
    double _hoverTargetOffset;
    MMUIView *_muteBtnView;
    MMUIImageView *_muteBtnImageView;
    MMUILabel *_muteBtnLabel;
    double _frontViewTop;
    CDUnknownBlockType _enterHoverAnimation;
    CDUnknownBlockType _enterHoverCompletion;
    CDUnknownBlockType _exitHoverAnimation;
    CDUnknownBlockType _exitHoverCompletion;
    CDUnknownBlockType _alphaAnimation;
    NSDate *_dragStartTime;
    double _lastMovement;
    double _beginTouchPosY;
    double _lastTouchPosY;
    double _frontViewY;
    NSHashTable *_alphaAnimateViews;
    TextStateMediaView *_textStateMediaView;
    CContact *_contact;
}

+ (struct CGSize)textStateMediaSizeForWidth:(double)arg1;
+ (double)distanceFromtPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (double)distanceToLeftBottom:(struct CGPoint)arg1;
+ (id)textStateDragHelperWithFrontContainer:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3;
+ (id)storyDragAnimationUtilWithFrontView:(id)arg1 frontViewTop:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) TextStateMediaView *textStateMediaView; // @synthesize textStateMediaView=_textStateMediaView;
@property(retain, nonatomic) NSHashTable *alphaAnimateViews; // @synthesize alphaAnimateViews=_alphaAnimateViews;
@property(nonatomic) _Bool hasTriggerPlayMuteShock; // @synthesize hasTriggerPlayMuteShock=_hasTriggerPlayMuteShock;
@property(nonatomic) _Bool hasTriggerDragShock; // @synthesize hasTriggerDragShock=_hasTriggerDragShock;
@property(nonatomic) double frontViewY; // @synthesize frontViewY=_frontViewY;
@property(nonatomic) double lastTouchPosY; // @synthesize lastTouchPosY=_lastTouchPosY;
@property(nonatomic) double beginTouchPosY; // @synthesize beginTouchPosY=_beginTouchPosY;
@property(nonatomic) double lastMovement; // @synthesize lastMovement=_lastMovement;
@property(retain, nonatomic) NSDate *dragStartTime; // @synthesize dragStartTime=_dragStartTime;
@property(copy, nonatomic) CDUnknownBlockType alphaAnimation; // @synthesize alphaAnimation=_alphaAnimation;
@property(copy, nonatomic) CDUnknownBlockType exitHoverCompletion; // @synthesize exitHoverCompletion=_exitHoverCompletion;
@property(copy, nonatomic) CDUnknownBlockType exitHoverAnimation; // @synthesize exitHoverAnimation=_exitHoverAnimation;
@property(copy, nonatomic) CDUnknownBlockType enterHoverCompletion; // @synthesize enterHoverCompletion=_enterHoverCompletion;
@property(copy, nonatomic) CDUnknownBlockType enterHoverAnimation; // @synthesize enterHoverAnimation=_enterHoverAnimation;
@property(nonatomic) double frontViewTop; // @synthesize frontViewTop=_frontViewTop;
@property(nonatomic) __weak MMUILabel *muteBtnLabel; // @synthesize muteBtnLabel=_muteBtnLabel;
@property(nonatomic) __weak MMUIImageView *muteBtnImageView; // @synthesize muteBtnImageView=_muteBtnImageView;
@property(retain, nonatomic) MMUIView *muteBtnView; // @synthesize muteBtnView=_muteBtnView;
@property(nonatomic) _Bool isAtHoverState; // @synthesize isAtHoverState=_isAtHoverState;
@property(nonatomic) double hoverTargetOffset; // @synthesize hoverTargetOffset=_hoverTargetOffset;
@property(nonatomic) _Bool disableHover; // @synthesize disableHover=_disableHover;
@property(nonatomic) __weak UITableView *frontTableView; // @synthesize frontTableView=_frontTableView;
@property(nonatomic) __weak UIView *frontView; // @synthesize frontView=_frontView;
- (_Bool)canTrigerAtPositionY:(double)arg1;
- (void)updateMediaView;
- (void)updateMediaWithContact:(id)arg1;
- (void)setAnimateViewsAlpha:(double)arg1;
- (void)handleAlphaAnimateWithFrontViewTopOffset:(double)arg1;
- (void)addAlphaAnimateView:(id)arg1;
- (void)resetFrontViewOffset;
- (void)handlePanGestureAtHoverDisable:(id)arg1;
- (void)handlePanGestureAtHoverEnable:(id)arg1;
- (void)processFrontViewGesture:(id)arg1;
- (void)exitHoverState:(_Bool)arg1;
- (void)enterHoverState;
- (void)moveMutePlayViewWithMovement:(double)arg1;
- (_Bool)isPanInMuteView:(id)arg1;
- (void)setAlphaAnimationProgress:(CDUnknownBlockType)arg1;
- (void)setExitHoverAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEnterHoverAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMutebtnViewBigger:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrontView:(id)arg1 frontViewTop:(double)arg2;
- (id)init;
- (void)lightShock;

@end
