//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderMusicFeedVMDelegate-Protocol.h"

@class MMMusicPlayerContoller, NSString, UIButton, UIImageView, UILabel, WCFinderAnimationLoadingView, WCFinderMusicFeedVM;
@protocol WCFinderProfileMusicViewDelegate;

@interface WCFinderProfileMusicView : UIView <WCFinderMusicFeedVMDelegate>
{
    id <WCFinderProfileMusicViewDelegate> _delegate;
    WCFinderMusicFeedVM *_feedVM;
    UIView *_coverView;
    UIView *_viewCountContainer;
    UILabel *_viewCountLabel;
    UIView *_likeIconView;
    UIImageView *_mvIconView;
    MMMusicPlayerContoller *_musicPlayerCtrl;
    UILabel *_titleLabel;
    UILabel *_authorLabel;
    UILabel *_descLabel;
    WCFinderAnimationLoadingView *_loadingView;
    UIImageView *_failedIconView;
    UILabel *_statusLabel;
    UILabel *_typeLabel;
    UIButton *_delButton;
    UIButton *_retryButton;
    UIView *_leftContainer;
    UIView *_rightContainer;
}

+ (double)displayHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property(retain, nonatomic) UIView *leftContainer; // @synthesize leftContainer=_leftContainer;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UIButton *delButton; // @synthesize delButton=_delButton;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *failedIconView; // @synthesize failedIconView=_failedIconView;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMMusicPlayerContoller *musicPlayerCtrl; // @synthesize musicPlayerCtrl=_musicPlayerCtrl;
@property(retain, nonatomic) UIImageView *mvIconView; // @synthesize mvIconView=_mvIconView;
@property(retain, nonatomic) UIView *likeIconView; // @synthesize likeIconView=_likeIconView;
@property(retain, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) UIView *viewCountContainer; // @synthesize viewCountContainer=_viewCountContainer;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderMusicFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(nonatomic) __weak id <WCFinderProfileMusicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickDelete;
- (void)onClickRetry;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)configLoadingView:(id)arg1 hidden:(_Bool)arg2;
- (id)createButton:(id)arg1 iconName:(id)arg2 action:(SEL)arg3;
- (void)feedVMDidUpdate:(id)arg1;
- (void)layoutRightViewWithStyle:(long long)arg1;
- (void)layoutContainer:(id)arg1 spacing:(double)arg2 maxWidth:(double)arg3;
- (void)layoutSubviews;
- (id)statusTextForStatus:(long long)arg1;
- (id)fetchCovertDisplayViewFromContainer:(id)arg1 viewClass:(Class)arg2;
- (id)genMusicDefaultIcon;
- (_Bool)updateCoverViewWithMediaInfo:(id)arg1 coverUrl:(id)arg2;
- (void)updateTypeInfo:(id)arg1;
- (void)updateLabel:(id)arg1 hidden:(_Bool)arg2 text:(id)arg3 fatWidth:(double)arg4;
- (void)update:(id)arg1;
- (void)addSubviews:(id)arg1 toRoot:(id)arg2;
- (void)setupUI;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
