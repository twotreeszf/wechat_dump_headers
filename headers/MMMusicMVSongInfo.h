//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface MMMusicMVSongInfo : NSObject <PBCoding, NSCopying>
{
    _Bool _canCreateMV;
    NSString *songName;
    NSString *singer;
    NSString *musicDataUrl;
    NSString *musicAppId;
    NSString *musicWebUrl;
    NSString *songId;
    NSString *musicID;
    NSString *albumName;
    NSString *genre;
    double publicTime;
    NSString *_lyric;
    NSString *_albumUrl;
    NSString *_extraInfo;
    NSString *_identification;
    NSString *_statusVerifyInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_publicTime;
+ (void)PBArrayAdd_genre;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_musicID;
+ (void)PBArrayAdd_songId;
+ (void)PBArrayAdd_musicWebUrl;
+ (void)PBArrayAdd_musicAppId;
+ (void)PBArrayAdd_musicDataUrl;
+ (void)PBArrayAdd_singer;
+ (void)PBArrayAdd_songName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *statusVerifyInfo; // @synthesize statusVerifyInfo=_statusVerifyInfo;
@property(nonatomic) _Bool canCreateMV; // @synthesize canCreateMV=_canCreateMV;
@property(retain, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *albumUrl; // @synthesize albumUrl=_albumUrl;
@property(retain, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(nonatomic) double publicTime; // @synthesize publicTime;
@property(retain, nonatomic) NSString *genre; // @synthesize genre;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName;
@property(retain, nonatomic) NSString *musicID; // @synthesize musicID;
@property(retain, nonatomic) NSString *songId; // @synthesize songId;
@property(retain, nonatomic) NSString *musicWebUrl; // @synthesize musicWebUrl;
@property(retain, nonatomic) NSString *musicAppId; // @synthesize musicAppId;
@property(retain, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl;
@property(retain, nonatomic) NSString *singer; // @synthesize singer;
@property(retain, nonatomic) NSString *songName; // @synthesize songName;
- (_Bool)isDetailInfoFulfilled;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

