//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class FinderClientStatus, FinderGetRelatedEntranceInfo, NSData, NSString, WCFinderCategoryInfo, WCFinderSectionInfo, WCFinderStreamLocationInfo;

@interface WCFinderGetRelatedListCGI : WCFinderBaseCgi
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_lastBuff;
    NSString *_tid;
    unsigned long long _tabType;
    WCFinderStreamLocationInfo *_location;
    NSString *_nonceID;
    NSString *_recommendReason;
    WCFinderCategoryInfo *_categoryRecommend;
    long long _scene;
    WCFinderSectionInfo *_sectionInfo;
    NSData *_streamLastBuffer;
    unsigned long long _viewScene;
    NSString *_fromUsername;
    NSString *_toUsername;
    FinderGetRelatedEntranceInfo *_relatedEntranceInfo;
    FinderClientStatus *_clientStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(retain, nonatomic) FinderGetRelatedEntranceInfo *relatedEntranceInfo; // @synthesize relatedEntranceInfo=_relatedEntranceInfo;
@property(copy, nonatomic) NSString *toUsername; // @synthesize toUsername=_toUsername;
@property(copy, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(nonatomic) unsigned long long viewScene; // @synthesize viewScene=_viewScene;
@property(retain, nonatomic) NSData *streamLastBuffer; // @synthesize streamLastBuffer=_streamLastBuffer;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderCategoryInfo *categoryRecommend; // @synthesize categoryRecommend=_categoryRecommend;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) WCFinderStreamLocationInfo *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithRequest:(id)arg1 viewerScene:(unsigned long long)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)createRequestWithFromSessionId:(id)arg1;
- (id)initWithLastBuff:(id)arg1 tid:(id)arg2 nonceID:(id)arg3 recommendReason:(id)arg4 location:(id)arg5 tabType:(unsigned long long)arg6 scene:(long long)arg7 sectionInfo:(id)arg8 categoryRecommend:(id)arg9 streamLastBuffer:(id)arg10 viewerScene:(unsigned long long)arg11 fromUsername:(id)arg12 toUsername:(id)arg13 relatedEntranceInfo:(id)arg14 clientStatus:(id)arg15 fromSessionId:(id)arg16 successful:(CDUnknownBlockType)arg17 failure:(CDUnknownBlockType)arg18;

@end

