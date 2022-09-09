//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class FinderClientStatus, NSData, NSString;

@interface WCFinderUserPageCGI : WCFinderBaseCgi
{
    _Bool _needFansCount;
    int _tabType;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSString *_username;
    NSString *_pageMd5;
    unsigned long long _maxTid;
    NSData *_lastBuffer;
    unsigned long long _reportScene;
    FinderClientStatus *_clientStatus;
    unsigned long long _topicId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) FinderClientStatus *clientStatus; // @synthesize clientStatus=_clientStatus;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool needFansCount; // @synthesize needFansCount=_needFansCount;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(copy, nonatomic) NSString *pageMd5; // @synthesize pageMd5=_pageMd5;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithContactUsername:(id)arg1 maxTid:(unsigned long long)arg2 reportScene:(unsigned long long)arg3 needFansCount:(_Bool)arg4 lastBuffer:(id)arg5 tabType:(int)arg6 topicId:(unsigned long long)arg7 clientStatus:(id)arg8 successful:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;

@end

