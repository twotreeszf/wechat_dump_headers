//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol WCFinderFeedFriendsLikeGuideViewControllerDelegate;

@interface WCFinderFeedFriendsLikeGuideViewController : MMWindowViewController
{
    id <WCFinderFeedFriendsLikeGuideViewControllerDelegate> _delegate;
    NSString *_tipsTitle;
    NSString *_tipsSubtitle;
    NSString *_cancelButtonTitle;
    NSString *_confirmButtonTitle;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *tipsSubtitle; // @synthesize tipsSubtitle=_tipsSubtitle;
@property(copy, nonatomic) NSString *tipsTitle; // @synthesize tipsTitle=_tipsTitle;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeGuideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideMyself;
- (void)onConfirm;
- (void)onCancel;
- (void)setupSubviews;
- (void)showTips;
- (void)viewDidLoad;

@end

