//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveGift, NSString;

@interface FinderLiveAppMsgLiveRewardInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *comboId; // @dynamic comboId;
@property(nonatomic) unsigned int comboProductCount; // @dynamic comboProductCount;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @dynamic rewardAmountInWecoin;
@property(retain, nonatomic) FinderLiveGift *rewardGift; // @dynamic rewardGift;
@property(nonatomic) unsigned int rewardProductCount; // @dynamic rewardProductCount;
@property(retain, nonatomic) NSString *rewardProductId; // @dynamic rewardProductId;

@end

