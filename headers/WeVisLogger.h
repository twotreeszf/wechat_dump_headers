//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WeVisLogAdapterDelegate;

@interface WeVisLogger : NSObject
{
    id <WeVisLogAdapterDelegate> _adapter;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
@property(retain, nonatomic) id <WeVisLogAdapterDelegate> adapter; // @synthesize adapter=_adapter;
- (void)setLogAdapter:(id)arg1;
- (CDUnknownFunctionPointerType)getLogCallback;
- (void)logWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;

@end

