//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface SilentDownloadMessageWrap : NSObject <PBCoding>
{
    unsigned int fileSize;
    unsigned int createTime;
    NSString *username;
    long long mesSvrId;
}

+ (void)initialize;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mesSvrId;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize;
@property(nonatomic) long long mesSvrId; // @synthesize mesSvrId;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

