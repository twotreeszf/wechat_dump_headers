//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAEJBindingEventedBase.h"

#import "EJWindowEventsDelegate-Protocol.h"

@interface WAEJBindingWindowEvents : WAEJBindingEventedBase <EJWindowEventsDelegate>
{
}

+ (void *)_ptr_to_set_onresize;
+ (void *)_ptr_to_get_onresize;
+ (void *)_ptr_to_set_onpageshow;
+ (void *)_ptr_to_get_onpageshow;
+ (void *)_ptr_to_set_onpagehide;
+ (void *)_ptr_to_get_onpagehide;
- (void)resize;
- (void)resume;
- (void)pause;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;

@end

