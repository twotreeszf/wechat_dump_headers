//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSString, SnsEmojiInfoObj, WCUserComment;

@interface WCCommentItem : NSObject <NSCoding>
{
    NSString *toUserName;
    NSString *itemID;
    NSString *content;
    int type;
    int source;
    unsigned int createTime;
    WCUserComment *refComment;
    unsigned int inQueueTime;
    NSString *clientID;
    unsigned long long startTime;
    unsigned long long endTime;
    unsigned int commentFlag;
    unsigned int _scene;
    NSData *remindFriendsInfoData;
    unsigned long long _failedType;
    SnsEmojiInfoObj *_snsEmojiInfoObj;
    NSString *_sessionId;
}

+ (id)genCommentByDataItemID:(id)arg1 ofUser:(id)arg2 content:(id)arg3 ref:(id)arg4 source:(long long)arg5;
+ (id)genCommentObject:(id)arg1 content:(id)arg2 ref:(id)arg3 source:(long long)arg4 SnsEmojiInfoObj:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj; // @synthesize snsEmojiInfoObj=_snsEmojiInfoObj;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long failedType; // @synthesize failedType=_failedType;
@property(retain, nonatomic) NSData *remindFriendsInfoData; // @synthesize remindFriendsInfoData;
@property(nonatomic) unsigned int commentFlag; // @synthesize commentFlag;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(nonatomic) unsigned int inQueueTime; // @synthesize inQueueTime;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName;
- (void)setAtFriendContact:(id)arg1;
- (id)toServerObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

