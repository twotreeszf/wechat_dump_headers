//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PushNewTipsReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) unsigned int tipsId; // @dynamic tipsId;
@property(nonatomic) unsigned int tipsVersion; // @dynamic tipsVersion;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;

@end

