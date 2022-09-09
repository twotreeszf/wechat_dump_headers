//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMWebViewMpInfoModelVideoInfo, NSString;

@interface MMWebViewMpInfoModel : NSObject
{
    _Bool _hasItemShowType;
    _Bool _isPaySubcribe;
    _Bool _isTopBarShow;
    _Bool _isShowMenuBrandInfo;
    _Bool _showSourceInfo;
    unsigned int _msgId;
    unsigned int _itemIdx;
    unsigned int _itemShowType;
    NSString *_brandIconUrl;
    NSString *_brandName;
    NSString *_brandUserName;
    NSString *_pageTitle;
    NSString *_pageCover;
    NSString *_bizId;
    MMWebViewMpInfoModelVideoInfo *_videoInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebViewMpInfoModelVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) _Bool showSourceInfo; // @synthesize showSourceInfo=_showSourceInfo;
@property(nonatomic) _Bool isShowMenuBrandInfo; // @synthesize isShowMenuBrandInfo=_isShowMenuBrandInfo;
@property(nonatomic) _Bool isTopBarShow; // @synthesize isTopBarShow=_isTopBarShow;
@property(nonatomic) _Bool isPaySubcribe; // @synthesize isPaySubcribe=_isPaySubcribe;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(nonatomic) unsigned int itemIdx; // @synthesize itemIdx=_itemIdx;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *pageCover; // @synthesize pageCover=_pageCover;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
- (_Bool)isProfileModelDataValid;

@end
