//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCFeedExposureItem : MMObject <PBCoding>
{
    unsigned int uiCreateTime;
    unsigned int uiCount;
    NSString *nsFeedId;
    NSString *appId;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) unsigned int uiCount; // @synthesize uiCount;
@property(nonatomic) unsigned int uiCreateTime; // @synthesize uiCreateTime;
@property(retain, nonatomic) NSString *nsFeedId; // @synthesize nsFeedId;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

