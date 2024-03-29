//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCCoinConsumeLogicDelegate-Protocol.h"

@class MMFinderLiveRewardGiftItem, MMFinderLiveTaskId, NSData, NSError, NSString;

@interface MMFinderLiveRewardRequestObject : NSObject <WCCoinConsumeLogicDelegate>
{
    _Bool _comboFinished;
    unsigned int _rewardProductCount;
    unsigned int _rewardAmountInWecoin;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveRewardGiftItem *_rewardGiftItem;
    NSString *_requestId;
    NSString *_rewardComboId;
    NSString *_rewardProductId;
    unsigned long long _sendRequestTime;
    NSString *_rewardBillNo;
    NSData *_rewardRequestBuffer;
    NSError *_requestError;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSError *requestError; // @synthesize requestError=_requestError;
@property(retain, nonatomic) NSData *rewardRequestBuffer; // @synthesize rewardRequestBuffer=_rewardRequestBuffer;
@property(retain, nonatomic) NSString *rewardBillNo; // @synthesize rewardBillNo=_rewardBillNo;
@property(nonatomic) _Bool comboFinished; // @synthesize comboFinished=_comboFinished;
@property(nonatomic) unsigned long long sendRequestTime; // @synthesize sendRequestTime=_sendRequestTime;
@property(nonatomic) unsigned int rewardAmountInWecoin; // @synthesize rewardAmountInWecoin=_rewardAmountInWecoin;
@property(nonatomic) unsigned int rewardProductCount; // @synthesize rewardProductCount=_rewardProductCount;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId=_rewardProductId;
@property(retain, nonatomic) NSString *rewardComboId; // @synthesize rewardComboId=_rewardComboId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *rewardGiftItem; // @synthesize rewardGiftItem=_rewardGiftItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, copy) NSString *description;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)startRewardRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

