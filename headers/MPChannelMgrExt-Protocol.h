//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MPChannelEntryData, MPChannelTimelineInfo, MPChannelTopBarInfo;

@protocol MPChannelMgrExt

@optional
- (void)onMPChannelUpdateTopBarEntryData:(MPChannelTopBarInfo *)arg1;
- (void)onMPChannelUpdateTimelineEntryData:(MPChannelTimelineInfo *)arg1;
- (void)onMPChannelUpdateEntryData:(MPChannelEntryData *)arg1;
@end

