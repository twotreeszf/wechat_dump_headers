//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface LiveSdkChannelParams : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int audienceMode; // @dynamic audienceMode;
@property(retain, nonatomic) NSMutableArray *cdnIps; // @dynamic cdnIps;
@property(nonatomic) unsigned int cdnQualityH265Backcfg; // @dynamic cdnQualityH265Backcfg;
@property(nonatomic) unsigned int cdnQualitySvrcfg; // @dynamic cdnQualitySvrcfg;
@property(nonatomic) int cdnQualityTag; // @dynamic cdnQualityTag;
@property(retain, nonatomic) NSMutableArray *cdnTransInfo; // @dynamic cdnTransInfo;
@property(nonatomic) int micAbility; // @dynamic micAbility;
@property(nonatomic) unsigned long long qcAppid; // @dynamic qcAppid;
@property(nonatomic) unsigned long long qcBizid; // @dynamic qcBizid;
@property(nonatomic) unsigned int qosControlSwitch; // @dynamic qosControlSwitch;
@property(nonatomic) unsigned int qosReportSwitch; // @dynamic qosReportSwitch;
@property(retain, nonatomic) NSString *rtmpPushUrl; // @dynamic rtmpPushUrl;
@property(nonatomic) unsigned int seiMode; // @dynamic seiMode;
@property(retain, nonatomic) NSString *streamId; // @dynamic streamId;
@property(nonatomic) unsigned int supportScreenRotate; // @dynamic supportScreenRotate;
@property(retain, nonatomic) NSString *userDefineRecordId; // @dynamic userDefineRecordId;

@end

