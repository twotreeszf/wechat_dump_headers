//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAVVideoComposition-Protocol.h"

@class NSMutableArray, NSString;

@interface TAVKeyframeVideoConfiguration : NSObject <TAVVideoComposition>
{
    NSMutableArray *_keyframes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keyframes; // @synthesize keyframes=_keyframes;
- (void)removeKeyframesInTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeAllKeyframes;
- (void)removeKeyframe:(id)arg1;
- (void)insertKeyframe:(id)arg1;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
