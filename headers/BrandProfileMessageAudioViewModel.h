//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandProfileMessageBaseViewModel.h"

#import "IAudioReceiverExt-Protocol.h"
#import "IMusicPlayerExt-Protocol.h"

@class MMMusicInfo, NSString, UIFont;

@interface BrandProfileMessageAudioViewModel : BrandProfileMessageBaseViewModel <IAudioReceiverExt, IMusicPlayerExt>
{
    MMMusicInfo *m_musicInfo;
    _Bool _bPlaying;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bPlaying; // @synthesize bPlaying=_bPlaying;
- (void)onMusicPlayStatusChanged;
- (void)OnEndPlaying:(unsigned int)arg1 isForceStop:(_Bool)arg2;
- (void)OnBeginPlaying:(unsigned int)arg1 ErrNo:(int)arg2;
@property(readonly, nonatomic) MMMusicInfo *musicInfo;
- (void)recreateMusicInfo;
@property(readonly, nonatomic) UIFont *timeFont;
@property(readonly, nonatomic) NSString *timeStr;
- (double)titleMaxWidth;
- (id)titleFont;
- (unsigned long long)digestLineNumber;
- (double)topItemHeight;
- (id)tableViewCellClassName;
- (void)setSectionData:(id)arg1;
- (id)initWithItemMsg:(id)arg1 cellCount:(unsigned long long)arg2 cellIndex:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

