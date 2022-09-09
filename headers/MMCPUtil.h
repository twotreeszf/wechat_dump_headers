//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMCPUtil : NSObject
{
}

+ (_Bool)isAnimateEmojiUnsafe:(id)arg1;
+ (id)cpKeyForAnimateEmoji:(id)arg1;
+ (id)cpKeyForEmoticonMd5:(id)arg1;
+ (_Bool)isWebviewURLUnsafe:(id)arg1;
+ (id)cpKeyForWebviewURL:(id)arg1;
+ (_Bool)isChatRoomUnsafe:(id)arg1;
+ (_Bool)isChatRoomDisplayNameUnsafe:(id)arg1 userName:(id)arg2;
+ (id)cpKeyForChatRoomDisplayName:(id)arg1 userName:(id)arg2;
+ (_Bool)isHelloMsgUnsafe:(id)arg1 content:(id)arg2;
+ (id)cpKeyForHelloMsg:(id)arg1 content:(id)arg2;
+ (_Bool)isSignatureUnsafe:(id)arg1;
+ (id)cpKeyForSignature:(id)arg1;
+ (_Bool)isHeadImageUnsafe:(id)arg1;
+ (id)cpKeyForHeadImage:(id)arg1;
+ (id)cpKeyForOpenIMDesc:(id)arg1;
+ (void)clearCrashCountWithKey:(id)arg1;
+ (void)decreaseCrashCountWithKey:(id)arg1;
+ (void)increaseCrashCountWithKey:(id)arg1;
+ (_Bool)isUnsafeWithKey:(id)arg1;
+ (_Bool)isMainFrameDynamicBackgroundUnsafe;
+ (id)cpKeyForMainFrameDynamicBackground;
+ (_Bool)isWAMsgNodeUnsafeWithAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
+ (id)cpKeyForWAMsgNodeAppId:(id)arg1 debugMode:(unsigned int)arg2 widgetType:(unsigned int)arg3 version:(unsigned long long)arg4;
+ (id)cpKeyForClientCheckCgiReportCalculateMd5;
+ (id)cpKeyForClientCheckKvReportCalculateMd5;
+ (_Bool)isWXPicConvertUnsafe:(id)arg1;
+ (id)cpKeyForWXPicConvert:(id)arg1;
+ (_Bool)isWCTimeLineCommentUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineComment:(id)arg1;
+ (_Bool)isWCTimeLineLikeUsersUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineLikeUsers:(id)arg1;
+ (_Bool)isWCTimeLineContentUnsafe:(id)arg1;
+ (id)cpKeyForWCTimeLineContent:(id)arg1;
+ (_Bool)isMessageWrapUnsafe:(id)arg1;
+ (id)cpKeyForMessageWrap:(id)arg1;
+ (_Bool)isNicknameUnsafe:(id)arg1;
+ (id)cpKeyForNickname:(id)arg1;

@end

