//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdShareInfo, BaseRequest, NSData, NSString;

@interface AdClickRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int adType; // @dynamic adType;
@property(nonatomic) unsigned int appInstallStatus; // @dynamic appInstallStatus;
@property(retain, nonatomic) NSData *atFriendSelfInfo; // @dynamic atFriendSelfInfo;
@property(retain, nonatomic) NSData *atFriendSourceInfo; // @dynamic atFriendSourceInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bssid; // @dynamic bssid;
@property(nonatomic) unsigned int clickAction; // @dynamic clickAction;
@property(nonatomic) int clickpos; // @dynamic clickpos;
@property(retain, nonatomic) NSString *commonDeviceId; // @dynamic commonDeviceId;
@property(retain, nonatomic) NSString *descxml; // @dynamic descxml;
@property(nonatomic) unsigned long long exposureStartTime; // @dynamic exposureStartTime;
@property(nonatomic) unsigned int flipStatus; // @dynamic flipStatus;
@property(nonatomic) unsigned int followStatus; // @dynamic followStatus;
@property(retain, nonatomic) NSString *idfa; // @dynamic idfa;
@property(retain, nonatomic) NSString *idfv; // @dynamic idfv;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *oaid; // @dynamic oaid;
@property(retain, nonatomic) NSString *pkgName; // @dynamic pkgName;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) AdShareInfo *shareInfo; // @dynamic shareInfo;
@property(retain, nonatomic) NSString *snsStatext; // @dynamic snsStatext;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(nonatomic) unsigned long long timestampMs; // @dynamic timestampMs;
@property(retain, nonatomic) NSString *ua; // @dynamic ua;
@property(nonatomic) unsigned int videoPlayTime; // @dynamic videoPlayTime;
@property(retain, nonatomic) NSString *viewid; // @dynamic viewid;
@property(retain, nonatomic) NSString *waid; // @dynamic waid;

@end

