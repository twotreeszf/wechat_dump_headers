//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface CgiF2FDynamicCodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *getDynamicCodeExtend; // @dynamic getDynamicCodeExtend;
@property(retain, nonatomic) NSString *getDynamicCodeSign; // @dynamic getDynamicCodeSign;
@property(retain, nonatomic) NSString *mchInfoString; // @dynamic mchInfoString;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(retain, nonatomic) NSString *transferQrcodeId; // @dynamic transferQrcodeId;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

