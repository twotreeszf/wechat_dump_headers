//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WXGBackupMediaStruct : NSObject
{
    int _mediaType;
    NSString *_mediaPath;
    NSString *_mediaID;
    NSString *_md5;
    long long _msgSvrID;
}

- (void).cxx_destruct;
@property(nonatomic) long long msgSvrID; // @synthesize msgSvrID=_msgSvrID;
@property(nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *mediaID; // @synthesize mediaID=_mediaID;
@property(retain, nonatomic) NSString *mediaPath; // @synthesize mediaPath=_mediaPath;

@end

