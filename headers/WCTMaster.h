//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTMaster : NSObject
{
    int _rootpage;
    NSString *_type;
    NSString *_name;
    NSString *_tblName;
    NSString *_sql;
}

+ (id)tableName;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sql;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rootpage;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tblName;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)name;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)type;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(nonatomic) int rootpage; // @synthesize rootpage=_rootpage;
@property(retain, nonatomic) NSString *tblName; // @synthesize tblName=_tblName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end

