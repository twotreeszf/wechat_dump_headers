//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EmojiInfoObj, EmoticonUploadCgi;

@protocol EmoticonUploadCgiDelegate
- (void)onEmoticonUploadMd5Failed:(EmoticonUploadCgi *)arg1 reason:(unsigned long long)arg2;
- (void)onEmoticonUploadMd5Ok:(EmoticonUploadCgi *)arg1 emojiInfo:(EmojiInfoObj *)arg2;
@end

