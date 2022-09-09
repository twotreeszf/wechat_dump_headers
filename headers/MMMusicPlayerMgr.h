//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IRemoteControlMusicPlayerExt-Protocol.h"
#import "ISysCallCheckExt-Protocol.h"
#import "MMImageLoaderObserver-Protocol.h"
#import "MMMusicAlbumRtnExt-Protocol.h"
#import "MMMusicListExt-Protocol.h"
#import "MMMusicLyricsRtnExt-Protocol.h"
#import "MMMusicPlayerExt-Protocol.h"
#import "MMMusicPlayerNotifyExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMMusicInfo, MMMusicListMgr, MMMusicLyricResolver, MMMusicUrlChecker, MusicLogInfo, NSMutableArray, NSString;

@interface MMMusicPlayerMgr : MMUserService <MMImageLoaderObserver, IRemoteControlMusicPlayerExt, MMMusicPlayerNotifyExt, PBMessageObserverDelegate, MMServiceProtocol, MMMusicPlayerExt, MMMusicLyricsRtnExt, MMMusicAlbumRtnExt, MMMusicListExt, ISysCallCheckExt>
{
    _Bool _shouldTurnRepeatNoneMode;
    _Bool _isManualPaused;
    _Bool _shouldDelayResetCurMusicInfo;
    _Bool _isForceStop;
    unsigned int _curMusicIndex;
    MMMusicInfo *_curMusicInfo;
    MMMusicInfo *_prevMusicInfo;
    MMMusicInfo *_nextMusicInfo;
    MusicLogInfo *_musicLogInfo;
    long long _state;
    long long _playMode;
    long long _playDirection;
    NSMutableArray *_arrMusicItems;
    MMMusicUrlChecker *_musicUrlChecker;
    MMMusicLyricResolver *_musicLyricResolver;
    MMMusicListMgr *_musicListMgr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicListMgr *musicListMgr; // @synthesize musicListMgr=_musicListMgr;
@property(retain, nonatomic) MMMusicLyricResolver *musicLyricResolver; // @synthesize musicLyricResolver=_musicLyricResolver;
@property(retain, nonatomic) MMMusicUrlChecker *musicUrlChecker; // @synthesize musicUrlChecker=_musicUrlChecker;
@property(nonatomic) _Bool isForceStop; // @synthesize isForceStop=_isForceStop;
@property(nonatomic) _Bool shouldDelayResetCurMusicInfo; // @synthesize shouldDelayResetCurMusicInfo=_shouldDelayResetCurMusicInfo;
@property(nonatomic) _Bool isManualPaused; // @synthesize isManualPaused=_isManualPaused;
@property(retain, nonatomic) NSMutableArray *arrMusicItems; // @synthesize arrMusicItems=_arrMusicItems;
@property(nonatomic) unsigned int curMusicIndex; // @synthesize curMusicIndex=_curMusicIndex;
@property(nonatomic) long long playDirection; // @synthesize playDirection=_playDirection;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool shouldTurnRepeatNoneMode; // @synthesize shouldTurnRepeatNoneMode=_shouldTurnRepeatNoneMode;
@property(retain, nonatomic) MusicLogInfo *musicLogInfo; // @synthesize musicLogInfo=_musicLogInfo;
@property(retain, nonatomic) MMMusicInfo *nextMusicInfo; // @synthesize nextMusicInfo=_nextMusicInfo;
@property(retain, nonatomic) MMMusicInfo *prevMusicInfo; // @synthesize prevMusicInfo=_prevMusicInfo;
@property(retain) MMMusicInfo *curMusicInfo; // @synthesize curMusicInfo=_curMusicInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isMusicIdPlayingOrWaiting:(id)arg1;
- (void)updateMinimizationViewVisible:(_Bool)arg1;
- (void)updateMusicWebUrl:(id)arg1;
- (void)updateMusicCover:(id)arg1;
- (void)updateMusicEPName:(id)arg1;
- (void)updateMusicSinger:(id)arg1;
- (void)updateMusicTitle:(id)arg1;
- (void)statNativePlayerAction:(id)arg1 scene:(unsigned int)arg2 actionType:(unsigned int)arg3;
- (void)notifyMusicPlayerRestartMusic;
- (void)notifyMusicPlayerPauseMusic;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldStop;
- (void)onRemoteControlMusicShouldPlayOrPause;
- (void)onRemoteControlMusicShouldPauseByMannual:(_Bool)arg1;
- (void)onRemoteControlMusicShouldPlay;
- (id)getCurTimeList;
- (id)getCurLyricsList;
- (void)onMusicListArrayChange;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)OnGetLyrics:(id)arg1 Lyrics:(id)arg2;
- (void)onDataBuffering:(double)arg1;
- (void)onForceStopMusic;
- (void)onLevelMeterPeak:(float)arg1;
- (void)delayResetCurMusicInfo;
- (void)handlePlayerStopOrErrorEvent;
- (void)onMusicPlayStatusChanged:(unsigned long long)arg1 error:(id)arg2;
- (id)getNextMusicInfo;
- (id)getPreviousMusicInfo;
- (unsigned long long)indexOfMusic:(id)arg1;
- (_Bool)isLyricValid;
- (void)updateMPNowPlayingInfo:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)safeCheckMusicInfo:(id)arg1;
- (void)playWithMusicInfo:(id)arg1;
- (_Bool)isValidLowBandUrl:(id)arg1;
- (id)getMusicUrlWithMusicInfo:(id)arg1;
- (void)setMusicPlayDirection:(long long)arg1;
- (id)getMusicInfoByMusicKey:(id)arg1;
- (_Bool)isMusicItemsContainsMusicKey:(id)arg1;
- (id)getArrMusicItems;
- (double)getCurrentPlaybackRate;
- (double)getCurMusicBufferTime;
- (double)getCurMusicBufferProgress;
- (double)getCurMusicOffset;
- (double)getCurMusicDuarationFromLyricResolver;
- (double)getCurMusicDuration;
- (unsigned long long)getMusicPlayDetailState;
- (long long)getMusicPlayState;
- (id)getCurMusicTitle;
- (id)getCurMusicInfo;
- (_Bool)isPaused;
- (_Bool)isWaiting;
- (_Bool)isPlaying;
- (_Bool)isIdle;
- (_Bool)stopWithMusicKey:(id)arg1;
- (void)stopPlay;
- (void)seekToTime:(double)arg1 playAuto:(_Bool)arg2;
- (void)resumePlay;
- (_Bool)pausePlayManual:(_Bool)arg1 pauseDownload:(_Bool)arg2;
- (void)playNextMusicFromPlayActionSource:(unsigned int)arg1;
- (void)playNextMusic;
- (void)playPreviousMusicFromPlayActionSource:(unsigned int)arg1;
- (void)playPreviousMusic;
- (void)playWithMusicKey:(id)arg1 SourceType:(long long)arg2;
- (void)playWithMusicKey:(id)arg1;
- (void)forceSetCurMusicInfo:(id)arg1;
- (void)setMusicItemList:(id)arg1;
- (void)setAndPlayMusicItem:(id)arg1;
- (void)updateMusicListBySource:(long long)arg1;
- (long long)getMusicListSource;
- (long long)getMusicPlayMode;
- (void)dealloc;
- (void)updateArrMusicItems;
- (id)init;
- (void)handleReportMusicResp:(id)arg1;
- (void)report11982WithReportStr:(id)arg1 musicLogInfo:(id)arg2;
- (void)addRealPlayTime;
- (void)reportMusicInfoWithStatusChanged:(unsigned long long)arg1;
- (void)updateMusicLogInfo;
- (void)logMusicStatAndReset;
- (void)logMusicStat;
- (void)resetMusicPlayerEntranceType;
- (void)setMusicLogInfoWithBrandMusicId:(id)arg1 reportStr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

