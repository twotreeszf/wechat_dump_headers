//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentTableViewCell.h"

#import "MMLiveGestureRecognizerDelegate-Protocol.h"

@class MMFinderLiveCommentTableViewCellFrame, MMLiveCommentPubbleCell, MMLiveLongPressRecognizer, MMLiveTaskId, NSString, UIColor, UITapGestureRecognizer;

@interface MMFinderLiveCommentTableViewCell : MMLiveCommentTableViewCell <MMLiveGestureRecognizerDelegate>
{
    _Bool _isShowMenu;
    double _minimumPressDuration;
    MMLiveTaskId *_taskId;
    CDUnknownBlockType _cellActionInvokeBlock;
    CDUnknownBlockType _cellDidTapBlock;
    CDUnknownBlockType _cellDidLongPressedBlock;
    CDUnknownBlockType _cellLongPressTouchChangedBlock;
    CDUnknownBlockType _needStopTableAutoScrollBlock;
    MMLiveCommentPubbleCell *_pubbleCell;
    UIColor *_initialPubbleBackColor;
    UITapGestureRecognizer *_tapGesture;
    MMLiveLongPressRecognizer *_longPressGesture;
}

+ (_Bool)isSupportLongPress:(id)arg1;
+ (_Bool)isSupportTap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveLongPressRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIColor *initialPubbleBackColor; // @synthesize initialPubbleBackColor=_initialPubbleBackColor;
@property(nonatomic) _Bool isShowMenu; // @synthesize isShowMenu=_isShowMenu;
@property(retain, nonatomic) MMLiveCommentPubbleCell *pubbleCell; // @synthesize pubbleCell=_pubbleCell;
@property(copy, nonatomic) CDUnknownBlockType needStopTableAutoScrollBlock; // @synthesize needStopTableAutoScrollBlock=_needStopTableAutoScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType cellLongPressTouchChangedBlock; // @synthesize cellLongPressTouchChangedBlock=_cellLongPressTouchChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidLongPressedBlock; // @synthesize cellDidLongPressedBlock=_cellDidLongPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidTapBlock; // @synthesize cellDidTapBlock=_cellDidTapBlock;
@property(copy, nonatomic) CDUnknownBlockType cellActionInvokeBlock; // @synthesize cellActionInvokeBlock=_cellActionInvokeBlock;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onCommentActionMore:(id)arg1;
- (void)onCommentActionTop:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onTouchesCancel:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPubbleLongPressGestureRecognizer:(id)arg1;
- (_Bool)showMenuForAnchorIfNeeded;
- (void)onPubbleTapGestureRecognizer:(id)arg1;
@property(readonly, nonatomic) MMFinderLiveCommentTableViewCellFrame *finderLiveCellFrame;
- (void)setCellFrame:(id)arg1;
- (void)layoutPubbleCell;
- (void)layoutSubviews;
- (void)addGestureForPubbleFrame:(id)arg1;
- (void)initNotifications;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

