//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderFeedContentHeaderView.h"

#import "WCFinderContactExt-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"

@class CAGradientLayer, MMUIButton, MMWebImageView, NSString, UILabel, UIView, WCFinderContact, WCFinderHeadImageView, WCFinderLiveNowView;

@interface WCFinderFullFeedContentSummaryHeaderView : WCFinderFeedContentHeaderView <WCFinderHeadImageViewDelegate, WCFinderContactExt>
{
    _Bool _shouldMoreBtnHidden;
    _Bool _shouldShowFollowTips;
    _Bool _hiddenAuthorAppendDescLabel;
    _Bool _showLiveState;
    _Bool _showFollowBtn;
    UIView *_avatarContainer;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    WCFinderContact *_contact;
    MMWebImageView *_authInfoIconView;
    UIView *_topLine;
    UILabel *_followTipsLabel;
    MMUIButton *_moreBtn;
    UIView *_gestureView;
    WCFinderLiveNowView *_liveView;
    CAGradientLayer *_gradientLayer;
    UILabel *_authorAppendDescLabel;
    MMUIButton *_followBtn;
    NSString *_authorAppendDescTips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *authorAppendDescTips; // @synthesize authorAppendDescTips=_authorAppendDescTips;
@property(nonatomic) _Bool showFollowBtn; // @synthesize showFollowBtn=_showFollowBtn;
@property(retain, nonatomic) MMUIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *authorAppendDescLabel; // @synthesize authorAppendDescLabel=_authorAppendDescLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool showLiveState; // @synthesize showLiveState=_showLiveState;
@property(retain, nonatomic) WCFinderLiveNowView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *followTipsLabel; // @synthesize followTipsLabel=_followTipsLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) MMWebImageView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarContainer; // @synthesize avatarContainer=_avatarContainer;
@property(nonatomic) _Bool hiddenAuthorAppendDescLabel; // @synthesize hiddenAuthorAppendDescLabel=_hiddenAuthorAppendDescLabel;
- (_Bool)shouldShowFollowTips;
- (_Bool)shouldMoreBtnHidden;
- (_Bool)followAuthorBtnHiddenState;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)clickAvator;
- (void)onClickFollowBtn:(id)arg1;
- (void)didClickMoreBtn:(id)arg1;
- (void)setShouldShowFollowTips:(_Bool)arg1;
- (void)setShouldMoreBtnHidden:(_Bool)arg1;
- (void)resetReuseState;
- (void)updateGestureViewSize;
- (void)adjustSubViewsLayout;
- (void)updateNicknameLabelWidth;
- (void)adjustUIMarginLayoutFrame;
- (void)updateMoreActionUI;
- (void)updateFollowBtn;
- (void)updateLiveView;
- (void)updateFollowTipsLabel:(_Bool)arg1;
- (void)updateAuthInfoIconView;
- (void)updateNickNameLabel:(id)arg1;
- (void)updateAccessibility;
- (void)reloadHeaderWithContact:(id)arg1;
- (void)updateHeaderContentWithContact:(id)arg1 showLiveState:(_Bool)arg2 authorAppendDescTips:(id)arg3;
- (void)updateHeaderContentWithContact:(id)arg1 showLiveState:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
