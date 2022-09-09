//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MMLiteAppAuthInfo : MMObject <WCTTableCoding, NSCopying>
{
    NSString *host;
    NSString *param;
    NSString *paramMap;
    long long updateTime;
    NSString *headerMap;
}

+ (id)createItem:(id)arg1 param:(id)arg2 paramDic:(id)arg3 headerDic:(id)arg4;
+ (void)__wcdb_column_constraint_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headerMap;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)paramMap;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)param;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)host;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *headerMap; // @synthesize headerMap;
@property(nonatomic) long long updateTime; // @synthesize updateTime;
@property(retain, nonatomic) NSString *paramMap; // @synthesize paramMap;
@property(retain, nonatomic) NSString *param; // @synthesize param;
@property(retain, nonatomic) NSString *host; // @synthesize host;
- (id)getHeaderDic;
- (id)getParamDic;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

