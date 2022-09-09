//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class WCFinderShareToMomentsItem;

@interface WCFinderShareFeedCellViewModel : CommonMessageViewModel
{
    WCFinderShareToMomentsItem *_item;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShareToMomentsItem *item; // @synthesize item=_item;
- (id)additionalAccessibilityDescription;
- (id)fullClipInset;
- (_Bool)hadFullInfo;
@property(readonly, nonatomic) double estimateWidth;
- (struct CGSize)pureTextContentViewSize;
- (struct CGSize)defaultContentViewSize;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (double)descHeight:(int)arg1;
- (void)exposeReport;
- (unsigned long long)mediaPhotoCount;
- (id)desc;
- (_Bool)isLongVideo;
- (_Bool)isVideo;
- (id)imageIcon;
- (id)coverUrl;
- (double)adjustImageRatio;
- (struct CGSize)imageSize;
- (id)nickname;
- (id)avatarUrl;
- (_Bool)isLive;
- (_Bool)isPureText;

@end

