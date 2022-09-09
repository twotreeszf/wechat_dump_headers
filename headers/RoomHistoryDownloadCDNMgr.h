//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class CMessageWrap, CdnRecordMediaInfo, NSMutableArray, NSString;

@interface RoomHistoryDownloadCDNMgr : NSObject <ICdnComMgrExt>
{
    CMessageWrap *_curDownMsgWrap;
    CdnRecordMediaInfo *_curDownMediaInfo;
    NSMutableArray *_arrCDNDownloadInfo;
    NSMutableArray *_pendingMsgQueue;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)DownloadFail:(int)arg1 Expired:(_Bool)arg2 DownloadInfo:(id)arg3;
- (void)DownLoadOK;
- (_Bool)IsInDownloadQueue:(id)arg1;
- (void)StopDownloadHistoryRecordMsg:(id)arg1;
- (id)genHistoryRecordRecordMediaInfo:(id)arg1 clientMsgID:(id)arg2;
- (void)AddDownloadTasksFromHistoryRecordMsg:(id)arg1;
- (void)CheckDownloadRecordData;
- (void)checkMsgQueue;
- (_Bool)StartDownloadHistoryRecordMsg:(id)arg1 prior:(_Bool)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

