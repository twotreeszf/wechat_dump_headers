//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderSectionInfo;

@interface WCFinderNearbySection : NSObject
{
    WCFinderSectionInfo *_sectionInfo;
    NSMutableArray *_finderDataItems;
    NSMutableArray *_finderContentVMS;
}

+ (id)nearBySection:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *finderContentVMS; // @synthesize finderContentVMS=_finderContentVMS;
@property(retain, nonatomic) NSMutableArray *finderDataItems; // @synthesize finderDataItems=_finderDataItems;
@property(retain, nonatomic) WCFinderSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
- (id)refreshFinderDataItems;
- (_Bool)removeDataItemWithTid:(id)arg1;
- (_Bool)isItemBeyondLimit;
- (void)buildContentVMWithScene:(unsigned long long)arg1 dataScene:(id)arg2;

@end
