//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSData, NSString;

@interface FinderLiveMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientMsgId; // @dynamic clientMsgId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) FinderLiveContact *finderLiveContact; // @dynamic finderLiveContact;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(retain, nonatomic) NSString *localClientMsgId; // @dynamic localClientMsgId;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

