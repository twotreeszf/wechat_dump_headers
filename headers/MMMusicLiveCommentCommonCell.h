//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMMuiscLiveCommentCommonContentView, MMMusicLiveCommentBaseViewModel, MMMusicLiveCommentCellDetailView, UIView;
@protocol MMusicLiveCommentCommonDelegate;

@interface MMMusicLiveCommentCommonCell : UITableViewCell
{
    MMMusicLiveCommentBaseViewModel *_viewModel;
    id <MMusicLiveCommentCommonDelegate> _delegate;
    UIView *_commentBgView;
    MMMuiscLiveCommentCommonContentView *_commentView;
    UIView *_separator;
    MMMusicLiveCommentCellDetailView *_detailView;
}

+ (double)calculateHeight:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicLiveCommentCellDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MMMuiscLiveCommentCommonContentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(nonatomic) __weak id <MMusicLiveCommentCommonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMMusicLiveCommentBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)longPressToExpose;
- (id)likeString;
- (void)handleLikeButtonTapped;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

