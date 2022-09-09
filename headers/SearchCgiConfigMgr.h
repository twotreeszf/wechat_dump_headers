//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMLimitedModeExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString, SearchCgiConfigData;

@interface SearchCgiConfigMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, IMsgExt, MMLimitedModeExt, MMServiceProtocol>
{
    SearchCgiConfigData *_cgiConfig;
    _Bool _bProtectRequst;
    unsigned int _lastFailRequstTime;
    SearchCgiConfigData *_dicDefaultConfig;
    _Bool _isUpdatingCgiConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isUpdatingCgiConfig; // @synthesize isUpdatingCgiConfig=_isUpdatingCgiConfig;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onAuthOK;
- (void)parseDic:(id)arg1 requestKeys:(id)arg2;
- (void)handleResp:(id)arg1 andRequest:(id)arg2;
- (void)handleLogicError;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doRequest;
- (id)getBizTopSearchPlaceHolder;
- (id)getNavGuideConfigTilte:(unsigned long long)arg1;
- (id)getGuideConfigTilte:(unsigned long long)arg1;
- (id)getDefaultConfigPathForLang:(id)arg1;
- (id)getDefaultConfig;
- (void)resetData;
- (void)cleanAllCache;
- (_Bool)tryRequest;
- (id)dataPath;
- (void)removeFile;
- (void)writeDataToFile;
- (void)initData;
- (id)getSearchId;
- (unsigned long long)getSnsContactMatchQueryLenLimit;
- (_Bool)isSnsContactsMatchOpen;
- (long long)getFFWebSearchKeyboardState;
- (unsigned long long)getFFWebSearchGuideParam;
- (id)getBrowseIconUrlInLabDetailView;
- (id)getFFBrowseIconUrl;
- (id)getFFBrowseEntryTitle;
- (_Bool)isFFBrowseEntryOpen;
- (id)getWebSearchIconUrlInLabDetailView;
- (id)getFFWebSearchIconUrl;
- (id)getFFWebSearchBarPlaceHolder;
- (id)getFFWebSearchTitle;
- (_Bool)isFFWebSearchEntryOpen;
- (id)getSearchGuideHotwordConfig;
- (id)getNavSearchGuideConfig;
- (id)getSearchGuideConfig:(long long)arg1;
- (id)getDiscoverSearchGuideConfigForH5;
- (_Bool)isSugOpenForMFSBiz;
- (_Bool)isSugOpenForTabNovel;
- (_Bool)isSugOpenForTabEmot;
- (_Bool)isSugOpenForTabMusic;
- (_Bool)isSugOpenForTabSnsLocal;
- (_Bool)isSugOpenForTabSns;
- (_Bool)isSugOpenForTabArticleLocal;
- (_Bool)isSugOpenForTabArticle;
- (_Bool)isSugOpenForTabBizServiceMore;
- (_Bool)isSugOpenForTabBiz;
- (_Bool)isSugOpenForGlobalNovelMore;
- (_Bool)isSugOpenForGlobalEmotMore;
- (_Bool)isSugOpenForGlobalMusicMore;
- (_Bool)isSugOpenForGlobalWeAppMore;
- (_Bool)isSugOpenForGlobalBizMore;
- (_Bool)isSugOpenForGlobalSnsMore;
- (_Bool)isSugOpenForGlobalMix;
- (_Bool)isSugOpenForBrandArticleSearch;
- (id)getWebSearchBarWording;
- (id)getValidConfig;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

