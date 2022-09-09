//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "WCEditFilterHeaderViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, UIImage, WCEditFilterHeaderView, XNetEffectManager;
@protocol WCEditFilterToolAttrViewDelegate;

@interface WCEditFilterToolAttrView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, WCEditFilterHeaderViewDelegate>
{
    _Bool _didChangeFilter;
    UIImage *_originalImage;
    long long _filterIndex;
    long long _filterValue;
    id <WCEditFilterToolAttrViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCEditFilterHeaderView *_headerView;
    unsigned long long _filterCount;
    XNetEffectManager *_effectManager;
    NSIndexPath *_selectedIndexPath;
    NSMutableArray *_filterValueArray;
    NSMutableArray *_filterCellImageArray;
    NSArray *_filterNameArray;
    NSMutableDictionary *_filterDisplayImageDic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didChangeFilter; // @synthesize didChangeFilter=_didChangeFilter;
@property(retain, nonatomic) NSMutableDictionary *filterDisplayImageDic; // @synthesize filterDisplayImageDic=_filterDisplayImageDic;
@property(retain, nonatomic) NSArray *filterNameArray; // @synthesize filterNameArray=_filterNameArray;
@property(retain, nonatomic) NSMutableArray *filterCellImageArray; // @synthesize filterCellImageArray=_filterCellImageArray;
@property(retain, nonatomic) NSMutableArray *filterValueArray; // @synthesize filterValueArray=_filterValueArray;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) XNetEffectManager *effectManager; // @synthesize effectManager=_effectManager;
@property(nonatomic) unsigned long long filterCount; // @synthesize filterCount=_filterCount;
@property(retain, nonatomic) WCEditFilterHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCEditFilterToolAttrViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long filterValue; // @synthesize filterValue=_filterValue;
@property(nonatomic) long long filterIndex; // @synthesize filterIndex=_filterIndex;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void)sliderValueDidChange:(int)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)imageWithImage:(id)arg1 scaledToFillSize:(struct CGSize)arg2;
- (void)reloadCollectionView;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

