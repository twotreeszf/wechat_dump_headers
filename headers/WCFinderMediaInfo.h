//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString, WCFinderFullScreenEditRectModel;

@interface WCFinderMediaInfo : NSObject <PBCoding>
{
    _Bool isPlayUnifiedURL;
    _Bool hotFlag;
    _Bool _hasStickers;
    int videoPlayDuration;
    float fullWidth;
    float fullHeight;
    unsigned int fullFileSize;
    int fullBitrate;
    NSString *mediaURL;
    NSString *thumbURL;
    unsigned long long mediaType;
    double mediaWidth;
    double mediaHeight;
    unsigned long long fileSize;
    long long bitrate;
    NSMutableArray *specsArray;
    NSString *tid;
    NSString *coverURL;
    NSString *decodeKey;
    NSString *urlToken;
    NSString *thumbUrlToken;
    NSString *coverUrlToken;
    NSMutableArray *hlsSpecsArray;
    NSString *fullThumbUrl;
    NSString *fullThumbUrlToken;
    WCFinderFullScreenEditRectModel *editRectModel;
    NSString *fullUrl;
    NSString *fullMd5Sum;
    double _videoScore;
    double _videoCoverScore;
    double _videoAudioScore;
    double _thumbScore;
    double _hdimgScore;
    unsigned long long _liveStatus;
}

+ (id)finderMediaInfoFromMegaVideoMedia:(id)arg1 finderMedia:(id)arg2 tid:(id)arg3;
+ (id)finderMediaInfoFromFinderMedia:(id)arg1 tid:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_fullBitrate;
+ (void)PBArrayAdd_fullFileSize;
+ (void)PBArrayAdd_fullMd5Sum;
+ (void)PBArrayAdd_fullHeight;
+ (void)PBArrayAdd_fullWidth;
+ (void)PBArrayAdd_fullUrl;
+ (void)PBArrayAdd_editRectModel;
+ (void)PBArrayAdd_fullThumbUrlToken;
+ (void)PBArrayAdd_fullThumbUrl;
+ (void)PBArrayAdd_hotFlag;
+ (void)PBArrayAdd_isPlayUnifiedURL;
+ (void)PBArrayAdd_hlsSpecsArray;
+ (void)PBArrayAdd_coverUrlToken;
+ (void)PBArrayAdd_thumbUrlToken;
+ (void)PBArrayAdd_urlToken;
+ (void)PBArrayAdd_decodeKey;
+ (void)PBArrayAdd_coverURL;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_specsArray;
+ (void)PBArrayAdd_bitrate;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mediaHeight;
+ (void)PBArrayAdd_mediaWidth;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_thumbURL;
+ (void)PBArrayAdd_mediaURL;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) _Bool hasStickers; // @synthesize hasStickers=_hasStickers;
@property(nonatomic) double hdimgScore; // @synthesize hdimgScore=_hdimgScore;
@property(nonatomic) double thumbScore; // @synthesize thumbScore=_thumbScore;
@property(nonatomic) double videoAudioScore; // @synthesize videoAudioScore=_videoAudioScore;
@property(nonatomic) double videoCoverScore; // @synthesize videoCoverScore=_videoCoverScore;
@property(nonatomic) double videoScore; // @synthesize videoScore=_videoScore;
@property(nonatomic) int fullBitrate; // @synthesize fullBitrate;
@property(nonatomic) unsigned int fullFileSize; // @synthesize fullFileSize;
@property(copy, nonatomic) NSString *fullMd5Sum; // @synthesize fullMd5Sum;
@property(nonatomic) float fullHeight; // @synthesize fullHeight;
@property(nonatomic) float fullWidth; // @synthesize fullWidth;
@property(copy, nonatomic) NSString *fullUrl; // @synthesize fullUrl;
@property(retain, nonatomic) WCFinderFullScreenEditRectModel *editRectModel; // @synthesize editRectModel;
@property(retain, nonatomic) NSString *fullThumbUrlToken; // @synthesize fullThumbUrlToken;
@property(retain, nonatomic) NSString *fullThumbUrl; // @synthesize fullThumbUrl;
@property(nonatomic) _Bool hotFlag; // @synthesize hotFlag;
@property(nonatomic) _Bool isPlayUnifiedURL; // @synthesize isPlayUnifiedURL;
@property(retain, nonatomic) NSMutableArray *hlsSpecsArray; // @synthesize hlsSpecsArray;
@property(retain, nonatomic) NSString *coverUrlToken; // @synthesize coverUrlToken;
@property(retain, nonatomic) NSString *thumbUrlToken; // @synthesize thumbUrlToken;
@property(retain, nonatomic) NSString *urlToken; // @synthesize urlToken;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey;
@property(copy, nonatomic) NSString *coverURL; // @synthesize coverURL;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
@property(retain, nonatomic) NSMutableArray *specsArray; // @synthesize specsArray;
@property(nonatomic) long long bitrate; // @synthesize bitrate;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize;
@property(nonatomic) double mediaHeight; // @synthesize mediaHeight;
@property(nonatomic) double mediaWidth; // @synthesize mediaWidth;
@property(nonatomic) int videoPlayDuration; // @synthesize videoPlayDuration;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType;
@property(copy, nonatomic) NSString *thumbURL; // @synthesize thumbURL;
@property(copy, nonatomic) NSString *mediaURL; // @synthesize mediaURL;
@property(readonly, copy) NSString *description;
- (struct CGSize)getHalfScreenMediaSize;
- (void)setIsMegaVideo:(_Bool)arg1;
- (_Bool)isMegaVideo;
- (id)fullScreenThumbPath;
- (id)coverPath;
- (id)thumbPath;
- (id)mediaPath;
- (_Bool)isVideoMedia;
- (struct CGSize)mediaStreamFeedContentHeightWith:(double)arg1;
- (struct CGSize)mediaFullFeedContentPureHeightWith:(double)arg1;
- (struct CGSize)mediaFeedContentHeightWith:(double)arg1 feedScreenStyle:(unsigned long long)arg2;
- (struct CGSize)mediaFeedContentHeightWith:(double)arg1;
- (struct CGSize)mediaSizeWithfeedScreenStyle:(unsigned long long)arg1;
- (struct CGRect)mediaFullFeedContentRect:(struct CGSize)arg1;
- (unsigned long long)finderMediaSizeType;
- (unsigned long long)finderMediaType;
- (_Bool)isFullScreenFeed;
- (_Bool)isUploadFinishFeed;
@property(readonly, nonatomic) NSString *fullThumbUrlWithToken;
@property(readonly, nonatomic) NSString *coverUrlWithToken;
@property(readonly, nonatomic) NSString *thumbUrlWithToken;
@property(readonly, nonatomic) NSString *mediaUrlWithToken;
- (id)genFinderMedia;
- (id)getPBPropertyTable;
- (id)wcfMediaWrap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

