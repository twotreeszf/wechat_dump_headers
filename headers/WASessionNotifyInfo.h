//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface WASessionNotifyInfo : NSObject <PBCoding>
{
    NSNumber *globalOpenStatus;
    NSMutableDictionary *dicCloseItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicCloseItem;
+ (void)PBArrayAdd_globalOpenStatus;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicCloseItem; // @synthesize dicCloseItem;
@property(retain, nonatomic) NSNumber *globalOpenStatus; // @synthesize globalOpenStatus;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

