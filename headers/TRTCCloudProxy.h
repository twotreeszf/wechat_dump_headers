//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class TRTCCloud;

@interface TRTCCloudProxy : NSProxy
{
    TRTCCloud *_cloud;
}

+ (Class)class;
- (void).cxx_destruct;
@property(retain, nonatomic) TRTCCloud *cloud; // @synthesize cloud=_cloud;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)destroy;
- (id)initWithInstance:(id)arg1;

@end

