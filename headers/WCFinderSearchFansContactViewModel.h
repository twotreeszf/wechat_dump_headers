//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderSearchContactViewModelProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString;
@protocol WCFinderFollowSearchContactViewModelDelegate;

@interface WCFinderSearchFansContactViewModel : NSObject <WCFinderSearchContactViewModelProtocol>
{
    long long _scene;
    id <WCFinderFollowSearchContactViewModelDelegate> _delegate;
    _Bool _queryContinueFlag;
    NSString *_latestQueryText;
    NSString *_latestRequestID;
    NSData *_lastBuffer;
    NSString *_exposeItemInfo;
    NSString *_allExposeItemInfo;
    long long _lastReportExposeTimeInMs;
    NSMutableArray *_searchInfoItems;
    NSString *_searchSessionid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchSessionid; // @synthesize searchSessionid=_searchSessionid;
@property(retain, nonatomic) NSMutableArray *searchInfoItems; // @synthesize searchInfoItems=_searchInfoItems;
@property(nonatomic) long long lastReportExposeTimeInMs; // @synthesize lastReportExposeTimeInMs=_lastReportExposeTimeInMs;
@property(retain, nonatomic) NSString *allExposeItemInfo; // @synthesize allExposeItemInfo=_allExposeItemInfo;
@property(retain, nonatomic) NSString *exposeItemInfo; // @synthesize exposeItemInfo=_exposeItemInfo;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *latestRequestID; // @synthesize latestRequestID=_latestRequestID;
@property(retain, nonatomic) NSString *latestQueryText; // @synthesize latestQueryText=_latestQueryText;
@property(nonatomic) __weak id <WCFinderFollowSearchContactViewModelDelegate> delegate;
@property(nonatomic) long long scene;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)searchPlaceHolder;
- (_Bool)isFinderContact;
- (unsigned long long)cellActionType;
- (void)reportItemExposeInfo;
- (void)recordResultDisplay:(id)arg1;
- (unsigned long long)getSearchModelType;
- (id)searchInfoAtIndexPath:(id)arg1;
- (unsigned long long)searchRowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)searchNumsOfSection;
- (void)resetSearchStatus;
- (_Bool)isNoMoreData;
- (id)latestQueryString;
- (void)onQueryNextPageContact;
- (void)queryContactWith:(id)arg1;
- (_Bool)isRepetSearch:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

