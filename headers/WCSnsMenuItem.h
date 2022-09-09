//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCSnsMenuItem : MMObject <PBCoding>
{
    unsigned int menuActionType;
    unsigned int alertActionType;
    NSString *title;
    NSString *alertWording;
}

+ (void)initialize;
+ (void)PBArrayAdd_alertActionType;
+ (void)PBArrayAdd_alertWording;
+ (void)PBArrayAdd_menuActionType;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) unsigned int alertActionType; // @synthesize alertActionType;
@property(retain, nonatomic) NSString *alertWording; // @synthesize alertWording;
@property(nonatomic) unsigned int menuActionType; // @synthesize menuActionType;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (_Bool)isValidForShow;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

