//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface TPDownloadProxyFactory : NSObject
{
    NSMutableDictionary *_tpDownloadProxyDic;
    NSLock *_proxyMapLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *proxyMapLock; // @synthesize proxyMapLock=_proxyMapLock;
@property(retain, nonatomic) NSMutableDictionary *tpDownloadProxyDic; // @synthesize tpDownloadProxyDic=_tpDownloadProxyDic;
- (id)init;
- (id)getTPDownloadProxy:(int)arg1;

@end

