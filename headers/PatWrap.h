//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface PatWrap : NSObject <NSCopying>
{
    _Bool _isRead;
    _Bool _showChangeSuffixRemind;
    NSString *_templete;
    NSString *_fromUserName;
    NSString *_pattedUserName;
    unsigned long long _createTime;
    long long _serverId;
}

+ (id)getContactFromUserName:(id)arg1;
+ (id)generateContentWithTemplete:(id)arg1 chatContact:(id)arg2 useLink:(_Bool)arg3 needHighlightPat:(_Bool)arg4 showChangeSuffixRemind:(_Bool)arg5;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool showChangeSuffixRemind; // @synthesize showChangeSuffixRemind=_showChangeSuffixRemind;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(nonatomic) long long serverId; // @synthesize serverId=_serverId;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *pattedUserName; // @synthesize pattedUserName=_pattedUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *templete; // @synthesize templete=_templete;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPatWrap:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)clientMessageId;
- (_Bool)canRevoke;
@property(readonly, nonatomic, getter=isEmphasize) _Bool emphasize;
- (id)getDisplayContentWithChatUserName:(id)arg1 useLink:(_Bool)arg2 needHighlightPat:(_Bool)arg3 showChangeSuffixRemind:(_Bool)arg4;
- (id)getDisplayContentWithChatUserName:(id)arg1 useLink:(_Bool)arg2 showChangeSuffixRemind:(_Bool)arg3;

@end

