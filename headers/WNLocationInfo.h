//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WNLocationInfo : NSObject
{
    double lat;
    double lng;
    double scale;
    NSString *address;
    NSString *poiName;
}

@property(retain, nonatomic) NSString *poiName; // @synthesize poiName;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) double lng; // @synthesize lng;
@property(nonatomic) double lat; // @synthesize lat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

