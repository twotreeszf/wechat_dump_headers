//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface WCGestureVector : MMObject
{
    NSMutableArray *_doubleValueArray;
}

+ (id)vector;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *doubleValueArray; // @synthesize doubleValueArray=_doubleValueArray;
- (void)setDouble:(double)arg1 atIndex:(long long)arg2;
- (double)doubleAtIndex:(long long)arg1;
- (void)addDouble:(double)arg1;
- (long long)getGSVectorSize;
- (void)clear;

@end

