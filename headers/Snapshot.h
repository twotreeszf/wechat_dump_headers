//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Address, Express, NSMutableArray, NSString;

@interface Snapshot : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Address *address; // @dynamic address;
@property(retain, nonatomic) Express *express; // @dynamic express;
@property(retain, nonatomic) NSString *lockId; // @dynamic lockId;
@property(nonatomic) unsigned int productCount; // @dynamic productCount;
@property(retain, nonatomic) NSMutableArray *productions; // @dynamic productions;
@property(retain, nonatomic) NSMutableArray *receipt; // @dynamic receipt;
@property(nonatomic) unsigned int receiptCount; // @dynamic receiptCount;

@end

