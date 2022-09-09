//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMConfSDKVideoBase.h"

@class NSObject, VOIPVideoRender;
@protocol OS_dispatch_queue;

@interface MMConfSDKVideoRender : MMConfSDKVideoBase
{
    NSObject<OS_dispatch_queue> *_queue;
    VOIPVideoRender *_render;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VOIPVideoRender *render; // @synthesize render=_render;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)render:(char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)fpsTimerCheck;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (int)initView:(int)arg1 dic:(id)arg2 queue:(id)arg3;
- (void)dealloc;
- (id)init;

@end
