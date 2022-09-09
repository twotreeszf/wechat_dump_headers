//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface NewTipsConfig : NSObject <PBCoding>
{
    _Bool bShowParentTips;
    unsigned int tipsId;
    unsigned long long type;
    NSString *uniqueId;
    NSString *filterClassName;
}

+ (void)initialize;
+ (void)PBArrayAdd_bShowParentTips;
+ (void)PBArrayAdd_filterClassName;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_tipsId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bShowParentTips; // @synthesize bShowParentTips;
@property(retain, nonatomic) NSString *filterClassName; // @synthesize filterClassName;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId;
@property(nonatomic) unsigned long long type; // @synthesize type;
@property(nonatomic) unsigned int tipsId; // @synthesize tipsId;
@property(readonly, copy) NSString *description;
- (_Bool)canShowTipsWithTipsInfo:(id)arg1;
- (_Bool)filterTipsWhenReceiveXml:(id)arg1;
- (id)generateNewTipsFilter;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

