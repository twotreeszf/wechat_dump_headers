//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCCommitViewResultDelegate-Protocol.h"
#import "WCFinderPostDataItemExt-Protocol.h"
#import "WCFinderTopicDataKeyExt-Protocol.h"

@class FinderLocation, FinderTopicBgmInfo, ForwardMessageLogicController, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderSectionInfo, WCFinderTopicInfo;
@protocol WCFinderEventViewModelDelegate;

@interface WCFinderEventViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderPostDataItemExt, WCFinderTopicDataKeyExt>
{
    _Bool _queryContinueFlag;
    id <WCFinderEventViewModelDelegate> _delegate;
    NSMutableArray *_poiTopicRecommendStringArray;
    NSMutableArray *_poiTopicRecommendItemArray;
    NSString *_topicDetailLocation;
    WCFinderTopicInfo *_topicInfo;
    unsigned long long _topicType;
    unsigned long long _refreshTime;
    FinderTopicBgmInfo *_bgmInfo;
    NSString *_encryptedTopicId;
    unsigned long long _state;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSMutableArray *_contentVMArray;
    NSData *_lastBuffer;
    unsigned long long _topicTotalCount;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_refObjectid;
    WCFinderTopicInfo *_poiTopicRecommend;
    NSMutableSet *_poiTopicRecommendItemsSet;
    ForwardMessageLogicController *_forwardLogic;
    FinderLocation *_location;
    WCFinderSectionInfo *_sectionInfo;
    unsigned long long _eventTopicId;
    long long _tabType;
    long long _fromType;
    unsigned long long _patMusicPermission;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long patMusicPermission; // @synthesize patMusicPermission=_patMusicPermission;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long eventTopicId; // @synthesize eventTopicId=_eventTopicId;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableSet *poiTopicRecommendItemsSet; // @synthesize poiTopicRecommendItemsSet=_poiTopicRecommendItemsSet;
@property(retain, nonatomic) WCFinderTopicInfo *poiTopicRecommend; // @synthesize poiTopicRecommend=_poiTopicRecommend;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long topicTotalCount; // @synthesize topicTotalCount=_topicTotalCount;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *contentVMArray; // @synthesize contentVMArray=_contentVMArray;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *encryptedTopicId; // @synthesize encryptedTopicId=_encryptedTopicId;
@property(retain, nonatomic) FinderTopicBgmInfo *bgmInfo; // @synthesize bgmInfo=_bgmInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicDetailLocation; // @synthesize topicDetailLocation=_topicDetailLocation;
@property(retain, nonatomic) NSMutableArray *poiTopicRecommendItemArray; // @synthesize poiTopicRecommendItemArray=_poiTopicRecommendItemArray;
@property(retain, nonatomic) NSMutableArray *poiTopicRecommendStringArray; // @synthesize poiTopicRecommendStringArray=_poiTopicRecommendStringArray;
@property(nonatomic) __weak id <WCFinderEventViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderTopicFeedOrderChanged:(unsigned long long)arg1;
- (void)finderFeedOfTopicBeDeleteWithTid:(id)arg1;
- (void)onFinderDataItemPostUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemPostUpLoadSuccessful:(id)arg1 localTid:(id)arg2;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (void)onFinderDataItemStartUpLoad:(id)arg1;
- (id)getFirstContentVM;
- (unsigned long long)feedViewControllerScene;
- (id)getTopicsArray;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)closeEvent;
- (id)getAntispamToastTips;
- (id)getMusicLyricsWording;
- (id)getPatMusicTitleWording;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (unsigned long long)getTopicTotalCount;
- (id)dataItemAtIndex:(unsigned long long)arg1;
- (void)reportClickActionInfo:(id)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)numsOfSection;
- (void)resetSearchStatus;
- (id)genTopicPageTagTitle;
- (id)streamReportPageTag;
- (_Bool)isDataEmpty;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)appendDataItems:(id)arg1;
- (void)removeFeedWithTid:(id)arg1;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestNextPageData;
- (void)getTopicListWithType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6 poiTopicRecommend:(id)arg7 eventTopicId:(unsigned long long)arg8 tabType:(long long)arg9 fromType:(long long)arg10;
- (void)loadCacheResponseWithType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6 cacheResponse:(id)arg7 cacheDataItems:(id)arg8 sectionInfo:(id)arg9 tabType:(long long)arg10 fromType:(long long)arg11;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

