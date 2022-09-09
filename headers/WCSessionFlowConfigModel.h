//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCSessionFlowConfigModel : MMObject <PBCoding>
{
    NSMutableArray *sessionsArray;
    NSMutableArray *blackListPages;
    NSMutableArray *mainTabPages;
    NSMutableArray *filterPages;
    NSString *originalJson;
    NSMutableDictionary *_sessionsDicForPageName;
    NSMutableDictionary *_sessionsDicForSid;
}

+ (void)initialize;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_filterPages;
+ (void)PBArrayAdd_mainTabPages;
+ (void)PBArrayAdd_blackListPages;
+ (void)PBArrayAdd_sessionsArray;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *sessionsDicForSid; // @synthesize sessionsDicForSid=_sessionsDicForSid;
@property(retain) NSMutableDictionary *sessionsDicForPageName; // @synthesize sessionsDicForPageName=_sessionsDicForPageName;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson;
@property(retain, nonatomic) NSMutableArray *filterPages; // @synthesize filterPages;
@property(retain, nonatomic) NSMutableArray *mainTabPages; // @synthesize mainTabPages;
@property(retain, nonatomic) NSMutableArray *blackListPages; // @synthesize blackListPages;
@property(retain, nonatomic) NSMutableArray *sessionsArray; // @synthesize sessionsArray;
- (id)toString;
- (void)initCacheDictionary;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

