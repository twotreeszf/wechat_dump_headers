//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface MSEMessageMetaDataImageItem : NSObject <PBCoding>
{
    NSString *toUsername;
    NSString *imageUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_imageUrl;
+ (void)PBArrayAdd_toUsername;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

