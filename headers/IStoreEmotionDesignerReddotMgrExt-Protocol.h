//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, PersonalDesigner;

@protocol IStoreEmotionDesignerReddotMgrExt <NSObject>

@optional
- (void)onDesignerPersonalInfoUpdated:(PersonalDesigner *)arg1;
- (void)onDesigner:(NSString *)arg1 singlePid:(NSString *)arg2 reddotStatusChange:(_Bool)arg3;
- (void)onDesigner:(NSString *)arg1 changReddotStatus:(_Bool)arg2 newReddotPids:(NSArray *)arg3;
@end
