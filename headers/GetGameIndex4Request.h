//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EntranceRedDot, NSMutableArray, NSString;

@interface GetGameIndex4Request : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) EntranceRedDot *entranceRedDot; // @dynamic entranceRedDot;
@property(nonatomic) _Bool fromEntrance; // @dynamic fromEntrance;
@property(retain, nonatomic) NSMutableArray *installedAppList; // @dynamic installedAppList;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(nonatomic) unsigned int releaseChannel; // @dynamic releaseChannel;
@property(nonatomic) unsigned int unReadMsgCount; // @dynamic unReadMsgCount;

@end

