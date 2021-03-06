//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol FTSTopHitDelegate <NSObject>

@optional
- (_Bool)isTopHitFeatureReady;
- (void)sortFeatures:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getFeatureDictionary;
- (_Bool)isTopHitContactActive:(NSString *)arg1;
- (_Bool)isTopHitAddressBookReady;
- (_Bool)isTopHitContactReady;
- (void)sortAddressBookFriends:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (void)sortContacts:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (NSMutableDictionary *)getNickNameToFriendsDictionary;
- (NSMutableDictionary *)getAddressBookDictionary;
- (NSMutableDictionary *)getContactDictionary;
- (NSMutableDictionary *)getChinesePinyin;
- (unsigned int)getCreateTimeForUser:(NSString *)arg1;
@end

