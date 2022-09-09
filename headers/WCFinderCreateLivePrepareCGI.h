//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderBaseCgi.h"

@class NSString;

@interface WCFinderCreateLivePrepareCGI : WCFinderBaseCgi
{
    NSString *_finderUsername;
    NSString *_micFinderUsername;
    unsigned long long _micObjectId;
    unsigned long long _micLiveId;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(nonatomic) unsigned long long micLiveId; // @synthesize micLiveId=_micLiveId;
@property(nonatomic) unsigned long long micObjectId; // @synthesize micObjectId=_micObjectId;
@property(copy, nonatomic) NSString *micFinderUsername; // @synthesize micFinderUsername=_micFinderUsername;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 micFinderUsername:(id)arg2 micObjectId:(unsigned long long)arg3 micLiveId:(unsigned long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end
