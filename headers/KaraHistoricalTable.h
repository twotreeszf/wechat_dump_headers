//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDBTableHolder.h"

@class KaraHistoricalCondition;

@interface KaraHistoricalTable : WCDBTableHolder
{
    KaraHistoricalCondition *_condition;
}

- (void).cxx_destruct;
- (id)historyOfCondition:(struct Expression)arg1 receivedFrom:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (long long)deleteHistoricalObjectsReceivedBefore:(id)arg1 error:(id *)arg2;
- (long long)markAsRecalled:(id)arg1 receivedAfter:(id)arg2 error:(id *)arg3;
- (long long)insertOrIgnoreHistoricalObject:(id)arg1 error:(id *)arg2;
- (Class)WINQ;
- (id)condition;
- (id)initWithDatabase:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;

@end
