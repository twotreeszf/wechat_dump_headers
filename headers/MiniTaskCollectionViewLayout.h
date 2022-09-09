//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, NSMutableSet;

@interface MiniTaskCollectionViewLayout : UICollectionViewLayout
{
    NSMutableSet *_changedCells;
    double _viewHeight;
    double _itemHeight;
    NSMutableArray *_attributesArray;
    struct CGSize _itemSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *attributesArray; // @synthesize attributesArray=_attributesArray;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double viewHeight; // @synthesize viewHeight=_viewHeight;
@property(retain, nonatomic) NSMutableSet *changedCells; // @synthesize changedCells=_changedCells;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1 andCellCount:(long long)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)calculateLayoutAttributesForItemAtIndexPath:(id)arg1 andCellCount:(long long)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)preCalculatePropertiesForLayout;
- (void)prepareLayout;
- (id)init;

@end

