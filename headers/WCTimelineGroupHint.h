//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WCTimelineGroupHint : NSObject <WCTTableCoding>
{
    unsigned int _groupId;
    NSString *_topFeedId;
    NSString *_bottomFeedId;
}

+ (void)__wcdb_column_constraint_73:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_72:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_71:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_70:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_69:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_68:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)bottomFeedId;
+ (const struct WCTProperty *)__wcdb_synthesize_67:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)topFeedId;
+ (const struct WCTProperty *)__wcdb_synthesize_66:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)groupId;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomFeedId; // @synthesize bottomFeedId=_bottomFeedId;
@property(retain, nonatomic) NSString *topFeedId; // @synthesize topFeedId=_topFeedId;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

