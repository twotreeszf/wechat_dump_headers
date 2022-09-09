//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "PAGViewListener-Protocol.h"

@class MMFinderLiveGiftPlayItem, MMFinderLiveTaskId, MMTimer, NSMutableArray, NSMutableDictionary, NSString, PAGView;
@protocol MMLiveRewardGiftRecievingAnimationViewDelegate;

@interface MMLiveRewardGiftRecievingAnimationView : MMUIView <PAGViewListener>
{
    _Bool _isFullPagAnimating;
    _Bool _isFullPagAnimattionInterrupted;
    unsigned int _fullPagAnimatingTicks;
    id <MMLiveRewardGiftRecievingAnimationViewDelegate> _delegate;
    double _notificationBottom;
    MMFinderLiveTaskId *_liveTaskId;
    MMTimer *_scheduleTimer;
    NSMutableArray *_displayingGiftNotificationViewList;
    NSMutableArray *_freeGiftNotificationViewList;
    NSMutableArray *_displayingGiftComboItemList;
    NSMutableDictionary *_comboId2ComboItem;
    MMFinderLiveGiftPlayItem *_currentAnimatingPlayItem;
    PAGView *_currentGiftAnimatingPlayerView;
    long long _currentOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) _Bool isFullPagAnimattionInterrupted; // @synthesize isFullPagAnimattionInterrupted=_isFullPagAnimattionInterrupted;
@property(nonatomic) unsigned int fullPagAnimatingTicks; // @synthesize fullPagAnimatingTicks=_fullPagAnimatingTicks;
@property(nonatomic) _Bool isFullPagAnimating; // @synthesize isFullPagAnimating=_isFullPagAnimating;
@property(retain, nonatomic) PAGView *currentGiftAnimatingPlayerView; // @synthesize currentGiftAnimatingPlayerView=_currentGiftAnimatingPlayerView;
@property(retain, nonatomic) MMFinderLiveGiftPlayItem *currentAnimatingPlayItem; // @synthesize currentAnimatingPlayItem=_currentAnimatingPlayItem;
@property(retain, nonatomic) NSMutableDictionary *comboId2ComboItem; // @synthesize comboId2ComboItem=_comboId2ComboItem;
@property(retain, nonatomic) NSMutableArray *displayingGiftComboItemList; // @synthesize displayingGiftComboItemList=_displayingGiftComboItemList;
@property(retain, nonatomic) NSMutableArray *freeGiftNotificationViewList; // @synthesize freeGiftNotificationViewList=_freeGiftNotificationViewList;
@property(retain, nonatomic) NSMutableArray *displayingGiftNotificationViewList; // @synthesize displayingGiftNotificationViewList=_displayingGiftNotificationViewList;
@property(retain, nonatomic) MMTimer *scheduleTimer; // @synthesize scheduleTimer=_scheduleTimer;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(nonatomic) double notificationBottom; // @synthesize notificationBottom=_notificationBottom;
@property(nonatomic) __weak id <MMLiveRewardGiftRecievingAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideGiftNotificationViews;
- (void)showGiftNotificationViews;
- (void)onGiftNotificationEnd:(id)arg1;
- (void)endGiftNotification:(id)arg1;
- (void)startGiftNotification:(id)arg1;
- (void)onAnimationTimeout:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)startGiftAnimationForLiveGift:(id)arg1;
- (void)scheduleGiftBatchAnimation;
- (void)updateGiftAnimatingPlayerViewHidden;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (_Bool)stopDisplayingGiftComboForLocalCombo:(_Bool)arg1;
- (_Bool)stopDisplayingGiftComboWithCombId:(id)arg1;
- (void)reloadDataWithRewardAppMsgInfo:(id)arg1;
- (void)playNextBatchRewardAppMsgInfo:(id)arg1;
- (_Bool)canRetriveNextGiftComboForDisplay;
- (_Bool)canRetriveNextGiftComboForSerialDisplay;
- (void)tryToProcessNextGiftCombo;
- (void)startScheduleTimerIfNeed:(unsigned long long)arg1;
- (void)startScheduleTimer:(unsigned long long)arg1;
- (void)resumeScheduleTimer;
- (void)pauseScheduleTimer;
- (void)stopScheduleTimer;
- (void)reloadGiftNotificationViews;
- (void)layoutGiftNotificationViews;
- (void)setupGiftNotificationView;
- (void)setupGiftAnimatingPlayerView;
- (void)setupViews;
- (void)setupNotifications;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

