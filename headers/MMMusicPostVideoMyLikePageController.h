//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMusicPostVideoBasePageController.h"

#import "MMMusicPostVideoMyLikeDataVMDelegate-Protocol.h"

@class MMMusicPostVideoCollectionFooterCell, MMMusicPostVideoMyLikeDataVM, NSString, UICollectionView;

@interface MMMusicPostVideoMyLikePageController : MMMusicPostVideoBasePageController <MMMusicPostVideoMyLikeDataVMDelegate>
{
    MMMusicPostVideoMyLikeDataVM *_dataVM;
    UICollectionView *_listView;
    MMMusicPostVideoCollectionFooterCell *m_footerView;
    _Bool m_continueFlag;
}

- (void).cxx_destruct;
- (void)onDataVMDataChanged:(_Bool)arg1;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onSwitchToThisPage:(_Bool)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

