//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, MMMuiscLiveCommentCommonContentView;

@interface MMMusicLiveCommentNoticeContentView : UIView
{
    UIView *_bgBlurView;
    CAShapeLayer *_bgArrowLayer;
    UIView *_commentBgView;
    MMMuiscLiveCommentCommonContentView *_commentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMuiscLiveCommentCommonContentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(retain, nonatomic) CAShapeLayer *bgArrowLayer; // @synthesize bgArrowLayer=_bgArrowLayer;
@property(retain, nonatomic) UIView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
- (void)setModel:(id)arg1;
- (void)setupMaskLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
