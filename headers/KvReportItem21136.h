//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KvReportBaseItem.h"

@class NSString;

@interface KvReportItem21136 : KvReportBaseItem
{
    _Bool _IsClick_26;
    unsigned int _ExposeTimes_21;
    unsigned int _ExposeTimestamp_22;
    unsigned int _MsgType_23;
    unsigned int _Sessionid_24;
    NSString *_BizUserName_25;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool IsClick_26; // @synthesize IsClick_26=_IsClick_26;
@property(copy, nonatomic) NSString *BizUserName_25; // @synthesize BizUserName_25=_BizUserName_25;
@property(nonatomic) unsigned int Sessionid_24; // @synthesize Sessionid_24=_Sessionid_24;
@property(nonatomic) unsigned int MsgType_23; // @synthesize MsgType_23=_MsgType_23;
@property(nonatomic) unsigned int ExposeTimestamp_22; // @synthesize ExposeTimestamp_22=_ExposeTimestamp_22;
@property(nonatomic) unsigned int ExposeTimes_21; // @synthesize ExposeTimes_21=_ExposeTimes_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

