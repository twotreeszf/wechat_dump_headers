//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AppServiewCacheEventData : NSObject
{
    long long _jsEvent;
    NSDictionary *_dicParam;
    unsigned long long _webviewID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long webviewID; // @synthesize webviewID=_webviewID;
@property(retain, nonatomic) NSDictionary *dicParam; // @synthesize dicParam=_dicParam;
@property(nonatomic) long long jsEvent; // @synthesize jsEvent=_jsEvent;

@end

