//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFaceHBQRCodeInfo : NSObject
{
    unsigned int _totalNum;
    NSString *_sendId;
    NSString *_reqkey;
    NSString *_shareUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned int totalNum; // @synthesize totalNum=_totalNum;
@property(retain, nonatomic) NSString *reqkey; // @synthesize reqkey=_reqkey;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;

@end

