//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface FinderGetRelatedListCtx : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *ccardInfo; // @dynamic ccardInfo;
@property(nonatomic) unsigned long long lastId; // @dynamic lastId;
@property(nonatomic) unsigned int pageNum; // @dynamic pageNum;
@property(nonatomic) unsigned int recSys; // @dynamic recSys;
@property(retain, nonatomic) NSMutableArray *recType; // @dynamic recType;
@property(retain, nonatomic) NSMutableArray *recievedIds; // @dynamic recievedIds;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int src; // @dynamic src;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;

@end
