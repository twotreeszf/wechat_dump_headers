//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCParams : NSObject
{
    unsigned int _sdkAppId;
    unsigned int _roomId;
    NSString *_userId;
    NSString *_userSig;
    long long _role;
    NSString *_streamId;
    NSString *_userDefineRecordId;
    NSString *_privateMapKey;
    NSString *_bussInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bussInfo; // @synthesize bussInfo=_bussInfo;
@property(copy, nonatomic) NSString *privateMapKey; // @synthesize privateMapKey=_privateMapKey;
@property(copy, nonatomic) NSString *userDefineRecordId; // @synthesize userDefineRecordId=_userDefineRecordId;
@property(copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) unsigned int roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) unsigned int sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

