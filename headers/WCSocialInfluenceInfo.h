//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface WCSocialInfluenceInfo : NSObject <NSCoding, PBCoding>
{
    int maxLikeCount;
    int maxCommentCount;
    NSString *layerId;
    NSString *expId;
}

+ (void)initialize;
+ (void)PBArrayAdd_maxCommentCount;
+ (void)PBArrayAdd_maxLikeCount;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) int maxCommentCount; // @synthesize maxCommentCount;
@property(nonatomic) int maxLikeCount; // @synthesize maxLikeCount;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

