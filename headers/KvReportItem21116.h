//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem21116 : KvReportBaseItem
{
    unsigned int _preloadVideoPercent_22;
    unsigned int _preloadDuration_23;
    unsigned int _preloadDataSize_24;
    unsigned int _preloadVideoSize_25;
    NSString *_mediaId_21;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int preloadVideoSize_25; // @synthesize preloadVideoSize_25=_preloadVideoSize_25;
@property(nonatomic) unsigned int preloadDataSize_24; // @synthesize preloadDataSize_24=_preloadDataSize_24;
@property(nonatomic) unsigned int preloadDuration_23; // @synthesize preloadDuration_23=_preloadDuration_23;
@property(nonatomic) unsigned int preloadVideoPercent_22; // @synthesize preloadVideoPercent_22=_preloadVideoPercent_22;
@property(copy, nonatomic) NSString *mediaId_21; // @synthesize mediaId_21=_mediaId_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

