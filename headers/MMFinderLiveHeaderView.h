//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveBaseComponentView.h"

#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class MMFinderLiveTask, MMUILabel, MMWebImageView, NSString, WCFinderContact, WCFinderHeadImageView, WCLiveBlurButton;

@interface MMFinderLiveHeaderView : MMLiveBaseComponentView <WCFinderHeadImageViewDelegate>
{
    _Bool _isOrientationButtonHidden;
    _Bool _isLiveNameEdited;
    WCFinderHeadImageView *_anchorHeadImageView;
    MMUILabel *_liveTitleLabel;
    MMUILabel *_anchorNameLabel;
    MMWebImageView *_authIconView;
    WCLiveBlurButton *_actionButton;
    WCLiveBlurButton *_closeButton;
    WCLiveBlurButton *_orientationButton;
    long long _lastOrientation;
    NSString *_liveTitle;
    CDUnknownBlockType _headImageOrLabelCallback;
    CDUnknownBlockType _closeButtonCallback;
    CDUnknownBlockType _actionButtonCallback;
    CDUnknownBlockType _orientationButtonCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType orientationButtonCallback; // @synthesize orientationButtonCallback=_orientationButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType actionButtonCallback; // @synthesize actionButtonCallback=_actionButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType closeButtonCallback; // @synthesize closeButtonCallback=_closeButtonCallback;
@property(copy, nonatomic) CDUnknownBlockType headImageOrLabelCallback; // @synthesize headImageOrLabelCallback=_headImageOrLabelCallback;
@property(retain, nonatomic) NSString *liveTitle; // @synthesize liveTitle=_liveTitle;
@property(nonatomic) _Bool isLiveNameEdited; // @synthesize isLiveNameEdited=_isLiveNameEdited;
@property(nonatomic) _Bool isOrientationButtonHidden; // @synthesize isOrientationButtonHidden=_isOrientationButtonHidden;
@property(nonatomic) long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(retain, nonatomic) WCLiveBlurButton *orientationButton; // @synthesize orientationButton=_orientationButton;
@property(retain, nonatomic) WCLiveBlurButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) WCLiveBlurButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMWebImageView *authIconView; // @synthesize authIconView=_authIconView;
@property(retain, nonatomic) MMUILabel *anchorNameLabel; // @synthesize anchorNameLabel=_anchorNameLabel;
@property(retain, nonatomic) MMUILabel *liveTitleLabel; // @synthesize liveTitleLabel=_liveTitleLabel;
@property(retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView; // @synthesize anchorHeadImageView=_anchorHeadImageView;
- (void)handleNameLabelTapGesture:(id)arg1;
- (void)onCloseButtonClicked;
- (void)onActionButtonClicked;
- (void)onOrientationButtonClicked;
- (void)finderHeadImageViewDidClick:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property(readonly, nonatomic) WCFinderContact *anchorContact;
@property(readonly, nonatomic) NSString *anchorHeadImgUrl;
@property(readonly, nonatomic) NSString *anchorDisplayName;
- (void)onEnterLive;
- (double)contentRight;
- (void)hideOrientationButton;
- (void)showOrientationButton;
- (void)updateAuthInfo;
- (void)hideAnchorInfo;
- (void)showAnchorInfo;
- (id)rightButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

