//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCIdOwner : NSObject <WCTTableCoding>
{
    NSString *_Id;
    NSString *_username;
}

+ (void)__wcdb_column_constraint_65:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_64:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_63:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_62:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)__wcdb_synthesize_61:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)Id;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *Id; // @synthesize Id=_Id;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

