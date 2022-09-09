//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditVideoLayoutView.h"

#import "WCTimelinePOIPickerViewControllerDelegate-Protocol.h"

@class EditStoryImageAttr, MMUIButton, MMUIImageView, NSMutableArray, NSString, UIImageView, WCLocationInfo, WCStoryMultiModeButton, WCTimelinePOIPickerViewController;
@protocol WCStoryEditVideoLayoutViewDelegate;

@interface WCStoryEditVideoLayoutView : WCEditVideoLayoutView <WCTimelinePOIPickerViewControllerDelegate>
{
    MMUIButton *_moreActionButton;
    MMUIImageView *_scopeImageView;
    EditStoryImageAttr *_storyAttr;
    WCStoryMultiModeButton *_poiBtn;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
    WCLocationInfo *_locationInfo;
    MMUIButton *_textInputTipsView;
    unsigned long long _filterCount;
    NSMutableArray *_currentMusicLyrics;
    double _currentLyricTotalTime;
    UIImageView *_blurImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(nonatomic) double currentLyricTotalTime; // @synthesize currentLyricTotalTime=_currentLyricTotalTime;
@property(retain, nonatomic) NSMutableArray *currentMusicLyrics; // @synthesize currentMusicLyrics=_currentMusicLyrics;
@property(nonatomic) unsigned long long filterCount; // @synthesize filterCount=_filterCount;
@property(retain, nonatomic) MMUIButton *textInputTipsView; // @synthesize textInputTipsView=_textInputTipsView;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) WCTimelinePOIPickerViewController *poiPickerViewController; // @synthesize poiPickerViewController=_poiPickerViewController;
@property(retain, nonatomic) WCStoryMultiModeButton *poiBtn; // @synthesize poiBtn=_poiBtn;
@property(retain, nonatomic) EditStoryImageAttr *storyAttr; // @synthesize storyAttr=_storyAttr;
@property(retain, nonatomic) MMUIImageView *scopeImageView; // @synthesize scopeImageView=_scopeImageView;
@property(retain, nonatomic) MMUIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
- (void)dragaAndDropWidget;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)EditVideoBGMViewLyricUpdate:(id)arg1 totalTime:(double)arg2;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)initSendBtn;
- (void)initBGMBtn;
- (unsigned long long)setBGMViewButtonOption;
- (void)onClickMainTextBtn;
- (void)onTapGesture;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)onAddNewPOIWidget;
- (void)onAddRealNewMainTextWidget;
- (void)onPOIReportStr4CommitChanged:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (void)editImageViewPOIWidgetHiddenStateChange:(_Bool)arg1;
- (void)editImageShowPOIPickerViewController;
- (void)startPOITool;
- (void)onClickPoiBtn;
- (void)showEditVideoTextViewControllerWithText:(id)arg1;
- (void)storyEditVideoTextViewControllerDidCommit:(id)arg1 textView:(id)arg2 textString:(id)arg3;
- (void)storyEditVideoTextViewControllerCancelEdit:(id)arg1;
- (void)EditVideoBGMViewLyricOnOffStateChange:(_Bool)arg1;
- (id)getEditImageAttr;
- (void)onClickDoneBtn:(CDUnknownBlockType)arg1;
- (id)getStoryAttr;
- (void)initBGMToolAttrBar;
- (void)easeInOutTopAndBottomBar:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditImageToolBarHiddenWithAnimationWithoutCompletionHandlerWithoutOccupy:(_Bool)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clickMoreAction;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)updateBlurBackgroundForHorizontalVideo:(CDStruct_e83c9415)arg1;
- (void)initBlurBackgroundForHorizontalVideo;
- (void)initDefaultTextInputTipsView;
- (void)initPoiBtn;
- (void)initCustomBottomBar;
- (void)initMoreActionButton;
- (void)reloadBottomEditVideoBar;
- (void)reloadTopEditVideoBar;
- (void)initVideoPreview;
- (void)initTopBar;
- (void)initView;
- (void)playMusic;
- (_Bool)shouldAddCropLogic;
- (void)onEditVideo;
- (void)initEditImageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WCStoryEditVideoLayoutViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

