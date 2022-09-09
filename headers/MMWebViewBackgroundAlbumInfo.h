//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMWebViewBackgroundAlbumInfo : NSObject <PBCoding>
{
    NSString *albumId;
    NSMutableDictionary *dictAlbumAudioListInfo;
    NSString *curAudioId;
    NSString *domain;
}

+ (void)initialize;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_curAudioId;
+ (void)PBArrayAdd_dictAlbumAudioListInfo;
+ (void)PBArrayAdd_albumId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domain; // @synthesize domain;
@property(copy, nonatomic) NSString *curAudioId; // @synthesize curAudioId;
@property(retain, nonatomic) NSMutableDictionary *dictAlbumAudioListInfo; // @synthesize dictAlbumAudioListInfo;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
