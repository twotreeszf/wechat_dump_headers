//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WATemplateMsgBanWrap : MMObject <PBCoding>
{
    _Bool isBanned;
    NSString *appUsername;
    NSString *appNickname;
    NSString *avatarURLString;
}

+ (void)initialize;
+ (void)PBArrayAdd_isBanned;
+ (void)PBArrayAdd_avatarURLString;
+ (void)PBArrayAdd_appNickname;
+ (void)PBArrayAdd_appUsername;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBanned; // @synthesize isBanned;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString;
@property(copy, nonatomic) NSString *appNickname; // @synthesize appNickname;
@property(copy, nonatomic) NSString *appUsername; // @synthesize appUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

