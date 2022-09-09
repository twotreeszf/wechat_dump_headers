//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMBizFileMatchNode;

@interface MMDiskBizUsageHandler : NSObject
{
    MMBizFileMatchNode *_appRootMatchNode;
}

+ (struct MMBizMatchInfo)fileMatchedBizType:(id)arg1 inFolder:(id)arg2;
+ (void)matchBizWithChildFolder:(id)arg1 parentFolder:(id)arg2;
+ (id)ruleDescription:(const struct MMDiskUsageBizRule *)arg1;
+ (_Bool)p_isRuleValid:(const struct MMDiskUsageBizRule *)arg1;
+ (long long)p_validateStoreTimeType:(const struct MMDiskUsageBizRule *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBizFileMatchNode *appRootMatchNode; // @synthesize appRootMatchNode=_appRootMatchNode;
- (void)p_makeArrayBizFileNodeOtherUser:(id)arg1;
- (_Bool)addPathComponent:(id)arg1 withRule:(const struct MMDiskUsageBizRule *)arg2 toRootNode:(id)arg3;
- (id)loadPathMatchRules;
- (id)getRootMatchNode;

@end

