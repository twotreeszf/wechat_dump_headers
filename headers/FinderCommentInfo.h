//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContactMsgInfo, NSData, NSMutableArray, NSString;

@interface FinderCommentInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int blacklistFlag; // @dynamic blacklistFlag;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) unsigned long long commentId; // @dynamic commentId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(nonatomic) unsigned long long createtime; // @dynamic createtime;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int displayFlag; // @dynamic displayFlag;
@property(nonatomic) unsigned long long displayid; // @dynamic displayid;
@property(retain, nonatomic) NSString *displayidDiscarded; // @dynamic displayidDiscarded;
@property(nonatomic) unsigned int expandCommentCount; // @dynamic expandCommentCount;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *levelTwoComment; // @dynamic levelTwoComment;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) FinderContactMsgInfo *msgInfo; // @dynamic msgInfo;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int replyBlacklistFlag; // @dynamic replyBlacklistFlag;
@property(nonatomic) unsigned long long replyCommentId; // @dynamic replyCommentId;
@property(retain, nonatomic) NSString *replyContent; // @dynamic replyContent;
@property(retain, nonatomic) NSString *replyNickname; // @dynamic replyNickname;
@property(retain, nonatomic) NSString *replyUsername; // @dynamic replyUsername;
@property(nonatomic) unsigned int unreadFlag; // @dynamic unreadFlag;
@property(nonatomic) unsigned int upContinueFlag; // @dynamic upContinueFlag;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

