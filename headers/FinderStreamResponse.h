//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderCategoryRecommend, FinderContactRecommend, FinderLivePreloadInfo, FinderPreloadInfo, FinderSectionInfo, FinderStreamLayoutInfo, FinderStreamPrefechTimeIntervalConf, FinderTopicRecommend, NSData, NSMutableArray, NSString;

@interface FinderStreamResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *curLocation; // @dynamic curLocation;
@property(retain, nonatomic) NSData *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) FinderCategoryRecommend *finderCategoryRecommends; // @dynamic finderCategoryRecommends;
@property(retain, nonatomic) FinderContactRecommend *finderContactRecommend; // @dynamic finderContactRecommend;
@property(retain, nonatomic) FinderTopicRecommend *finderTopicRecommends; // @dynamic finderTopicRecommends;
@property(nonatomic) unsigned int forceChangePrefetchResult; // @dynamic forceChangePrefetchResult;
@property(nonatomic) unsigned int gethistoryNow; // @dynamic gethistoryNow;
@property(retain, nonatomic) NSString *historyEndWording; // @dynamic historyEndWording;
@property(retain, nonatomic) NSString *historyHeadWording; // @dynamic historyHeadWording;
@property(retain, nonatomic) FinderStreamPrefechTimeIntervalConf *intervalConf; // @dynamic intervalConf;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderStreamLayoutInfo *layoutInfo; // @dynamic layoutInfo;
@property(retain, nonatomic) NSMutableArray *liveObjects; // @dynamic liveObjects;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @dynamic livePreloadInfo;
@property(nonatomic) unsigned int needClear; // @dynamic needClear;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) NSString *oob; // @dynamic oob;
@property(nonatomic) unsigned int prefetchLastFeedCount; // @dynamic prefetchLastFeedCount;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int retFlag; // @dynamic retFlag;
@property(retain, nonatomic) FinderSectionInfo *sectionInfo; // @dynamic sectionInfo;

@end
