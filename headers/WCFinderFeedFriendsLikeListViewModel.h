//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCFinderFeedFriendsLikeListExt-Protocol.h"

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderFeedFriendsLikeListViewModelDelegate;

@interface WCFinderFeedFriendsLikeListViewModel : MMObject <WCFinderFeedFriendsLikeListExt>
{
    _Bool _continueFlag;
    unsigned long long _friendsLikeTotalCount;
    id <WCFinderFeedFriendsLikeListViewModelDelegate> _delegate;
    NSString *_objectID;
    NSString *_nonceID;
    unsigned long long _fetchScene;
    unsigned long long _reportScene;
    NSMutableSet *_likeIdSet;
    NSData *_lastBuffer;
    NSMutableArray *_friendsLikeInfoArray;
    long long _finderObjectType;
}

- (void).cxx_destruct;
@property(nonatomic) long long finderObjectType; // @synthesize finderObjectType=_finderObjectType;
@property(retain, nonatomic) NSMutableArray *friendsLikeInfoArray; // @synthesize friendsLikeInfoArray=_friendsLikeInfoArray;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableSet *likeIdSet; // @synthesize likeIdSet=_likeIdSet;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long fetchScene; // @synthesize fetchScene=_fetchScene;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) __weak id <WCFinderFeedFriendsLikeListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long friendsLikeTotalCount; // @synthesize friendsLikeTotalCount=_friendsLikeTotalCount;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
- (void)onFinderFeedFriendsLikeStatusChangedWithObjectID:(id)arg1 index:(unsigned long long)arg2 likeStatus:(_Bool)arg3;
@property(readonly, nonatomic) NSString *titleFormatString;
- (id)convertFinderLikeInfoToFinderComment:(id)arg1;
- (void)fetchFriendsLikeInfoIsFirstPage:(_Bool)arg1;
- (void)friendsLikeDoLikeWithIndex:(unsigned long long)arg1 doLike:(_Bool)arg2;
- (void)friendsLikeOptionWithObjectID:(id)arg1 index:(unsigned long long)arg2 optionType:(unsigned long long)arg3;
- (void)fetchNextFriendsLikeInfo;
- (void)fetchFirstFriendsLikeInfo;
- (void)getLocalFriendsLikeInfo;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1 nonceID:(id)arg2 feedLikedListScene:(unsigned long long)arg3 reportScene:(unsigned long long)arg4 finderObjectType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

