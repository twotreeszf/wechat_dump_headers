//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSMutableArray;

@interface FinderGetLiveRewardGiftListResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int comboBatchSize; // @dynamic comboBatchSize;
@property(nonatomic) unsigned int comboBatchTimeoutMs; // @dynamic comboBatchTimeoutMs;
@property(retain, nonatomic) NSMutableArray *giftList; // @dynamic giftList;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;

@end

