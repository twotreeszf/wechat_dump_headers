//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol YYWebViewInterface;

@protocol WSTemplateJSLogicImplDelegate <NSObject>
- (unsigned long long)getLocalJSBusinessType;
- (void)webViewContentProcessDidTerminate:(id <YYWebViewInterface>)arg1;
- (_Bool)onJsApiHandlerForwardDealWithFunc:(NSString *)arg1 params:(NSDictionary *)arg2 callbackID:(NSString *)arg3;
- (NSArray *)jsEventsNeedRegister;
@end

