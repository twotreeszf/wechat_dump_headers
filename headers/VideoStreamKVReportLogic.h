//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap, CdnDownloadTaskInfo, VideoStreamInfo, WCMediaItem;

@interface VideoStreamKVReportLogic : NSObject
{
    CMessageWrap *m_oMessageWrap;
    WCMediaItem *m_oMediaItem;
    unsigned int m_uiPreloadStatus;
    float _m_fTotalPlayedDuration;
    int _m_siPlayErrorCode;
    unsigned int _m_uiBufferCount;
    unsigned int _m_uiHasPreloadSize;
    double _m_tOnClickToStartTime;
    double _onToLeavePageTime;
    double _m_tStartDownloadTime;
    double _m_tOnMoovWaitTime;
    double _onGetFristPreDataTime;
    double _m_tFristPlayTime;
    unsigned long long _m_uTotalBufferTime;
    VideoStreamInfo *_m_oVideoInfo;
    CdnDownloadTaskInfo *_m_oCdnDownloadTaskInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiHasPreloadSize; // @synthesize m_uiHasPreloadSize=_m_uiHasPreloadSize;
@property(retain, nonatomic) CdnDownloadTaskInfo *m_oCdnDownloadTaskInfo; // @synthesize m_oCdnDownloadTaskInfo=_m_oCdnDownloadTaskInfo;
@property(retain, nonatomic) VideoStreamInfo *m_oVideoInfo; // @synthesize m_oVideoInfo=_m_oVideoInfo;
@property(nonatomic) unsigned long long m_uTotalBufferTime; // @synthesize m_uTotalBufferTime=_m_uTotalBufferTime;
@property(nonatomic) unsigned int m_uiBufferCount; // @synthesize m_uiBufferCount=_m_uiBufferCount;
@property(nonatomic) int m_siPlayErrorCode; // @synthesize m_siPlayErrorCode=_m_siPlayErrorCode;
@property(nonatomic) double m_tFristPlayTime; // @synthesize m_tFristPlayTime=_m_tFristPlayTime;
@property(nonatomic) float m_fTotalPlayedDuration; // @synthesize m_fTotalPlayedDuration=_m_fTotalPlayedDuration;
@property(nonatomic) double onGetFristPreDataTime; // @synthesize onGetFristPreDataTime=_onGetFristPreDataTime;
@property(nonatomic) double m_tOnMoovWaitTime; // @synthesize m_tOnMoovWaitTime=_m_tOnMoovWaitTime;
@property(nonatomic) double m_tStartDownloadTime; // @synthesize m_tStartDownloadTime=_m_tStartDownloadTime;
@property(nonatomic) double onToLeavePageTime; // @synthesize onToLeavePageTime=_onToLeavePageTime;
@property(nonatomic) double m_tOnClickToStartTime; // @synthesize m_tOnClickToStartTime=_m_tOnClickToStartTime;
@property(nonatomic) unsigned int m_uiPreloadStatus; // @synthesize m_uiPreloadStatus;
- (void)reportKVVideoArgsWithMessageWrap;
- (void)reportKVVideoArgsWithMediaItem;
- (void)reportKVVideoArgs;
- (void)logFeatureWithId:(unsigned int)arg1 Key:(unsigned int)arg2 value:(unsigned int)arg3 isImportant:(_Bool)arg4;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithMessageWrap:(id)arg1;
- (id)init;

@end

