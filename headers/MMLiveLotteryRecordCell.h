//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMCPLabel, MMFinderLiveLotteryRecord, MMUIImageView;

@interface MMLiveLotteryRecordCell : MMTableViewCell
{
    MMCPLabel *_liveRecordNameLabel;
    MMUIImageView *_arrowImageView;
    MMFinderLiveLotteryRecord *_lotteryRecord;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLotteryRecord *lotteryRecord; // @synthesize lotteryRecord=_lotteryRecord;
@property(retain, nonatomic) MMUIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMCPLabel *liveRecordNameLabel; // @synthesize liveRecordNameLabel=_liveRecordNameLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithLotteryRecord:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

