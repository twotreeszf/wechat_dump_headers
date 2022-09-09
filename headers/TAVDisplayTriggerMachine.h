//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, VIDisplayTriggerObject;

@interface TAVDisplayTriggerMachine : NSObject
{
    CDUnknownBlockType _triggerOperation;
    long long _preferredFramesPerSecond;
    CADisplayLink *_displayLink;
    VIDisplayTriggerObject *_triggerObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VIDisplayTriggerObject *triggerObject; // @synthesize triggerObject=_triggerObject;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(copy, nonatomic) CDUnknownBlockType triggerOperation; // @synthesize triggerOperation=_triggerOperation;
- (void)pause;
- (void)start;
- (id)init;
- (id)initWithTriggerOperation:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

