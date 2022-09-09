//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, SessionFriendCommentInfo;

@interface FinderSessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long actionFeedId; // @dynamic actionFeedId;
@property(nonatomic) unsigned long long actionTimeMs; // @dynamic actionTimeMs;
@property(nonatomic) unsigned int ccardEf7D; // @dynamic ccardEf7D;
@property(nonatomic) unsigned int ccardEi; // @dynamic ccardEi;
@property(nonatomic) unsigned long long ccardEid; // @dynamic ccardEid;
@property(nonatomic) unsigned int ccardIcp; // @dynamic ccardIcp;
@property(nonatomic) unsigned int ccardIic; // @dynamic ccardIic;
@property(retain, nonatomic) NSString *clientReportBuff; // @dynamic clientReportBuff;
@property(nonatomic) unsigned int commentExposeCount; // @dynamic commentExposeCount;
@property(nonatomic) unsigned int commentLikeExposeCount; // @dynamic commentLikeExposeCount;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(nonatomic) unsigned long long createTime; // @dynamic createTime;
@property(nonatomic) unsigned int curCommentCount; // @dynamic curCommentCount;
@property(nonatomic) unsigned int curLikeCount; // @dynamic curLikeCount;
@property(nonatomic) unsigned int deliveryScene; // @dynamic deliveryScene;
@property(nonatomic) unsigned long long deliveryTime; // @dynamic deliveryTime;
@property(retain, nonatomic) NSString *devicePlatform; // @dynamic devicePlatform;
@property(nonatomic) unsigned int deviceTypeId; // @dynamic deviceTypeId;
@property(nonatomic) unsigned int downloadSpeedKbps; // @dynamic downloadSpeedKbps;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int favExposeCount; // @dynamic favExposeCount;
@property(nonatomic) unsigned int feedPos; // @dynamic feedPos;
@property(nonatomic) unsigned int finWatchExposeCount; // @dynamic finWatchExposeCount;
@property(nonatomic) unsigned long long finderUin; // @dynamic finderUin;
@property(retain, nonatomic) SessionFriendCommentInfo *friendCommentInfo; // @dynamic friendCommentInfo;
@property(retain, nonatomic) NSString *friendLikedList; // @dynamic friendLikedList;
@property(retain, nonatomic) NSString *fromSessionId; // @dynamic fromSessionId;
@property(nonatomic) unsigned long long hotTabCardSendTimeUs; // @dynamic hotTabCardSendTimeUs;
@property(nonatomic) _Bool isChild; // @dynamic isChild;
@property(nonatomic) unsigned int isLiveFeed; // @dynamic isLiveFeed;
@property(nonatomic) unsigned int isLiveFinderuser; // @dynamic isLiveFinderuser;
@property(nonatomic) unsigned int isLongVideo; // @dynamic isLongVideo;
@property(nonatomic) unsigned int isRefreshedRelikeFeed; // @dynamic isRefreshedRelikeFeed;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(nonatomic) unsigned int newFriendLikeCount; // @dynamic newFriendLikeCount;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long parentId; // @dynamic parentId;
@property(nonatomic) unsigned int parentMediaType; // @dynamic parentMediaType;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(nonatomic) float rankScore; // @dynamic rankScore;
@property(retain, nonatomic) NSMutableArray *recallIndex; // @dynamic recallIndex;
@property(retain, nonatomic) NSMutableArray *recallInfo; // @dynamic recallInfo;
@property(retain, nonatomic) NSMutableArray *recallTypes; // @dynamic recallTypes;
@property(nonatomic) unsigned int recommendSystem; // @dynamic recommendSystem;
@property(nonatomic) unsigned int recommendType; // @dynamic recommendType;
@property(retain, nonatomic) NSString *recommendWording; // @dynamic recommendWording;
@property(retain, nonatomic) NSString *referText; // @dynamic referText;
@property(nonatomic) unsigned int refreshCount; // @dynamic refreshCount;
@property(nonatomic) unsigned long long relatedFeedId; // @dynamic relatedFeedId;
@property(retain, nonatomic) NSString *relatedFeedIdStr; // @dynamic relatedFeedIdStr;
@property(nonatomic) unsigned long long relatedRootFeedId; // @dynamic relatedRootFeedId;
@property(nonatomic) unsigned long long relatedSessionId; // @dynamic relatedSessionId;
@property(nonatomic) unsigned int reportColumnCardIdkey; // @dynamic reportColumnCardIdkey;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *rootFeedIdStr; // @dynamic rootFeedIdStr;
@property(retain, nonatomic) NSData *secreteData; // @dynamic secreteData;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned long long setConditionFlag; // @dynamic setConditionFlag;
@property(nonatomic) unsigned long long tabSessionId; // @dynamic tabSessionId;
@property(nonatomic) unsigned long long tabType; // @dynamic tabType;
@property(retain, nonatomic) NSString *tagId; // @dynamic tagId;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *topicText; // @dynamic topicText;
@property(nonatomic) unsigned int totalFriendLikeCount; // @dynamic totalFriendLikeCount;
@property(nonatomic) unsigned int vidLen; // @dynamic vidLen;
@property(nonatomic) unsigned long long videoId; // @dynamic videoId;

@end

