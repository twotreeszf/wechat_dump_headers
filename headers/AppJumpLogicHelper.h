//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppJumpLogicHelper : NSObject
{
}

- (long long)getJumpFunctionTypeByAppId:(id)arg1;
- (id)getAppIdByFunctionType:(long long)arg1;
- (_Bool)isCanShowSource:(id)arg1;
- (_Bool)isShowAppMessageBottom:(id)arg1;
- (_Bool)isShowTimelineSource:(id)arg1;
- (_Bool)innerJumpByAppId:(id)arg1 chatType:(int)arg2;
- (_Bool)jumpToGameDetailView:(id)arg1 chatType:(int)arg2;
- (_Bool)jumpByAppIdInTimeline:(id)arg1;
- (_Bool)jumpByAppIdInMessage:(id)arg1 chatRoom:(_Bool)arg2;
- (_Bool)isCanJumpWithAppId:(id)arg1;
- (_Bool)isShowTimeLineJumpLink:(id)arg1;

@end

