//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSString;

@interface MMFinderLiveShopContext : NSObject
{
    MMFinderLiveTaskId *_taskId;
    NSString *_shopAppId;
    NSString *_goodsOrderAppId;
    NSString *_goodsOrderPagePath;
    NSString *_shopAssistAppId;
    NSString *_shopAssistAddGoodsPagePath;
    NSString *_shopWindowId;
    NSString *_prerenderPagePath;
    NSString *_shopExtraData;
    NSString *_shopAppUsername;
    NSString *_shopAddProductAppusername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shopAddProductAppusername; // @synthesize shopAddProductAppusername=_shopAddProductAppusername;
@property(retain, nonatomic) NSString *shopAppUsername; // @synthesize shopAppUsername=_shopAppUsername;
@property(retain, nonatomic) NSString *shopExtraData; // @synthesize shopExtraData=_shopExtraData;
@property(retain, nonatomic) NSString *prerenderPagePath; // @synthesize prerenderPagePath=_prerenderPagePath;
@property(retain, nonatomic) NSString *shopWindowId; // @synthesize shopWindowId=_shopWindowId;
@property(retain, nonatomic) NSString *shopAssistAddGoodsPagePath; // @synthesize shopAssistAddGoodsPagePath=_shopAssistAddGoodsPagePath;
@property(retain, nonatomic) NSString *shopAssistAppId; // @synthesize shopAssistAppId=_shopAssistAppId;
@property(retain, nonatomic) NSString *goodsOrderPagePath; // @synthesize goodsOrderPagePath=_goodsOrderPagePath;
@property(retain, nonatomic) NSString *goodsOrderAppId; // @synthesize goodsOrderAppId=_goodsOrderAppId;
@property(retain, nonatomic) NSString *shopAppId; // @synthesize shopAppId=_shopAppId;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)description;

@end
