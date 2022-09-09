//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveExtInfo, FinderLiveMediaSpec, FinderLiveSdkChannelInfo, FinderLiveTabInfo, NSString;

@interface FinderLiveInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endTime; // @dynamic endTime;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(retain, nonatomic) FinderLiveExtInfo *liveExtInfo; // @dynamic liveExtInfo;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) FinderLiveSdkChannelInfo *liveSdkChannelInfo; // @dynamic liveSdkChannelInfo;
@property(retain, nonatomic) FinderLiveMediaSpec *liveSpec; // @dynamic liveSpec;
@property(nonatomic) unsigned int liveStatus; // @dynamic liveStatus;
@property(nonatomic) unsigned int onlineCnt; // @dynamic onlineCnt;
@property(nonatomic) unsigned int participantCount; // @dynamic participantCount;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @dynamic rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long rewardTotalAmountInWecoin; // @dynamic rewardTotalAmountInWecoin;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;
@property(retain, nonatomic) FinderLiveTabInfo *tabInfo; // @dynamic tabInfo;

@end
