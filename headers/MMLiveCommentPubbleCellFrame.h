//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMLiveCommentDataItem, MMLiveTaskId, NSArray;

@interface MMLiveCommentPubbleCellFrame : NSObject
{
    NSArray *_signArrStyles;
    unsigned long long _pubbleUIType;
    MMLiveCommentDataItem *_commentItem;
    MMLiveTaskId *_taskId;
    double _firstLineOriginX;
    NSArray *_contentArrStylesPortrait;
    NSArray *_contentArrStylesLandscape;
    NSArray *_nickArrStylesPortrait;
    NSArray *_nickArrStylesLandscape;
    struct CGSize _cellSizePortrait;
    struct CGSize _cellSizeLandscape;
    struct CGSize _signSize;
    struct CGPoint _cellOrigin;
    struct CGSize _contentSizePortrait;
    struct CGSize _contentSizeLandscape;
    struct CGSize _nickNameSizePortrait;
    struct CGSize _nickNameSizeLandscape;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nickArrStylesLandscape; // @synthesize nickArrStylesLandscape=_nickArrStylesLandscape;
@property(retain, nonatomic) NSArray *nickArrStylesPortrait; // @synthesize nickArrStylesPortrait=_nickArrStylesPortrait;
@property(retain, nonatomic) NSArray *contentArrStylesLandscape; // @synthesize contentArrStylesLandscape=_contentArrStylesLandscape;
@property(retain, nonatomic) NSArray *contentArrStylesPortrait; // @synthesize contentArrStylesPortrait=_contentArrStylesPortrait;
@property(nonatomic) double firstLineOriginX; // @synthesize firstLineOriginX=_firstLineOriginX;
@property(nonatomic) struct CGSize nickNameSizeLandscape; // @synthesize nickNameSizeLandscape=_nickNameSizeLandscape;
@property(nonatomic) struct CGSize nickNameSizePortrait; // @synthesize nickNameSizePortrait=_nickNameSizePortrait;
@property(nonatomic) struct CGSize contentSizeLandscape; // @synthesize contentSizeLandscape=_contentSizeLandscape;
@property(nonatomic) struct CGSize contentSizePortrait; // @synthesize contentSizePortrait=_contentSizePortrait;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) struct CGPoint cellOrigin; // @synthesize cellOrigin=_cellOrigin;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
@property(nonatomic) unsigned long long pubbleUIType; // @synthesize pubbleUIType=_pubbleUIType;
@property(retain, nonatomic) NSArray *signArrStyles; // @synthesize signArrStyles=_signArrStyles;
@property(nonatomic) struct CGSize signSize; // @synthesize signSize=_signSize;
@property(nonatomic) struct CGSize cellSizeLandscape; // @synthesize cellSizeLandscape=_cellSizeLandscape;
@property(nonatomic) struct CGSize cellSizePortrait; // @synthesize cellSizePortrait=_cellSizePortrait;
- (_Bool)isCommentContentMultiline;
- (double)pubblehorizontalInset:(id)arg1;
@property(readonly, nonatomic) NSArray *nickArrStyles;
@property(readonly, nonatomic) NSArray *contentArrStyles;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) struct CGSize nickNameSize;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)transferToPubbleUIType:(id)arg1;
- (void)calculateSizeForUserMostLikeWithComment:(id)arg1;
- (void)calculateSizeForUserMySelfWithComment:(id)arg1;
- (void)calculateSizeForAudienceJoinLiveWithComment:(id)arg1;
- (void)calculateSizeForAnchorNoticeWithComment:(id)arg1;
- (void)calculateSizeForUserGeneralWithComment:(id)arg1;
- (void)caculateSizeForComment:(id)arg1;
- (void)calculateWithCommentInfo:(id)arg1;
- (id)getDisplayStr:(id)arg1;
- (double)commmentTableWidthLandScape;
- (double)commmentTableWidthPortrait;
- (double)commmentTableWidth;
- (_Bool)isUserTableStyle;
- (void)calculateIfNeeded;
- (long long)layoutResult;

@end
