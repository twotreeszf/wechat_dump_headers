//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SequenceInfo : NSObject <PBCoding>
{
    unsigned int MoreView_Seq;
    unsigned int Setting_Seq;
    unsigned int Privacy_Seq;
    unsigned int RecentOption_Seq;
    unsigned int General_Seq;
    unsigned int Plugin_Seq;
}

+ (void)initialize;
+ (void)PBArrayAdd_Plugin_Seq;
+ (void)PBArrayAdd_General_Seq;
+ (void)PBArrayAdd_RecentOption_Seq;
+ (void)PBArrayAdd_Privacy_Seq;
+ (void)PBArrayAdd_Setting_Seq;
+ (void)PBArrayAdd_MoreView_Seq;
@property(nonatomic) unsigned int Plugin_Seq; // @synthesize Plugin_Seq;
@property(nonatomic) unsigned int General_Seq; // @synthesize General_Seq;
@property(nonatomic) unsigned int RecentOption_Seq; // @synthesize RecentOption_Seq;
@property(nonatomic) unsigned int Privacy_Seq; // @synthesize Privacy_Seq;
@property(nonatomic) unsigned int Setting_Seq; // @synthesize Setting_Seq;
@property(nonatomic) unsigned int MoreView_Seq; // @synthesize MoreView_Seq;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

