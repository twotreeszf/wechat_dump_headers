//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentTableViewCellFrame.h"

@class MMLiveCommentPubbleCellFrame;

@interface MMFinderLiveCommentTableViewCellFrame : MMLiveCommentTableViewCellFrame
{
    long long _layoutResult;
    MMLiveCommentPubbleCellFrame *_pubbleCellFrame;
    double _cellHeightPortrait;
    double _cellHeightLandscape;
}

- (void).cxx_destruct;
@property(nonatomic) double cellHeightLandscape; // @synthesize cellHeightLandscape=_cellHeightLandscape;
@property(nonatomic) double cellHeightPortrait; // @synthesize cellHeightPortrait=_cellHeightPortrait;
@property(retain, nonatomic) MMLiveCommentPubbleCellFrame *pubbleCellFrame; // @synthesize pubbleCellFrame=_pubbleCellFrame;
- (double)cellHeight;
- (void)resetCellFrame;
- (void)calculateWithCommentInfo:(id)arg1 isLastLine:(_Bool)arg2;

@end

