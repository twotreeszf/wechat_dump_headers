//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

@class UIButton, UIImageView, UILabel;

@interface WCFinderStartLiveHalfScreenViewController : MMUIHalfScreenViewController
{
    CDUnknownBlockType _startLiveAction;
    UIImageView *_iconImageView;
    UILabel *_topTitleLabel;
    UIButton *_cancelButton;
    UIButton *_certainButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *certainButton; // @synthesize certainButton=_certainButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType startLiveAction; // @synthesize startLiveAction=_startLiveAction;
- (void)cancel;
- (void)startLive;
- (void)updateUI;
- (_Bool)isHideCloseButton;
- (void)initButton;
- (void)viewDidLoad;

@end
