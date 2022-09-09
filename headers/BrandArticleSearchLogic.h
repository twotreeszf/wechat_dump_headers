//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSWebSearchMgr;
@protocol BrandArticleSearchLogicDelegateForController;

@interface BrandArticleSearchLogic : NSObject
{
    FTSWebSearchMgr *m_searchMgr;
    _Bool m_isSearching;
    id <BrandArticleSearchLogicDelegateForController> delegateForController;
}

+ (_Bool)isOpenSearch;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BrandArticleSearchLogicDelegateForController> delegateForController; // @synthesize delegateForController;
- (void)cancelSearch;
- (void)setupSearch;
- (void)openWeAppPage:(id)arg1;
- (void)openMoreDetailWithParams:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)openMsgSession:(id)arg1;
- (void)openBrandProfile:(id)arg1 withParams:(id)arg2;
- (void)openUrlToView:(id)arg1 withParams:(id)arg2;
- (_Bool)isSearching;
- (void)onEndSearch;
- (void)onBeginSearch;
- (id)getWebSearchMgr;
- (void)dealloc;
- (id)init;

@end

