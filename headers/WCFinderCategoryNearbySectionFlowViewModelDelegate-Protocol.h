//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderFeedContentVM;

@protocol WCFinderCategoryNearbySectionFlowViewModelDelegate <NSObject>

@optional
- (void)nnearbySectionListWillChangeOriginDataIndex;
- (void)nearbySectionListDataWillRemoved:(WCFinderFeedContentVM *)arg1;
- (void)nearbySectionListEmpty;
- (void)nearbySectionListDataChanged;
- (void)nearbySectionListDeleteDataItemVM:(WCFinderFeedContentVM *)arg1;
- (void)nearbySectionListFetchFailWithErrorCode:(int)arg1;
- (void)nearbySectionListNoMoreData;
- (void)nearbySectionListLoadMoreFinished:(NSArray *)arg1;
@end

