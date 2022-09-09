//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMFolderWrapCacheData : NSObject <PBCoding>
{
    NSMutableDictionary *dicCache;
    NSString *cacheID;
}

+ (id)getCacheKeyFromFullPath:(id)arg1;
+ (id)loadFolderWrapCache;
+ (void)initialize;
+ (void)PBArrayAdd_cacheID;
+ (void)PBArrayAdd_dicCache;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cacheID; // @synthesize cacheID;
@property(retain, nonatomic) NSMutableDictionary *dicCache; // @synthesize dicCache;
- (void)deleteCacheByKey:(id)arg1;
- (void)setWrapCache:(id)arg1 withKey:(id)arg2;
- (id)getWrapCacheByKey:(id)arg1;
- (void)saveFolderWrapCache;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

