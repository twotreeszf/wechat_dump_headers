//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCBusinessJumpCallbackInfo : NSObject
{
    long long _sceneValue;
    NSString *_appid;
    NSString *_universalLink;
    NSString *_callbackUrl;
    NSDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(retain, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long sceneValue; // @synthesize sceneValue=_sceneValue;

@end

