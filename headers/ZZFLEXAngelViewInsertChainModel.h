//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXAngelViewBaseChainModel.h"

@class ZZFLEXSectionModel;

@interface ZZFLEXAngelViewInsertChainModel : ZZFLEXAngelViewBaseChainModel
{
    ZZFLEXSectionModel *_sectionModel;
    long long _insertTag;
    long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long insertTag; // @synthesize insertTag=_insertTag;
@property(retain, nonatomic) ZZFLEXSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
- (void)p_tryInsertCell;
- (CDUnknownBlockType)afterCell;
- (CDUnknownBlockType)beforeCell;
- (CDUnknownBlockType)toIndex;
- (CDUnknownBlockType)toSection;

@end
