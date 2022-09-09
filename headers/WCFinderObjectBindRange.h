//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderBindableObjectProtocol;

@interface WCFinderObjectBindRange : NSObject
{
    id <WCFinderBindableObjectProtocol> _object;
    unsigned long long _type;
    NSString *_content;
    struct _NSRange _range;
}

+ (id)xmlStyleTagForType:(unsigned long long)arg1;
+ (id)xmlStyleTagFormatForType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <WCFinderBindableObjectProtocol> object; // @synthesize object=_object;

@end

