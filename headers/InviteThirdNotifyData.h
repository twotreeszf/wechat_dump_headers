//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface InviteThirdNotifyData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *calleeOpenid; // @dynamic calleeOpenid;
@property(retain, nonatomic) NSMutableArray *calleeOpenids; // @dynamic calleeOpenids;
@property(retain, nonatomic) NSString *callerOpenid; // @dynamic callerOpenid;
@property(nonatomic) unsigned int memberid; // @dynamic memberid;
@property(nonatomic) int roomType; // @dynamic roomType;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(nonatomic) unsigned long long roomkey; // @dynamic roomkey;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

