//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMKPoint, MMKSize;

@interface MMKRect : NSObject
{
    MMKPoint *_origin;
    MMKSize *_size;
}

+ (id)kRectWithOrigin:(id)arg1 size:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMKSize *size; // @synthesize size=_size;
@property(readonly, nonatomic) MMKPoint *origin; // @synthesize origin=_origin;
- (id)description;
- (id)initWithOrigin:(id)arg1 size:(id)arg2;

@end

