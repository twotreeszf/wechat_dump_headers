//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BrandTimelineHelper : NSObject
{
}

+ (_Bool)jumpVideoPageView:(id)arg1 fromMsgWrap:(id)arg2 fromItemView:(id)arg3 fromVC:(id)arg4;
+ (void)openRecommendMsgWithViewModel:(id)arg1 fromVC:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)webViewExtraInfoWithReaderWrap:(id)arg1 msgWrap:(id)arg2 vcType:(unsigned int)arg3;
+ (id)getWebViewController:(id)arg1 url:(id)arg2 forPeek:(_Bool)arg3 fromMsgWrap:(id)arg4 vcType:(unsigned int)arg5;
+ (void)showReader:(id)arg1 fromMsgWrap:(id)arg2 fromVC:(id)arg3 btVideoItemCellViewExtInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (_Bool)shouldGoToEmoticonDetail:(id)arg1 fromMsgWrap:(id)arg2 fromVC:(id)arg3;
+ (void)jumpWeappOpWrap:(id)arg1 fromMsgWrap:(id)arg2 fromVC:(id)arg3;
+ (void)unsubscribeContact:(id)arg1;
+ (void)openContactSession:(id)arg1 fromOftenRead:(_Bool)arg2 fromVC:(id)arg3;

@end
