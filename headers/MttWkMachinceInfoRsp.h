//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class MttWkMachinceInfo;

@interface MttWkMachinceInfoRsp : QBJceObjectV2
{
    int jcev2_p_0_o_rspCode;
    MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=stWkMachinceInfo, setter=setStWkMachinceInfo:) MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo; // @synthesize jcev2_p_1_o_stWkMachinceInfo;
@property(nonatomic, getter=rspCode, setter=setRspCode:) int jcev2_p_0_o_rspCode; // @synthesize jcev2_p_0_o_rspCode;
- (void).cxx_destruct;
- (id)init;

@end

