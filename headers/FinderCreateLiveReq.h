//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveTagInfo, FinderObjectDesc, NSData, NSMutableArray, NSString;

@interface FinderCreateLiveReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *applyUsername; // @dynamic applyUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) FinderLiveTagInfo *tagInfo; // @dynamic tagInfo;
@property(retain, nonatomic) NSData *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSMutableArray *topicInfoList; // @dynamic topicInfoList;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdList; // @dynamic visibilityFileIdList;
@property(nonatomic) unsigned int visibilityMode; // @dynamic visibilityMode;

@end

