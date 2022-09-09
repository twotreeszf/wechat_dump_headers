//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderLocationServiceExt-Protocol.h"
#import "WCFinderPostingCommentExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString;
@protocol WCFinderFeedNearbyViewModelDelegate;

@interface WCFinderFeedNearbyViewModel : NSObject <WCFinderDataItemExt, WCFinderRedDotNotifyExt, WCFinderPostingCommentExt, WCFinderLocationServiceExt>
{
    _Bool _isLocationServiceAuthorized;
    _Bool _continueFlag;
    id <WCFinderFeedNearbyViewModelDelegate> _delegate;
    NSArray *_commentFailTidArray;
    NSMutableArray *_allSectionItems;
    unsigned long long _unReadMSGCount;
    unsigned long long _commentFailTidCount;
    NSString *_userCity;
    NSString *_enterDataReportID;
    unsigned long long _refreshTime;
    NSData *_lastBuff;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(copy, nonatomic) NSString *enterDataReportID; // @synthesize enterDataReportID=_enterDataReportID;
@property(nonatomic) _Bool isLocationServiceAuthorized; // @synthesize isLocationServiceAuthorized=_isLocationServiceAuthorized;
@property(retain, nonatomic) NSString *userCity; // @synthesize userCity=_userCity;
@property(readonly, nonatomic) unsigned long long commentFailTidCount; // @synthesize commentFailTidCount=_commentFailTidCount;
@property(readonly, nonatomic) unsigned long long unReadMSGCount; // @synthesize unReadMSGCount=_unReadMSGCount;
@property(retain, nonatomic) NSMutableArray *allSectionItems; // @synthesize allSectionItems=_allSectionItems;
@property(retain, nonatomic) NSArray *commentFailTidArray; // @synthesize commentFailTidArray=_commentFailTidArray;
@property(nonatomic) __weak id <WCFinderFeedNearbyViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAllCachedDataItem;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(_Bool)arg1;
- (unsigned long long)feedViewControllerScene;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)appendFinderNearbySections:(id)arg1;
- (void)fetchLastestData;
- (void)requestNextPageData;
- (_Bool)isEnableNextPageFetch;
- (void)requestFirstPageData;
- (_Bool)isDataSection:(unsigned long long)arg1;
- (_Bool)isDataIndexPath:(id)arg1;
- (id)vaildTopIndexPath;
- (unsigned long long)rowNumsWithSection:(unsigned long long)arg1;
- (unsigned long long)sectionNums;
- (_Bool)isDataEmpty;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

