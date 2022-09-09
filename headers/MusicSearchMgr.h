//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "AQAudioRecorderDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "UploadMusicFPMgrDelegate-Protocol.h"
#import "UploadTvFPMgrDelegate-Protocol.h"

@class AQAudioRecorder, NSString, UploadMusicFPMgr;

@interface MusicSearchMgr : MMUserService <MMServiceProtocol, AQAudioRecorderDelegate, UploadMusicFPMgrDelegate, UploadTvFPMgrDelegate>
{
    struct timeval _startTime;
    unsigned int _curSessionId;
    AQAudioRecorder *_recoder;
    UploadMusicFPMgr *_uploadMgr;
}

- (void).cxx_destruct;
- (void)OnNetworkError:(unsigned int)arg1;
- (void)OnGetMusicItem:(id)arg1 Offset:(float)arg2 FPId:(unsigned int)arg3;
- (void)OnAQPart:(id)arg1 Duration:(float)arg2 EndFlag:(unsigned int)arg3 ForceDelete:(_Bool)arg4;
- (void)OnAQEndRecording:(id)arg1;
- (void)OnAQBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)SetCurLocation:(id)arg1;
- (_Bool)StopSearch:(unsigned int)arg1;
- (_Bool)StopRecord:(unsigned int)arg1;
- (int)StartSearch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

