//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAdInteractionAnimationInfo.h"

@class NSArray;

@interface WCAdInteractionKeyframeAnimationInfo : WCAdInteractionAnimationInfo
{
    _Bool _remainPreviousAnimation;
    NSArray *_timingFunctions;
    NSArray *_values;
    NSArray *_keyTimes;
    double _repeatCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool remainPreviousAnimation; // @synthesize remainPreviousAnimation=_remainPreviousAnimation;
@property(nonatomic) double repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=_keyTimes;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSArray *timingFunctions; // @synthesize timingFunctions=_timingFunctions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

