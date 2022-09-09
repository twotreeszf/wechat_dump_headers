//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class FinderExtendedReading, FinderLiveTagInfo, FinderLocation, FinderStreamDivider, FinderTopic, MMMusicMVModel, NSArray, NSData, NSMutableArray, NSString, WCFinderAttachmentList, WCFinderCommentMutableArray, WCFinderContact, WCFinderDataItemRecommendConfiguration, WCFinderFeedBindEventInfo, WCFinderFoldLayout, WCFinderFriendsLikeMutableArray, WCFinderLikeMutableArray, WCFinderLiveInfo, WCFinderMedia, WCFinderMegaVideo, WCFinderObjectHotTopicMutableArray, WCFinderRecommenderMutableArray, WCFinderSnsShareInfo, WCFinderStreamLocationInfo;

@interface WCFinderDataItem : NSObject <WCTTableCoding, PBCoding>
{
    _Bool isUpLoading;
    _Bool isUpLoadFail;
    _Bool isDeleted;
    _Bool isCommentClose;
    _Bool fav;
    _Bool foldedFlag;
    _Bool allowForward;
    _Bool privateFlag;
    _Bool isNewsFeed;
    _Bool isFromSnsTimeline;
    _Bool _fromCamera;
    _Bool _secondaryShowFlag;
    _Bool _isFromSDKEditor;
    unsigned int cacheTime;
    unsigned int nextCheckObjectStatusTimeStamp;
    unsigned int stickyTime;
    unsigned int patMusicCount;
    int _visibilityMode;
    NSString *tid;
    NSString *disPlayTid;
    NSString *tmpLocalTid;
    NSString *username;
    NSString *nickname;
    double createTime;
    WCFinderLikeMutableArray *likeList;
    WCFinderCommentMutableArray *commentList;
    WCFinderCommentMutableArray *hotCommentList;
    long long forwardCount;
    long long likeFlag;
    long long uploadErrType;
    NSString *uploadErrMsg;
    WCFinderContact *contact;
    WCFinderRecommenderMutableArray *recommenderList;
    long long likeCount;
    long long commentCount;
    NSString *recommendReason;
    unsigned long long readCount;
    NSString *eupdOob;
    WCFinderMedia *media;
    NSString *refObjectID;
    unsigned long long refObjectFlag;
    WCFinderContact *refContact;
    NSString *refUsername;
    NSString *refNickname;
    unsigned long long recommendType;
    NSString *sendShareFavWording;
    NSString *tipsWording;
    double chooseCoverTime;
    unsigned long long warnFlag;
    NSString *warnWording;
    unsigned long long favCount;
    WCFinderFriendsLikeMutableArray *friendsLikeList;
    unsigned long long forwardStyle;
    unsigned long long fromScene;
    WCFinderDataItemRecommendConfiguration *recommendConfiguration;
    unsigned long long msgEventFlag;
    NSString *msgId;
    unsigned long long permissionFlag;
    WCFinderAttachmentList *attachmentList;
    long long objectType;
    WCFinderFeedBindEventInfo *eventInfo;
    NSString *fromAppId;
    NSString *fromOtherAppPostParamsJson;
    NSString *remoteUrl;
    WCFinderSnsShareInfo *snsShareInfo;
    WCFinderObjectHotTopicMutableArray *hotTopics;
    MMMusicMVModel *musicMVModel;
    long long _friendLikeCount;
    NSString *_nonceID;
    long long _objectStatus;
    WCFinderStreamLocationInfo *_locationInfo;
    WCFinderStreamLocationInfo *_mediaLocationInfo;
    NSMutableArray *_topics;
    unsigned long long _orgRecommendType;
    NSString *_sessionBuffer;
    WCFinderFoldLayout *_foldLayout;
    unsigned long long _urlValidTime;
    unsigned long long _likeActionTimestamp;
    long long _incFriendLikeCount;
    NSData *_likeBuffer;
    WCFinderLiveInfo *_liveInfo;
    unsigned long long _createFromType;
    unsigned long long _recvTimeMs;
    NSString *_staticCellLeftTips;
    unsigned long long _postPatMusicType;
    unsigned long long _musicType;
    NSString *_groupId;
    unsigned long long _eventTopicID;
    NSString *_debugMsg;
    FinderLiveTagInfo *_liveTagInfo;
    NSMutableArray *_visibilityFileIdLists;
    FinderStreamDivider *_feedWidgetInfo;
    NSString *_extUrlFromOpenSDK;
    WCFinderMegaVideo *_longVideo;
}

+ (id)finderDataItemFromObject:(id)arg1;
+ (void)__wcdb_column_constraint_72:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_71:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_70:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_69:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_68:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_67:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_66:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_65:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)musicMVModel;
+ (const struct WCTProperty *)__wcdb_synthesize_64:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)eventTopicID;
+ (const struct WCTProperty *)__wcdb_synthesize_63:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)remoteUrl;
+ (const struct WCTProperty *)__wcdb_synthesize_62:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromOtherAppPostParamsJson;
+ (const struct WCTProperty *)__wcdb_synthesize_61:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)patMusicCount;
+ (const struct WCTProperty *)__wcdb_synthesize_60:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromAppId;
+ (const struct WCTProperty *)__wcdb_synthesize_59:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hotTopics;
+ (const struct WCTProperty *)__wcdb_synthesize_58:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)snsShareInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_57:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isFromSnsTimeline;
+ (const struct WCTProperty *)__wcdb_synthesize_56:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isNewsFeed;
+ (const struct WCTProperty *)__wcdb_synthesize_55:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)recvTimeMs;
+ (const struct WCTProperty *)__wcdb_synthesize_54:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)stickyTime;
+ (const struct WCTProperty *)__wcdb_synthesize_53:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)liveInfo;
+ (const struct WCTProperty *)__wcdb_synthesize_52:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)objectType;
+ (const struct WCTProperty *)__wcdb_synthesize_51:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)permissionFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_50:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)privateFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_49:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgId;
+ (const struct WCTProperty *)__wcdb_synthesize_48:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)msgEventFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_47:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeActionTimestamp;
+ (const struct WCTProperty *)__wcdb_synthesize_46:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)recommendConfiguration;
+ (const struct WCTProperty *)__wcdb_synthesize_45:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fromScene;
+ (const struct WCTProperty *)__wcdb_synthesize_44:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)forwardStyle;
+ (const struct WCTProperty *)__wcdb_synthesize_43:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)urlValidTime;
+ (const struct WCTProperty *)__wcdb_synthesize_42:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)allowForward;
+ (const struct WCTProperty *)__wcdb_synthesize_41:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)foldedFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_40:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)friendsLikeList;
+ (const struct WCTProperty *)__wcdb_synthesize_39:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)favCount;
+ (const struct WCTProperty *)__wcdb_synthesize_38:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)fav;
+ (const struct WCTProperty *)__wcdb_synthesize_37:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)warnWording;
+ (const struct WCTProperty *)__wcdb_synthesize_36:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)warnFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_35:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)chooseCoverTime;
+ (const struct WCTProperty *)__wcdb_synthesize_34:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tipsWording;
+ (const struct WCTProperty *)__wcdb_synthesize_33:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)secondaryShowFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_32:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nextCheckObjectStatusTimeStamp;
+ (const struct WCTProperty *)__wcdb_synthesize_31:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)sendShareFavWording;
+ (const struct WCTProperty *)__wcdb_synthesize_30:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)objectStatus;
+ (const struct WCTProperty *)__wcdb_synthesize_29:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nonceID;
+ (const struct WCTProperty *)__wcdb_synthesize_28:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)friendLikeCount;
+ (const struct WCTProperty *)__wcdb_synthesize_27:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)refNickname;
+ (const struct WCTProperty *)__wcdb_synthesize_26:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)refUsername;
+ (const struct WCTProperty *)__wcdb_synthesize_25:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)refObjectFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_24:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)refObjectID;
+ (const struct WCTProperty *)__wcdb_synthesize_23:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isCommentClose;
+ (const struct WCTProperty *)__wcdb_synthesize_22:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isDeleted;
+ (const struct WCTProperty *)__wcdb_synthesize_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)hotCommentList;
+ (const struct WCTProperty *)__wcdb_synthesize_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)readCount;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)eupdOob;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cacheTime;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentCount;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeCount;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uploadErrMsg;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)uploadErrType;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isUpLoadFail;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)recommenderList;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)disPlayTid;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tmpLocalTid;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isUpLoading;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)forwardCount;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentList;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeList;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)media;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickname;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_musicMVModel;
+ (void)PBArrayAdd_patMusicCount;
+ (void)PBArrayAdd_hotTopics;
+ (void)PBArrayAdd_snsShareInfo;
+ (void)PBArrayAdd_remoteUrl;
+ (void)PBArrayAdd_fromOtherAppPostParamsJson;
+ (void)PBArrayAdd_fromAppId;
+ (void)PBArrayAdd_eventInfo;
+ (void)PBArrayAdd_isFromSnsTimeline;
+ (void)PBArrayAdd_isNewsFeed;
+ (void)PBArrayAdd_objectType;
+ (void)PBArrayAdd_stickyTime;
+ (void)PBArrayAdd_attachmentList;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_privateFlag;
+ (void)PBArrayAdd_msgId;
+ (void)PBArrayAdd_msgEventFlag;
+ (void)PBArrayAdd_recommendConfiguration;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_forwardStyle;
+ (void)PBArrayAdd_allowForward;
+ (void)PBArrayAdd_foldedFlag;
+ (void)PBArrayAdd_friendsLikeList;
+ (void)PBArrayAdd_favCount;
+ (void)PBArrayAdd_fav;
+ (void)PBArrayAdd_warnWording;
+ (void)PBArrayAdd_warnFlag;
+ (void)PBArrayAdd_chooseCoverTime;
+ (void)PBArrayAdd_tipsWording;
+ (void)PBArrayAdd_nextCheckObjectStatusTimeStamp;
+ (void)PBArrayAdd_sendShareFavWording;
+ (void)PBArrayAdd_recommendType;
+ (void)PBArrayAdd_refNickname;
+ (void)PBArrayAdd_refUsername;
+ (void)PBArrayAdd_refContact;
+ (void)PBArrayAdd_refObjectFlag;
+ (void)PBArrayAdd_refObjectID;
+ (void)PBArrayAdd_isCommentClose;
+ (void)PBArrayAdd_isDeleted;
+ (void)PBArrayAdd_media;
+ (void)PBArrayAdd_eupdOob;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_commentCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_recommenderList;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_uploadErrMsg;
+ (void)PBArrayAdd_uploadErrType;
+ (void)PBArrayAdd_isUpLoadFail;
+ (void)PBArrayAdd_isUpLoading;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_forwardCount;
+ (void)PBArrayAdd_hotCommentList;
+ (void)PBArrayAdd_commentList;
+ (void)PBArrayAdd_likeList;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_tmpLocalTid;
+ (void)PBArrayAdd_disPlayTid;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMegaVideo *longVideo; // @synthesize longVideo=_longVideo;
@property(copy, nonatomic) NSString *extUrlFromOpenSDK; // @synthesize extUrlFromOpenSDK=_extUrlFromOpenSDK;
@property(retain, nonatomic) FinderStreamDivider *feedWidgetInfo; // @synthesize feedWidgetInfo=_feedWidgetInfo;
@property(retain, nonatomic) NSMutableArray *visibilityFileIdLists; // @synthesize visibilityFileIdLists=_visibilityFileIdLists;
@property(nonatomic) int visibilityMode; // @synthesize visibilityMode=_visibilityMode;
@property(retain, nonatomic) FinderLiveTagInfo *liveTagInfo; // @synthesize liveTagInfo=_liveTagInfo;
@property(retain, nonatomic) NSString *debugMsg; // @synthesize debugMsg=_debugMsg;
@property(nonatomic) unsigned long long eventTopicID; // @synthesize eventTopicID=_eventTopicID;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(nonatomic) unsigned long long postPatMusicType; // @synthesize postPatMusicType=_postPatMusicType;
@property(copy, nonatomic) NSString *staticCellLeftTips; // @synthesize staticCellLeftTips=_staticCellLeftTips;
@property(nonatomic) unsigned long long recvTimeMs; // @synthesize recvTimeMs=_recvTimeMs;
@property(nonatomic) unsigned long long createFromType; // @synthesize createFromType=_createFromType;
@property(retain, nonatomic) WCFinderLiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) _Bool isFromSDKEditor; // @synthesize isFromSDKEditor=_isFromSDKEditor;
@property(retain, nonatomic) NSData *likeBuffer; // @synthesize likeBuffer=_likeBuffer;
@property(nonatomic) long long incFriendLikeCount; // @synthesize incFriendLikeCount=_incFriendLikeCount;
@property(nonatomic) unsigned long long likeActionTimestamp; // @synthesize likeActionTimestamp=_likeActionTimestamp;
@property(nonatomic) unsigned long long urlValidTime; // @synthesize urlValidTime=_urlValidTime;
@property(retain, nonatomic) WCFinderFoldLayout *foldLayout; // @synthesize foldLayout=_foldLayout;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long orgRecommendType; // @synthesize orgRecommendType=_orgRecommendType;
@property(nonatomic) _Bool secondaryShowFlag; // @synthesize secondaryShowFlag=_secondaryShowFlag;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(nonatomic) _Bool fromCamera; // @synthesize fromCamera=_fromCamera;
@property(retain, nonatomic) WCFinderStreamLocationInfo *mediaLocationInfo; // @synthesize mediaLocationInfo=_mediaLocationInfo;
@property(retain, nonatomic) WCFinderStreamLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(nonatomic) long long objectStatus; // @synthesize objectStatus=_objectStatus;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) long long friendLikeCount; // @synthesize friendLikeCount=_friendLikeCount;
@property(retain, nonatomic) MMMusicMVModel *musicMVModel; // @synthesize musicMVModel;
@property(nonatomic) unsigned int patMusicCount; // @synthesize patMusicCount;
@property(retain, nonatomic) WCFinderObjectHotTopicMutableArray *hotTopics; // @synthesize hotTopics;
@property(retain, nonatomic) WCFinderSnsShareInfo *snsShareInfo; // @synthesize snsShareInfo;
@property(copy, nonatomic) NSString *remoteUrl; // @synthesize remoteUrl;
@property(copy, nonatomic) NSString *fromOtherAppPostParamsJson; // @synthesize fromOtherAppPostParamsJson;
@property(copy, nonatomic) NSString *fromAppId; // @synthesize fromAppId;
@property(retain, nonatomic) WCFinderFeedBindEventInfo *eventInfo; // @synthesize eventInfo;
@property(nonatomic) _Bool isFromSnsTimeline; // @synthesize isFromSnsTimeline;
@property(nonatomic) _Bool isNewsFeed; // @synthesize isNewsFeed;
@property(nonatomic) long long objectType; // @synthesize objectType;
@property(nonatomic) unsigned int stickyTime; // @synthesize stickyTime;
@property(retain, nonatomic) WCFinderAttachmentList *attachmentList; // @synthesize attachmentList;
@property(nonatomic) unsigned long long permissionFlag; // @synthesize permissionFlag;
@property(nonatomic) _Bool privateFlag; // @synthesize privateFlag;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId;
@property(nonatomic) unsigned long long msgEventFlag; // @synthesize msgEventFlag;
@property(retain, nonatomic) WCFinderDataItemRecommendConfiguration *recommendConfiguration; // @synthesize recommendConfiguration;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene;
@property(nonatomic) unsigned long long forwardStyle; // @synthesize forwardStyle;
@property(nonatomic) _Bool allowForward; // @synthesize allowForward;
@property(nonatomic) _Bool foldedFlag; // @synthesize foldedFlag;
@property(retain, nonatomic) WCFinderFriendsLikeMutableArray *friendsLikeList; // @synthesize friendsLikeList;
@property(nonatomic) unsigned long long favCount; // @synthesize favCount;
@property(nonatomic) _Bool fav; // @synthesize fav;
@property(retain, nonatomic) NSString *warnWording; // @synthesize warnWording;
@property(nonatomic) unsigned long long warnFlag; // @synthesize warnFlag;
@property(nonatomic) double chooseCoverTime; // @synthesize chooseCoverTime;
@property(retain, nonatomic) NSString *tipsWording; // @synthesize tipsWording;
@property(nonatomic) unsigned int nextCheckObjectStatusTimeStamp; // @synthesize nextCheckObjectStatusTimeStamp;
@property(copy, nonatomic) NSString *sendShareFavWording; // @synthesize sendShareFavWording;
@property(nonatomic) unsigned long long recommendType; // @synthesize recommendType;
@property(copy, nonatomic) NSString *refNickname; // @synthesize refNickname;
@property(copy, nonatomic) NSString *refUsername; // @synthesize refUsername;
@property(retain, nonatomic) WCFinderContact *refContact; // @synthesize refContact;
@property(nonatomic) unsigned long long refObjectFlag; // @synthesize refObjectFlag;
@property(copy, nonatomic) NSString *refObjectID; // @synthesize refObjectID;
@property(nonatomic) _Bool isCommentClose; // @synthesize isCommentClose;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted;
@property(retain, nonatomic) WCFinderMedia *media; // @synthesize media;
@property(retain, nonatomic) NSString *eupdOob; // @synthesize eupdOob;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount;
@property(nonatomic) unsigned int cacheTime; // @synthesize cacheTime;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason;
@property(nonatomic) long long commentCount; // @synthesize commentCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount;
@property(retain, nonatomic) WCFinderRecommenderMutableArray *recommenderList; // @synthesize recommenderList;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact;
@property(retain, nonatomic) NSString *uploadErrMsg; // @synthesize uploadErrMsg;
@property(nonatomic) long long uploadErrType; // @synthesize uploadErrType;
@property(nonatomic) _Bool isUpLoadFail; // @synthesize isUpLoadFail;
@property(nonatomic) _Bool isUpLoading; // @synthesize isUpLoading;
@property(nonatomic) long long likeFlag; // @synthesize likeFlag;
@property(nonatomic) long long forwardCount; // @synthesize forwardCount;
@property(retain, nonatomic) WCFinderCommentMutableArray *hotCommentList; // @synthesize hotCommentList;
@property(retain, nonatomic) WCFinderCommentMutableArray *commentList; // @synthesize commentList;
@property(retain, nonatomic) WCFinderLikeMutableArray *likeList; // @synthesize likeList;
@property(nonatomic) double createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username;
@property(copy, nonatomic) NSString *tmpLocalTid; // @synthesize tmpLocalTid;
@property(copy, nonatomic) NSString *disPlayTid; // @synthesize disPlayTid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid;
- (id)findHotNewsTopic;
- (id)longVideoMedia;
- (id)longVideoNonceId;
- (id)longVideoId;
- (_Bool)hasLongVideo;
@property(readonly, copy) NSString *description;
- (id)pathForSightData;
- (id)pathForCover;
- (id)pathForPreview;
- (id)thumbImageUrl;
- (_Bool)dataItemUploadSuccess;
- (_Bool)isFullScreenFeedExceptLive;
- (_Bool)isFullScreenFeed;
- (_Bool)isMediaURLValid;
- (_Bool)canUseCache;
- (_Bool)canShowInLandscapeWithCellIndex:(unsigned long long)arg1;
- (_Bool)shouldFileDumpItem;
- (_Bool)isPhotoWithBGM;
- (_Bool)isPatOriginalMusicFeed;
- (_Bool)isFullScreenFriendRecommendTipsBarStyle;
- (_Bool)isFullScreenFollowHistoryTipsBarStyle;
- (_Bool)shouldShowFullScreenTipsBar;
- (id)getPatMusicGroupId;
- (_Bool)disableForwardByPrivateAccount;
- (_Bool)disableFavByPrivateAccount;
- (_Bool)isPrivateAccount;
- (_Bool)isSelfPrivate;
- (_Bool)shouldShowNickNameWhenForwardToSns;
- (_Bool)isRecommendByMyself;
@property(readonly, copy, nonatomic) NSArray *mediaArray;
- (id)genFinderObject;
- (_Bool)containVideo;
- (_Bool)shouldShockdLike;
- (_Bool)enableFeedRetry;
- (_Bool)uploadTooLargeAssetError;
- (_Bool)isNotRealnameError;
@property(readonly, nonatomic) unsigned long long mediaType;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @dynamic extReading;
@property(retain, nonatomic) NSMutableArray *mentionedNicknameArray;
@property(retain, nonatomic) NSMutableArray *mentionedContactsArray;
@property(retain, nonatomic) FinderTopic *topic; // @dynamic topic;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
- (_Bool)isEmptyMediaArray;
- (_Bool)hasBGMStreamUrl;
- (_Bool)isContainPhoto;
- (_Bool)isVideoItem;
- (_Bool)isPureText;
@property(readonly, nonatomic) unsigned long long objectID;
- (_Bool)isPrivateLike;
- (_Bool)isLikeState;
- (_Bool)isVaild;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

