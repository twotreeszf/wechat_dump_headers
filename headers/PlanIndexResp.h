//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PlanIndexResp_Banner;

@interface PlanIndexResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) PlanIndexResp_Banner *banner; // @dynamic banner;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *indexDesc; // @dynamic indexDesc;
@property(nonatomic) unsigned long long limitCnt; // @dynamic limitCnt;
@property(retain, nonatomic) NSString *overPlanlimitDesc; // @dynamic overPlanlimitDesc;
@property(retain, nonatomic) NSMutableArray *planList; // @dynamic planList;
@property(retain, nonatomic) NSString *productDesc; // @dynamic productDesc;
@property(nonatomic) int redirectPage; // @dynamic redirectPage;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;

@end
