//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"
#import "WCFinderModUserInfoExt-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class FinderContactLiveInfo, FinderContactMsgInfo, FinderLiveNoticeInfo, NSString, WCFinderAuthInfo, WCFinderContactExtInfo;

@interface WCFinderContact : NSObject <PBCoding, WCFinderModUserInfoExt, WCFinderLiveExt, WCTTableCoding>
{
    _Bool showOriginalEntry;
    _Bool _fansIsSelf;
    _Bool _isLongVideoOpen;
    unsigned int followTime;
    unsigned int _cacheTime;
    NSString *username;
    NSString *nickname;
    NSString *headURL;
    unsigned long long seq;
    unsigned long long followState;
    NSString *signature;
    NSString *coverImageURL;
    unsigned long long spamStatus;
    WCFinderContactExtInfo *extInfo;
    unsigned long long blacklistIdentityFlag;
    WCFinderAuthInfo *authInfo;
    FinderContactMsgInfo *msgInfo;
    unsigned long long originalFlag;
    unsigned long long friendFollowCount;
    NSString *_livingDefaultCoverImageURL;
    long long _extFlag;
    NSString *_fansid;
    unsigned long long _mentionUserFromType;
    unsigned long long _liveStatus;
    FinderLiveNoticeInfo *_liveNoticeInfo;
    FinderContactLiveInfo *_liveSwitchInfo;
}

+ (id)finderContactWithFansContact:(id)arg1;
+ (id)finderContact:(id)arg1;
+ (void)__wcdb_index_23:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_22:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)friendFollowCount;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)liveSwitchInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)showOriginalEntry;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)originalFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)blacklistIdentityFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fansIsSelf;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fansid;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)extFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)spamStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)coverImageURL;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)authInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)followTime;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)signature;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)followState;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)seq;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headURL;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickname;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_friendFollowCount;
+ (void)PBArrayAdd_showOriginalEntry;
+ (void)PBArrayAdd_originalFlag;
+ (void)PBArrayAdd_msgInfo;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_blacklistIdentityFlag;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_spamStatus;
+ (void)PBArrayAdd_coverImageURL;
+ (void)PBArrayAdd_followTime;
+ (void)PBArrayAdd_signature;
+ (void)PBArrayAdd_followState;
+ (void)PBArrayAdd_seq;
+ (void)PBArrayAdd_headURL;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderContactLiveInfo *liveSwitchInfo; // @synthesize liveSwitchInfo=_liveSwitchInfo;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @synthesize liveNoticeInfo=_liveNoticeInfo;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(readonly, nonatomic) _Bool isLongVideoOpen; // @synthesize isLongVideoOpen=_isLongVideoOpen;
@property(nonatomic) unsigned long long mentionUserFromType; // @synthesize mentionUserFromType=_mentionUserFromType;
@property(nonatomic) _Bool fansIsSelf; // @synthesize fansIsSelf=_fansIsSelf;
@property(retain, nonatomic) NSString *fansid; // @synthesize fansid=_fansid;
@property(nonatomic) long long extFlag; // @synthesize extFlag=_extFlag;
@property(nonatomic) unsigned int cacheTime; // @synthesize cacheTime=_cacheTime;
@property(retain, nonatomic) NSString *livingDefaultCoverImageURL; // @synthesize livingDefaultCoverImageURL=_livingDefaultCoverImageURL;
@property(nonatomic) unsigned long long friendFollowCount; // @synthesize friendFollowCount;
@property(nonatomic) _Bool showOriginalEntry; // @synthesize showOriginalEntry;
@property(nonatomic) unsigned long long originalFlag; // @synthesize originalFlag;
@property(retain, nonatomic) FinderContactMsgInfo *msgInfo; // @synthesize msgInfo;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo;
@property(nonatomic) unsigned long long blacklistIdentityFlag; // @synthesize blacklistIdentityFlag;
@property(retain, nonatomic) WCFinderContactExtInfo *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned long long spamStatus; // @synthesize spamStatus;
@property(retain, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL;
@property(nonatomic) unsigned int followTime; // @synthesize followTime;
@property(retain, nonatomic) NSString *signature; // @synthesize signature;
@property(nonatomic) unsigned long long followState; // @synthesize followState;
@property(nonatomic) unsigned long long seq; // @synthesize seq;
@property(retain, nonatomic) NSString *headURL; // @synthesize headURL;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void)updateContactForbidReproduceByMusic:(_Bool)arg1;
- (_Bool)isForbidReproduceByMusic;
- (_Bool)isMale;
- (_Bool)isFemale;
- (_Bool)hasNewsFeedPostEntry;
- (id)convertToWxContact;
- (void)fillToWxContact:(id)arg1;
- (id)genFinderContact;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool shieldFeeds;
- (void)setIsFinderShowAtWxProfile:(_Bool)arg1;
- (_Bool)isFinderShowAtWxProfile;
- (void)setIsHiddenMentionedFeed:(_Bool)arg1;
- (_Bool)isHiddenMentionedFeed;
- (_Bool)isHasLiveLottery;
- (_Bool)isBlacked;
@property(readonly, nonatomic) _Bool isPrivateAccount;
@property(readonly, nonatomic) _Bool isFollowState;
- (_Bool)isEnterpriseContact;
- (_Bool)isContactSilent;
- (_Bool)isContactBlocked;
- (_Bool)isContactNormal;
- (_Bool)shouldShowOriginalEntry;
- (_Bool)isContactOriginal;
- (_Bool)hasDiffWith:(id)arg1;
- (_Bool)hasRealName;
- (_Bool)hasGuarantor;
- (_Bool)hasCoverImg;
- (_Bool)hadCertified;
- (_Bool)hasSignature;
- (void)dealloc;
- (id)getPBPropertyTable;
- (id)searchToNormalDisplayNickName;
- (id)searchToNormalContact;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onUserInfoChange;
- (_Bool)hadPersionalOrEnterpriseCertified;
- (id)locationStr;
- (id)sexStr;
- (_Bool)isShowSex;
- (void)setShowSex:(long long)arg1;
- (void)setNotShowSex;
- (_Bool)isShowLocation;
- (void)setShowLocationWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)setNotShowLocation;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end
