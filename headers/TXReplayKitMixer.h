//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXAudioBufferQueue;
@protocol OS_dispatch_source;

@interface TXReplayKitMixer : NSObject
{
    TXAudioBufferQueue *_appSamples;
    TXAudioBufferQueue *_micSamples;
    struct AudioStreamBasicDescription _ASBD;
    unsigned long long _maxBufCount;
    _Bool _timeChecked;
    _Bool _packPauseDelay;
    _Bool _hasMicIn;
    _Bool _hasAppIn;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _lastSendTime;
    CDStruct_1b6d18a9 _lastAppTime;
    NSObject<OS_dispatch_source> *_audioTimer;
    long long _deltaTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long deltaTime; // @synthesize deltaTime=_deltaTime;
- (void)resume;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)mixAudioInternal:(char *)arg1 withSrc:(char *)arg2 withLength:(unsigned int)arg3;
- (struct opaqueCMSampleBuffer *)newSampleByMix:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (struct opaqueCMSampleBuffer *)getSendSampleBuffer:(id)arg1;
- (void)pickBuffer:(id *)arg1 and:(id *)arg2;
- (void)appendSample:(struct opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)setStartTime:(CDStruct_1b6d18a9)arg1;
- (void)clear;
- (void)dealloc;
- (id)init;

@end

