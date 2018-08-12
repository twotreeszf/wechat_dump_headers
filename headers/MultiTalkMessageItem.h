//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface MultiTalkMessageItem : MMObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int messageType;
    unsigned int hasGenWCMessage;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *createUserName;
    NSString *messageContent;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)hasGenWCMessage;
+ (const struct WCTProperty *)messageContent;
+ (const struct WCTProperty *)messageType;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)createUserName;
+ (const struct WCTProperty *)clientGroupID;
+ (const struct WCTProperty *)groupID;
+ (const struct WCTProperty *)localID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) unsigned int hasGenWCMessage; // @synthesize hasGenWCMessage;
@property(retain, nonatomic) NSString *messageContent; // @synthesize messageContent;
@property(nonatomic) unsigned int messageType; // @synthesize messageType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isMessageItemValid;
- (void)dealloc;

@end
