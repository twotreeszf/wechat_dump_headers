//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baserequest; // @dynamic baserequest;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(nonatomic) unsigned int commentScene; // @dynamic commentScene;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectid; // @dynamic objectid;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(nonatomic) unsigned long long replyCommentId; // @dynamic replyCommentId;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

