//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAEJFontDescriptor : NSObject
{
    NSString *source;
    NSString *name;
    float size;
    float weight;
    _Bool bold;
    _Bool italic;
    unsigned long long sumhash;
}

+ (id)descriptorWithParmas:(id)arg1;
@property(readonly, nonatomic) _Bool italic; // @synthesize italic;
@property(readonly, nonatomic) _Bool bold; // @synthesize bold;
@property(readonly, nonatomic) float size; // @synthesize size;
@property(readonly, nonatomic) float weight; // @synthesize weight;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
@property(readonly, nonatomic) NSString *source; // @synthesize source;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)sumHash;
- (void)weightParse:(const basic_string_90719d97 *)arg1;
- (void)fontParse:(basic_string_90719d97 *)arg1;

@end

