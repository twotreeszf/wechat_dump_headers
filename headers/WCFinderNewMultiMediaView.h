//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EditVideoBGMPlayerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class EditVideoBGMPlayer, MMTimer, NSString, UICollectionView, UIImage, UIImageView, UILabel, UIPageControl, WCFinderDataItem, WCFinderProgressBarStatusInfo;
@protocol WCFinderFeedContentMediaActionProtocol, WCFinderNewMultiMediaViewDelegate;

@interface WCFinderNewMultiMediaView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, EditVideoBGMPlayerDelegate>
{
    _Bool _selectEnable;
    _Bool _hiddenOtherControlElement;
    _Bool _hiddenDefaultBackground;
    _Bool _lastPhotoScrollByManual;
    id <WCFinderFeedContentMediaActionProtocol> _delegate;
    id <WCFinderNewMultiMediaViewDelegate> _postDelegate;
    long long _dataScene;
    NSString *_dataTid;
    long long _dataPos;
    double _feedFetchTime;
    WCFinderDataItem *_dataItem;
    UIView *_warningView;
    UILabel *_warningLabel;
    UIPageControl *_pageCtrl;
    unsigned long long _currentPage;
    UICollectionView *_mediaCollectionView;
    WCFinderProgressBarStatusInfo *_progressBarStatusForReuse;
    UIImage *_tmpThumbImage;
    UIImageView *_privateTipsView;
    MMTimer *_collectionShufflingTimer;
    EditVideoBGMPlayer *_bgmPlayer;
    double _loadingTopOffset;
    struct CGSize _mediaSize;
}

+ (double)bottomProgressBlankHeight;
+ (double)calculateWidthForGivingHeight:(double)arg1 withDataItem:(id)arg2;
+ (double)mediaHeighForDataItem:(id)arg1 width:(double)arg2;
+ (double)pureMediaHeighForDataItem:(id)arg1 width:(double)arg2;
+ (id)mediaWithDataItem:(id)arg1 width:(double)arg2 currentSelectIndex:(unsigned long long)arg3 isEnableTopAuthorInfoOnMediaArea:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool lastPhotoScrollByManual; // @synthesize lastPhotoScrollByManual=_lastPhotoScrollByManual;
@property(nonatomic) double loadingTopOffset; // @synthesize loadingTopOffset=_loadingTopOffset;
@property(retain, nonatomic) EditVideoBGMPlayer *bgmPlayer; // @synthesize bgmPlayer=_bgmPlayer;
@property(retain, nonatomic) MMTimer *collectionShufflingTimer; // @synthesize collectionShufflingTimer=_collectionShufflingTimer;
@property(retain, nonatomic) UIImageView *privateTipsView; // @synthesize privateTipsView=_privateTipsView;
@property(retain, nonatomic) UIImage *tmpThumbImage; // @synthesize tmpThumbImage=_tmpThumbImage;
@property(retain, nonatomic) WCFinderProgressBarStatusInfo *progressBarStatusForReuse; // @synthesize progressBarStatusForReuse=_progressBarStatusForReuse;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(retain, nonatomic) UICollectionView *mediaCollectionView; // @synthesize mediaCollectionView=_mediaCollectionView;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) UIView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool hiddenDefaultBackground; // @synthesize hiddenDefaultBackground=_hiddenDefaultBackground;
@property(nonatomic) _Bool hiddenOtherControlElement; // @synthesize hiddenOtherControlElement=_hiddenOtherControlElement;
@property(nonatomic) double feedFetchTime; // @synthesize feedFetchTime=_feedFetchTime;
@property(nonatomic) long long dataPos; // @synthesize dataPos=_dataPos;
@property(retain, nonatomic) NSString *dataTid; // @synthesize dataTid=_dataTid;
@property(nonatomic) long long dataScene; // @synthesize dataScene=_dataScene;
@property(nonatomic) _Bool selectEnable; // @synthesize selectEnable=_selectEnable;
@property(nonatomic) __weak id <WCFinderNewMultiMediaViewDelegate> postDelegate; // @synthesize postDelegate=_postDelegate;
@property(nonatomic) __weak id <WCFinderFeedContentMediaActionProtocol> delegate; // @synthesize delegate=_delegate;
- (_Bool)mediaIsOnPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)stopBGMPlay;
- (void)startBGMPlay;
- (void)updateCollectionViewCurrentCellPlayStateIfVideo;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateCurrentVideoThumb;
- (id)getPhotoThumbImage;
- (id)getCurrendThumb;
- (void)resetCurrentVideoThumb;
- (void)setProgressBarStatus:(id)arg1;
- (id)progressBarStatus;
- (double)getActualPlayingTimeInMs;
- (double)getPlayVideoTotalTime;
- (double)getCurrentPlayVideoTime;
- (void)changeVideoSilenceStatue:(_Bool)arg1;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (void)resetBGMPlay;
- (void)resetReuseState;
- (struct CGSize)contentSizeForMediaInfo:(id)arg1;
- (void)initSubView;
- (void)setShowPrivateTipsIcon:(_Bool)arg1;
- (void)onCollectionViewTriggerShufflingLogic;
- (_Bool)shouldTriggerShufflingLogic;
- (void)resetCollectionShufflingTimer;
- (void)restartCollectionViewShufflingTimerWithTimeInterval:(long long)arg1;
- (void)changeDataWithDataItem:(id)arg1 currentSelectIndex:(unsigned long long)arg2 useTmpThumbImage:(id)arg3 isEnableTopAuthorInfoOnMediaArea:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andDataItem:(id)arg2 currentSelectIndex:(unsigned long long)arg3 isEnableTopAuthorInfoOnMediaArea:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

