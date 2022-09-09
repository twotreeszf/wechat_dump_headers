//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WhatsNewBubbleViewDelegate-Protocol.h"

@class CADisplayLink, NSMutableArray, NSString, UIImageView, UILabel, UIView, UIViewPropertyAnimator, WhatsNewConfig;
@protocol WhatsNew2021ViewControllerDelegate;

@interface WhatsNew2021ViewController : MMUIViewController <WhatsNewBubbleViewDelegate>
{
    _Bool _firstScreen;
    float _dismissProgress;
    id <WhatsNew2021ViewControllerDelegate> _delegate;
    UIImageView *_placeHolder;
    unsigned long long _currentIndex;
    UIImageView *_front;
    UIImageView *_current;
    UIImageView *_next;
    UIViewPropertyAnimator *_goToNext;
    UIViewPropertyAnimator *_goBack;
    UIViewPropertyAnimator *_dismissAnimator;
    unsigned long long _aniamtionState;
    UIView *_pageControl;
    UILabel *_version;
    NSMutableArray *_dots;
    WhatsNewConfig *_config;
    UIView *_blurBackgroundView;
    UIView *_darkBackgroundView;
    CADisplayLink *_displayLink;
    NSMutableArray *_bubbles;
    unsigned long long _lastDisplayTime;
}

+ (_Bool)shouldShowWhatsNew;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastDisplayTime; // @synthesize lastDisplayTime=_lastDisplayTime;
@property(retain, nonatomic) NSMutableArray *bubbles; // @synthesize bubbles=_bubbles;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) UIView *darkBackgroundView; // @synthesize darkBackgroundView=_darkBackgroundView;
@property(retain, nonatomic) UIView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) WhatsNewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
@property(retain, nonatomic) UILabel *version; // @synthesize version=_version;
@property(retain, nonatomic) UIView *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) float dismissProgress; // @synthesize dismissProgress=_dismissProgress;
@property(nonatomic) unsigned long long aniamtionState; // @synthesize aniamtionState=_aniamtionState;
@property(retain, nonatomic) UIViewPropertyAnimator *dismissAnimator; // @synthesize dismissAnimator=_dismissAnimator;
@property(retain, nonatomic) UIViewPropertyAnimator *goBack; // @synthesize goBack=_goBack;
@property(retain, nonatomic) UIViewPropertyAnimator *goToNext; // @synthesize goToNext=_goToNext;
@property(retain, nonatomic) UIImageView *next; // @synthesize next=_next;
@property(retain, nonatomic) UIImageView *current; // @synthesize current=_current;
@property(retain, nonatomic) UIImageView *front; // @synthesize front=_front;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIImageView *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) _Bool firstScreen; // @synthesize firstScreen=_firstScreen;
@property(nonatomic) __weak id <WhatsNew2021ViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)randomFloatBetween:(float)arg1 and:(float)arg2;
- (id)generateGoBackAnimator;
- (id)generateGoToNextAnimator;
- (id)currentAnimator;
- (id)generateSubTitleWith:(unsigned long long)arg1;
- (void)close;
- (_Bool)isLastPage;
- (void)setSelectedDot:(unsigned long long)arg1;
- (void)shouldRemove:(id)arg1;
- (void)startDismissWindowAnimation;
- (void)startGoBackAnimation;
- (void)startGoToNextAnimation;
- (void)generateBubbles;
- (void)addBubbleView:(_Bool)arg1;
- (void)displayLinkCall;
- (void)pan:(id)arg1;
- (void)click;
- (void)setGradientLayer:(id)arg1 endColor:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
