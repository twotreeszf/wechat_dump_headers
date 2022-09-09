//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMScrollActionSheet.h"

@class MMFinderLiveTaskId;

@interface WCLiveStarterScrollActionSheet : MMScrollActionSheet
{
    _Bool _isCommentEnable;
    _Bool _isMicEnable;
    _Bool _isRewardEnable;
    int _currVisibilityMode;
    MMFinderLiveTaskId *_liveTaskId;
}

- (void).cxx_destruct;
@property(nonatomic) int currVisibilityMode; // @synthesize currVisibilityMode=_currVisibilityMode;
@property(nonatomic) _Bool isRewardEnable; // @synthesize isRewardEnable=_isRewardEnable;
@property(nonatomic) _Bool isMicEnable; // @synthesize isMicEnable=_isMicEnable;
@property(nonatomic) _Bool isCommentEnable; // @synthesize isCommentEnable=_isCommentEnable;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (_Bool)isRewardAnchorEntrenceEnable;
- (id)loadItemArray;
- (void)loadData;
- (id)initWithLiveTaskId:(id)arg1;

@end

