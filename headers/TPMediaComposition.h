//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ITPMediaAsset-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface TPMediaComposition : NSObject <ITPMediaAsset>
{
    int _videoSequence;
    int _audioSequence;
    int _avSequence;
    NSMutableArray *_innerTracks;
}

- (void).cxx_destruct;
@property(nonatomic) int avSequence; // @synthesize avSequence=_avSequence;
@property(nonatomic) int audioSequence; // @synthesize audioSequence=_audioSequence;
@property(nonatomic) int videoSequence; // @synthesize videoSequence=_videoSequence;
@property(retain, nonatomic) NSMutableArray *innerTracks; // @synthesize innerTracks=_innerTracks;
@property(readonly, copy, nonatomic) NSString *url;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 audioDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoDuration;
- (int)genAVTracksequence;
- (int)genAudioTracksequence;
- (int)genVideoTrackSequence;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
- (id)tracksWithMediaType:(long long)arg1;
- (id)trackWithTrackID:(int)arg1;
- (void)removeTrack:(id)arg1;
- (id)addMediaTrackWithMediaType:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *tracks;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

