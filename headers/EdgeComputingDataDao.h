//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class EdgeComputingWCDBManager, NSArray, NSString;

@interface EdgeComputingDataDao : MMObject
{
    NSString *configID;
    NSArray *fieldConfigModels;
    EdgeComputingWCDBManager *dbManager;
}

- (void).cxx_destruct;
- (id)getAndCheckEdgeDBPath;
- (id)getDBTableName:(id)arg1;
- (id)getDBFieldName:(id)arg1;
- (id)getDBFieldType:(unsigned int)arg1;
- (_Bool)checkColumnExist:(id)arg1;
- (unsigned long long)queryRowNum;
- (id)queryAll;
- (_Bool)deleteExpire:(unsigned long long)arg1;
- (_Bool)deleteAll;
- (_Bool)insert:(id)arg1;
- (_Bool)insertPatch:(id)arg1;
- (_Bool)dropTable;
- (void)updateTable;
- (_Bool)createIndex;
- (_Bool)createTable;
- (_Bool)checkTableExist;
- (id)init:(id)arg1 withFieldConfigModels:(id)arg2;

@end

