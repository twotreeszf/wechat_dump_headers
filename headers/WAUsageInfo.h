//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAUsageInfo : MMObject <WCTTableCoding>
{
    unsigned int _appType;
    unsigned int _lastOpenTime;
    NSString *_userName;
}

+ (void)__wcdb_index_5:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_4:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastOpenTime;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)appType;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)userName;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastOpenTime; // @synthesize lastOpenTime=_lastOpenTime;
@property(nonatomic) unsigned int appType; // @synthesize appType=_appType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

