//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveTableStyleCommentPubbleSignTextCell.h"

@class MMUILabel, MMWebImageView;

@interface MMFinderLiveTableStyleComboLiveRewardCell : MMFinderLiveTableStyleCommentPubbleSignTextCell
{
    MMWebImageView *_giftImageView;
    MMUILabel *_giftCountLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) MMWebImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
- (void)updateGiftCountLabelOrigin;
- (void)layoutGiftCountLabel;
- (void)updateGiftImageViewOrigin;
- (void)layoutGiftImageView;
- (void)updateCommentLabelOrigin;
- (void)updateSignLabelOrigin;
- (void)layoutUI;
- (_Bool)isUITypeValid;
- (id)signText;

@end

