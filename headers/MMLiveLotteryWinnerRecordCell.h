//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class FinderLiveLotteryContact, MMCPLabel, MMHeadImageView;
@protocol MMLiveLotteryWinnerRecordCellDelegate;

@interface MMLiveLotteryWinnerRecordCell : MMTableViewCell
{
    _Bool _isAudience;
    id <MMLiveLotteryWinnerRecordCellDelegate> _cellDelegate;
    MMHeadImageView *_headImageView;
    MMCPLabel *_displayNameLabel;
    FinderLiveLotteryContact *_lotteryContact;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
@property(retain, nonatomic) FinderLiveLotteryContact *lotteryContact; // @synthesize lotteryContact=_lotteryContact;
@property(retain, nonatomic) MMCPLabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) __weak id <MMLiveLotteryWinnerRecordCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)prepareForReuse;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithWinnerContact:(id)arg1 isAudience:(_Bool)arg2;
- (void)initNameLabel;
- (void)initHeaderImageView;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)lotteryWinnerRecordHeadImageViewRightMargin;
- (double)lotteryWinnerRecordCellInnerPadding;

@end
