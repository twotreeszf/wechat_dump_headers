//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DeviceFollowItem, MMHeadImageView, UILabel;

@interface BraceletFocusContentView : UIView
{
    UILabel *_scoreLabel;
    UILabel *_nickNameLabel;
    MMHeadImageView *_headImageView;
    DeviceFollowItem *_followItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DeviceFollowItem *followItem; // @synthesize followItem=_followItem;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 followItem:(id)arg2;

@end

