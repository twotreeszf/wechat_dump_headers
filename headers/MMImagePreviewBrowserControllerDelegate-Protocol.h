//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EditImageAttr, MMAsset, MMAssetInfo, NSString, SightDraft, WCFinderDataItem, WCFinderReportPostStateModel;

@protocol MMImagePreviewBrowserControllerDelegate <NSObject>
- (void)cancelSelectFromImagePreview;
- (struct CGRect)assetViewFrameGlobal:(MMAssetInfo *)arg1;
- (void)sendImageWithEditImageAttr:(EditImageAttr *)arg1;
- (void)sendVideoWithDraft:(SightDraft *)arg1;
- (void)sendImageFromScene:(long long)arg1;
- (unsigned long long)selectedAssetInfosCount;
- (long long)indexInSelectedAssetInfosForAssetInfo:(MMAssetInfo *)arg1;
- (void)onMoveSelectedInfo:(MMAssetInfo *)arg1 toIndex:(unsigned long long)arg2;
- (void)onInsertSelectedInfo:(MMAssetInfo *)arg1 atIndex:(unsigned long long)arg2;
- (void)onRemoveSelectedInfo:(MMAssetInfo *)arg1;
- (void)onOriginImageCheckChanged;
- (void)onFinishEditAssetInfo:(MMAssetInfo *)arg1;

@optional
- (void)onPostFinderViewControllerCancel;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithDataItem:(WCFinderDataItem *)arg1 postStateModel:(WCFinderReportPostStateModel *)arg2;
- (_Bool)canSelectAssetInPreview:(MMAssetInfo *)arg1;
- (void)waitingToPreviewIndex:(long long)arg1 assetId:(NSString *)arg2;
- (void)waitingToSelectIndex:(long long)arg1 assetId:(NSString *)arg2;
- (void)sendVideoWithAsset:(MMAsset *)arg1;
@end

