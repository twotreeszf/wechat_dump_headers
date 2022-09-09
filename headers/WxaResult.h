//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface WxaResult : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)shouldShowBrandOfficialFlag;
- (_Bool)shouldShowGuaranteeIcon;
- (id)tagsArray;
- (void)setHeightInfo:(id)arg1;
- (id)heightInfo;
- (id)accountLabels;
- (_Bool)isAccountType;
- (_Bool)isVideo;
- (id)nsUrl;
- (id)displayTitle;
- (id)getExtraDictionary;
- (void)setExtraDic:(id)arg1;
- (id)extraDic;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(nonatomic) unsigned int dau; // @dynamic dau;
@property(retain, nonatomic) NSData *debugBuf; // @dynamic debugBuf;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(retain, nonatomic) NSString *extraJson; // @dynamic extraJson;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) float scoreQuailty; // @dynamic scoreQuailty;
@property(nonatomic) float scoreTfIdf; // @dynamic scoreTfIdf;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

