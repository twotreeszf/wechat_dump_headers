//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentPubbleCell.h"

@class RichTextView, UIView, WCFinderHeadImageView;

@interface MMLiveCommentPubbleAnchorNoticeCell : MMLiveCommentPubbleCell
{
    WCFinderHeadImageView *_headImageView;
    RichTextView *_nickLabel;
    RichTextView *_signLabel;
    UIView *_signBackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *signBackView; // @synthesize signBackView=_signBackView;
@property(retain, nonatomic) RichTextView *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) RichTextView *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)updateCommentLabelOrigin;
- (void)updateSignLabelOrigin;
- (void)layoutSignLabel;
- (void)updateNickLabelOrigin;
- (void)layoutNickLabel;
- (void)updateHeadImageViewOrigin;
- (void)layoutHeadImageView;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (id)initWithCellFrame:(id)arg1;

@end

