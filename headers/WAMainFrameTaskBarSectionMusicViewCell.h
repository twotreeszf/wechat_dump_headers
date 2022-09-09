//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMainFrameTaskBarSectionListViewCell.h"

@class MMImageView, MMMusicInfo, MMMusicPlayerContoller, UILabel;

@interface WAMainFrameTaskBarSectionMusicViewCell : WAMainFrameTaskBarSectionListViewCell
{
    MMImageView *_playIcon;
    UILabel *_sourceLabel2;
    MMMusicInfo *_curMusicInfo;
    MMMusicPlayerContoller *_musicPlayerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicPlayerContoller *musicPlayerController; // @synthesize musicPlayerController=_musicPlayerController;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)getCurLeftImage;
- (void)updateWithListInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)dealloc;

@end
