//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, DynamicColor, NSString;

@interface GetTimeLimitPromoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *adName; // @dynamic adName;
@property(retain, nonatomic) DynamicColor *backColor; // @dynamic backColor;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *logoMd5; // @dynamic logoMd5;
@property(retain, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(nonatomic) unsigned int queryPerncentage; // @dynamic queryPerncentage;
@property(nonatomic) unsigned int queryTimestamp; // @dynamic queryTimestamp;
@property(nonatomic) _Bool showPromo; // @dynamic showPromo;
@property(retain, nonatomic) DynamicColor *textColor; // @dynamic textColor;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
