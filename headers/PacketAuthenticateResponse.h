//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface PacketAuthenticateResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int step; // @dynamic step;
@property(nonatomic) int supportExt; // @dynamic supportExt;
@property(retain, nonatomic) NSData *token; // @dynamic token;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) int version; // @dynamic version;

@end

