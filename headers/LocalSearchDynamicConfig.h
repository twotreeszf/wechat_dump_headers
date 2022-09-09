//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSIndexDynamicConfig;

@interface LocalSearchDynamicConfig : NSObject
{
    _Bool _hasLoadedStrictConfig;
    _Bool _isUseSilentSort;
    _Bool _isUseUnReadSort;
    _Bool _isUseWANetSearch;
    _Bool _isUseTrainModelSort;
    _Bool _isTopHitContainsWeApp;
    _Bool _isUseNewIndexingEngine;
    _Bool _isGlobalSearchOpenPardusSearch;
    _Bool _isAutoRepairFtsMsgClose;
    unsigned int _uiContactActiveDays;
    unsigned int _uiGroupActiveDays;
    unsigned int _uiGroupMyActiveDays;
    unsigned int _uiSmallGroupMembers;
    FTSIndexDynamicConfig *_ftsIndexDynamic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoRepairFtsMsgClose; // @synthesize isAutoRepairFtsMsgClose=_isAutoRepairFtsMsgClose;
@property(nonatomic) _Bool isGlobalSearchOpenPardusSearch; // @synthesize isGlobalSearchOpenPardusSearch=_isGlobalSearchOpenPardusSearch;
@property(nonatomic) _Bool isUseNewIndexingEngine; // @synthesize isUseNewIndexingEngine=_isUseNewIndexingEngine;
@property(nonatomic) _Bool isTopHitContainsWeApp; // @synthesize isTopHitContainsWeApp=_isTopHitContainsWeApp;
@property(retain, nonatomic) FTSIndexDynamicConfig *ftsIndexDynamic; // @synthesize ftsIndexDynamic=_ftsIndexDynamic;
@property(nonatomic) _Bool isUseTrainModelSort; // @synthesize isUseTrainModelSort=_isUseTrainModelSort;
@property(nonatomic) _Bool isUseWANetSearch; // @synthesize isUseWANetSearch=_isUseWANetSearch;
@property(nonatomic) unsigned int uiSmallGroupMembers; // @synthesize uiSmallGroupMembers=_uiSmallGroupMembers;
@property(nonatomic) unsigned int uiGroupMyActiveDays; // @synthesize uiGroupMyActiveDays=_uiGroupMyActiveDays;
@property(nonatomic) unsigned int uiGroupActiveDays; // @synthesize uiGroupActiveDays=_uiGroupActiveDays;
@property(nonatomic) _Bool isUseUnReadSort; // @synthesize isUseUnReadSort=_isUseUnReadSort;
@property(nonatomic) _Bool isUseSilentSort; // @synthesize isUseSilentSort=_isUseSilentSort;
@property(nonatomic) unsigned int uiContactActiveDays; // @synthesize uiContactActiveDays=_uiContactActiveDays;
- (void)updateConfigs;
- (id)description;
- (id)init;

@end
