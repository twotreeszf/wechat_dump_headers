//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderRedDotExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)debugDescription;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSData *activityCustomInfo; // @dynamic activityCustomInfo;
@property(nonatomic) unsigned int activityType; // @dynamic activityType;
@property(nonatomic) unsigned int deliveryTime; // @dynamic deliveryTime;
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(nonatomic) unsigned long long finderUinDelete; // @dynamic finderUinDelete;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(retain, nonatomic) NSString *tabTipsRevokeId; // @dynamic tabTipsRevokeId;
@property(nonatomic) unsigned int uinDelete; // @dynamic uinDelete;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

