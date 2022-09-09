//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseMgr.h"

#import "MMMenuControllerExt-Protocol.h"

@class CMessageWrap, NSString, WCFingertipSearchReportModel, WCTextSearchEntity;

@interface WCWebSearchService : WSTemplateBaseMgr <MMMenuControllerExt>
{
    CMessageWrap *_curMsgWrap;
    WCFingertipSearchReportModel *_fingertipSearchReportModel;
    WCTextSearchEntity *_sessionTextSearchEntity;
}

+ (_Bool)IsImageSearchScene:(int)arg1;
+ (_Bool)IsFingertipSearchScene:(int)arg1;
+ (id)FingertipSearchExpressHintWord;
+ (_Bool)IsEnableFingertipSearchEntranceAnimation;
+ (_Bool)IsEnableImageSearch;
+ (_Bool)IsEnableFingertipSearch;
+ (_Bool)IsEnableChatSearchEntrance;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTextSearchEntity *sessionTextSearchEntity; // @synthesize sessionTextSearchEntity=_sessionTextSearchEntity;
@property(retain, nonatomic) WCFingertipSearchReportModel *fingertipSearchReportModel; // @synthesize fingertipSearchReportModel=_fingertipSearchReportModel;
@property(retain, nonatomic) CMessageWrap *curMsgWrap; // @synthesize curMsgWrap=_curMsgWrap;
- (void)onMenuControllerDidShow;
- (unsigned int)packageResouceSubType;
- (unsigned int)packageResouceType;
- (id)templateResouceRootPath;
- (id)appDefaultTemplateResoucePath;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

