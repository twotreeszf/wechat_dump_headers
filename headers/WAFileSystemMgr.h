//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSObject, NSString, WAFileDescriptorLogic;
@protocol OS_dispatch_queue;

@interface WAFileSystemMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> *m_workQueue;
    WAFileDescriptorLogic *m_fdLogic;
}

- (void).cxx_destruct;
- (void)onAppTaskTerminate:(id)arg1;
- (void)closeFileWithAppId:(id)arg1;
- (void)truncateWithLocalId:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 isSync:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)ftruncateWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 isSync:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)writeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 data:(id)arg3 position:(long long)arg4 isSync:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)readFileWithFileDescriptor:(id)arg1 appId:(id)arg2 length:(unsigned int)arg3 position:(long long)arg4 isSync:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fstatFileWithFileDescriptor:(id)arg1 appId:(id)arg2 isSync:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)closeFileWithFileDescriptor:(id)arg1 appId:(id)arg2 isSync:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openFileWithLocalId:(id)arg1 flag:(id)arg2 appId:(id)arg3 isSync:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
