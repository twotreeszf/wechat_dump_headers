//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface iAPCache : NSObject <PBCoding>
{
    NSMutableDictionary *dicProductToPrepare;
    NSMutableDictionary *dicBillNos;
    NSMutableDictionary *dicProductPrice;
    NSMutableDictionary *dicProductLocale;
    NSMutableDictionary *dicUnVerifyReceipt;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicUnVerifyReceipt;
+ (void)PBArrayAdd_dicProductLocale;
+ (void)PBArrayAdd_dicProductPrice;
+ (void)PBArrayAdd_dicBillNos;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicUnVerifyReceipt; // @synthesize dicUnVerifyReceipt;
@property(retain, nonatomic) NSMutableDictionary *dicProductLocale; // @synthesize dicProductLocale;
@property(retain, nonatomic) NSMutableDictionary *dicProductPrice; // @synthesize dicProductPrice;
@property(retain, nonatomic) NSMutableDictionary *dicBillNos; // @synthesize dicBillNos;
- (void)removeUnverifyTransactionForProductID:(id)arg1;
- (void)addUnverifyTransaction:(id)arg1;
- (id)UnVerifyTransactionForProductID:(id)arg1;
- (id)localeForProductID:(id)arg1;
- (id)priceForProductID:(id)arg1;
- (id)productForProductID:(id)arg1;
- (void)addProduct:(id)arg1;
- (void)initUnVerifyTransaction;
- (void)initProductDictionary;
- (void)dealloc;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

