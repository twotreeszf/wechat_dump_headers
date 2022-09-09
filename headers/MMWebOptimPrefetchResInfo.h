//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface MMWebOptimPrefetchResInfo : MMObject <PBCoding>
{
    unsigned int _opType;
    NSString *domain;
    NSString *path;
    NSString *manifestUrl;
    NSString *referDomain;
    NSData *hashId;
}

+ (void)initialize;
+ (void)PBArrayAdd_hashId;
+ (void)PBArrayAdd_referDomain;
+ (void)PBArrayAdd_manifestUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_domain;
- (void).cxx_destruct;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSData *hashId; // @synthesize hashId;
@property(copy, nonatomic) NSString *referDomain; // @synthesize referDomain;
@property(copy, nonatomic) NSString *manifestUrl; // @synthesize manifestUrl;
@property(copy, nonatomic) NSString *path; // @synthesize path;
@property(copy, nonatomic) NSString *domain; // @synthesize domain;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

