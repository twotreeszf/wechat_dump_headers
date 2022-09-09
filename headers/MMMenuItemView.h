//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MMMenuItemProtocol-Protocol.h"

@class MMMenuItem, NSString, UIImageView, UILabel;
@protocol MMMenuItemViewDelegate;

@interface MMMenuItemView : UIButton <MMMenuItemProtocol>
{
    _Bool _isShow;
    id <MMMenuItemViewDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UILabel *_subtitleLabel;
    MMMenuItem *_menuItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) MMMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <MMMenuItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMenuItemAnimatorChange:(id)arg1;
- (void)onMenuItemViewDidShow;
- (void)onItemButtonClick:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
