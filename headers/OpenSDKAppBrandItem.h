//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, WAAppPackageInfo;

@interface OpenSDKAppBrandItem : MMObject
{
    unsigned int _appBrandVersion;
    NSString *_appBrandUserName;
    NSString *_appBrandPath;
    NSString *_appBrandIconUrl;
    NSString *_shareKey;
    WAAppPackageInfo *_packInfo;
}

@property(retain, nonatomic) WAAppPackageInfo *packInfo; // @synthesize packInfo=_packInfo;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(retain, nonatomic) NSString *appBrandIconUrl; // @synthesize appBrandIconUrl=_appBrandIconUrl;
@property(nonatomic) unsigned int appBrandVersion; // @synthesize appBrandVersion=_appBrandVersion;
@property(retain, nonatomic) NSString *appBrandPath; // @synthesize appBrandPath=_appBrandPath;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
- (void).cxx_destruct;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

