//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString, WAPermissionActionSheetInfo, WAPermissionLaunchAction, WAPermissionWeAppBindInfo, WAPublicResInfo, WAStatePermissionBytes;

@interface WAPermissionInfo : NSObject <WCTTableCoding>
{
    unsigned int _requestType;
    WAPublicResInfo *pubResInfo;
    NSString *_appID;
    NSData *_permissionBytes;
    WAPermissionWeAppBindInfo *_weAppBindInfo;
    WAPermissionLaunchAction *_launchAction;
    WAPermissionActionSheetInfo *_actionSheetInfo;
    WAStatePermissionBytes *_statePermissionBytes;
    NSString *_permissionJsonStr;
    NSString *_username;
}

+ (void)__wcdb_index_9:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)permissionJsonStr;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)statePermissionBytes;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)actionSheetInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)launchAction;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)weAppBindInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)permissionBytes;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appID;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *permissionJsonStr; // @synthesize permissionJsonStr=_permissionJsonStr;
@property(retain, nonatomic) WAStatePermissionBytes *statePermissionBytes; // @synthesize statePermissionBytes=_statePermissionBytes;
@property(retain, nonatomic) WAPermissionActionSheetInfo *actionSheetInfo; // @synthesize actionSheetInfo=_actionSheetInfo;
@property(retain, nonatomic) WAPermissionLaunchAction *launchAction; // @synthesize launchAction=_launchAction;
@property(retain, nonatomic) WAPermissionWeAppBindInfo *weAppBindInfo; // @synthesize weAppBindInfo=_weAppBindInfo;
@property(retain, nonatomic) NSData *permissionBytes; // @synthesize permissionBytes=_permissionBytes;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) WAPublicResInfo *pubResInfo; // @synthesize pubResInfo;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

