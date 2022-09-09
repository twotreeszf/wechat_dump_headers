//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMCPLabel, MMHeadImageView, MMLiveHeatAndIconButton, MMLiveUserStateItem, MMUIImageView, MMUILabel, UIView;
@protocol MMLiveOnlineStateTableViewCellDelegate;

@interface MMLiveOnlineStateTableViewCell : MMTableViewCell
{
    _Bool _bNeedSeparatorLine;
    unsigned int _rank;
    id <MMLiveOnlineStateTableViewCellDelegate> _cellDelegate;
    MMUILabel *_rankLabel;
    MMHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    MMUIImageView *_banCommentIconImageView;
    MMUIImageView *_moreImageView;
    MMUILabel *_rewardAmountLabel;
    MMLiveHeatAndIconButton *_selectGiftButton;
    UIView *_separatorLine;
    MMLiveUserStateItem *_onlineUserItem;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(retain, nonatomic) MMLiveUserStateItem *onlineUserItem; // @synthesize onlineUserItem=_onlineUserItem;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMLiveHeatAndIconButton *selectGiftButton; // @synthesize selectGiftButton=_selectGiftButton;
@property(retain, nonatomic) MMUILabel *rewardAmountLabel; // @synthesize rewardAmountLabel=_rewardAmountLabel;
@property(retain, nonatomic) MMUIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) MMUIImageView *banCommentIconImageView; // @synthesize banCommentIconImageView=_banCommentIconImageView;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) _Bool bNeedSeparatorLine; // @synthesize bNeedSeparatorLine=_bNeedSeparatorLine;
@property(nonatomic) __weak id <MMLiveOnlineStateTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)onSelectGiftButtonClicked;
- (void)onHeadImageClicked:(id)arg1;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithOnlineUserItem:(id)arg1 showRewardAmount:(_Bool)arg2 showSelectGiftBtn:(_Bool)arg3 rank:(unsigned int)arg4;
- (void)layoutSelectGiftBtn;
- (void)layoutRankLabel;
- (void)initSeperatorLine;
- (void)initRewardAmountLabel;
- (void)initMoreImgView;
- (void)initBanCommentIconImageView;
- (void)initNameLabel;
- (void)initHeaderImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

