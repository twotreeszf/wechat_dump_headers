//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAMsgNodePermissionMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary *_dictAppId2PermissionInfo;
}

- (void).cxx_destruct;
- (void)loadPermissionInfo;
- (void)savePermissionInfo;
- (_Bool)hasPermissionWithJSAPI:(id)arg1 appId:(id)arg2;
- (void)setPermissionInfo:(id)arg1;
- (id)getPermissionInfoWithAppId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

