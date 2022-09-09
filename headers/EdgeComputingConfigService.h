//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IExptServiceExt-Protocol.h"

@class EdgeComputingConfigParser, NSMutableDictionary;

@interface EdgeComputingConfigService : MMObject <IExptServiceExt>
{
    NSMutableDictionary *scriptConfigModels;
    NSMutableDictionary *sqlConfigModels;
    EdgeComputingConfigParser *configParser;
}

- (void).cxx_destruct;
- (void)onSessionEdgeComputingSqlConfigChange:(id)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onSessionEdgeComputingScriptConfigChange:(id)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)removeSqlConfigModel:(id)arg1;
- (id)getSqlConfigModels;
- (id)getSqlConfigModel:(id)arg1;
- (id)getScriptConfigModels;
- (id)getScriptConfigModel:(id)arg1;
- (void)initConfig;
- (void)dealloc;
- (void)onClearData;
- (void)onInit;

@end

