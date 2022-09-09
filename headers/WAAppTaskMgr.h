//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMMFontMgrExt-Protocol.h"
#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WAAppTaskDelegate-Protocol.h"
#import "WAGameTaskMgrExt-Protocol.h"

@class MMTimer, NSDictionary, NSMutableArray, NSObject, NSString, WAMemoryPressureRecord, WAThreadSafeMutableDictionary, WATopSessionTaskInfoStorage;
@protocol OS_dispatch_source;

@interface WAAppTaskMgr : MMUserService <IMinimizeTaskDelegateInterface, WAAppTaskDelegate, WAGameTaskMgrExt, MMTipsViewControllerDelegate, IMMFontMgrExt, MMServiceProtocol>
{
    NSMutableArray *_arrJumpList;
    MMTimer *_timerCheckBackgroundTask;
    NSString *_curBackToChatAppID;
    NSString *_curBackToChatDefaultName;
    WATopSessionTaskInfoStorage *_topSessionTaskInfoStorage;
    NSString *_curRemoteDebugAppID;
    NSString *_curRemoteDebugQrCodeID;
    _Bool _isBeingDismissTaskForIpadGame;
    _Bool _shouldShowMemAlertWhenProtectSimulatedWeApp;
    NSObject<OS_dispatch_source> *_memoryWarningLevelSource;
    unsigned long long _lastMemoryWaringTimeStamp;
    unsigned long long _lastMemoryWarningPressureFlag;
    unsigned long long _currentMemoryWarningPressureFlag;
    WAMemoryPressureRecord *_memoryPressureRecord;
    NSMutableArray *_tmpWebviewForMemTest;
    NSDictionary *_dicMemoryWarningPolicies;
    WAThreadSafeMutableDictionary *_dicAppID2Task;
}

+ (id)genTitleTailWithDebugMode:(unsigned int)arg1;
+ (id)minimizeTaskDataFromWeAppTask:(id)arg1 isManually:(_Bool)arg2;
+ (id)minimizationTaskKeyWithAppID:(id)arg1 debbugMode:(unsigned int)arg2;
+ (id)lastAppIDWithViewController:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAThreadSafeMutableDictionary *dicAppID2Task; // @synthesize dicAppID2Task=_dicAppID2Task;
@property(retain, nonatomic) NSDictionary *dicMemoryWarningPolicies; // @synthesize dicMemoryWarningPolicies=_dicMemoryWarningPolicies;
@property(retain, nonatomic) NSMutableArray *tmpWebviewForMemTest; // @synthesize tmpWebviewForMemTest=_tmpWebviewForMemTest;
@property(nonatomic) _Bool shouldShowMemAlertWhenProtectSimulatedWeApp; // @synthesize shouldShowMemAlertWhenProtectSimulatedWeApp=_shouldShowMemAlertWhenProtectSimulatedWeApp;
@property(retain, nonatomic) WAMemoryPressureRecord *memoryPressureRecord; // @synthesize memoryPressureRecord=_memoryPressureRecord;
@property(nonatomic) unsigned long long currentMemoryWarningPressureFlag; // @synthesize currentMemoryWarningPressureFlag=_currentMemoryWarningPressureFlag;
@property(nonatomic) unsigned long long lastMemoryWarningPressureFlag; // @synthesize lastMemoryWarningPressureFlag=_lastMemoryWarningPressureFlag;
@property(nonatomic) unsigned long long lastMemoryWaringTimeStamp; // @synthesize lastMemoryWaringTimeStamp=_lastMemoryWaringTimeStamp;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningLevelSource; // @synthesize memoryWarningLevelSource=_memoryWarningLevelSource;
- (void)onFontSizeChange;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)updateCurrentRemoteDebugQrCodeID:(id)arg1;
- (id)getCurrentRemoteDebugQrCodeID;
- (void)updateCurrentRemoteDebugAppID:(id)arg1;
- (id)getCurrentRemoteDebugAppID;
- (void)resumeAllGame:(_Bool)arg1;
- (void)pauseAllGame;
- (id)allGameViewController;
- (_Bool)isWeAppStatusBarHidden;
- (_Bool)isWeAppScreenOn;
- (void)removeCurBackToChatState;
- (_Bool)isAppTaskBackingToChat:(id)arg1;
- (id)getCurrentBackToChatAppTaskBannerLogoUrl;
- (id)getCurrentBackToChatAppTaskBannerText;
- (id)getCurrentBackToChatAppTask;
- (unsigned long long)getCurrentBackToChatDebugType;
- (id)getCurrentBackToChatStackPaths;
- (id)getCurrentBackToChatRelativePath;
- (id)getCurrentBackToChatAppId;
- (void)updateCurrentBannerText:(id)arg1;
- (void)updateCurrentBackToChatState;
- (void)markBackToChatWithAppID:(id)arg1 usrName:(id)arg2 relativePath:(id)arg3 debugModeType:(unsigned long long)arg4;
- (unsigned int)maxGameTaskRunningCount;
- (unsigned int)maxSharedResourceBackgroundTaskRunningCount;
- (unsigned int)maxTaskRunningCount;
- (void)onTimerCheckBackgroundTask:(id)arg1;
- (void)invadateCheckBackgroundTaskTimer;
- (void)startCheckBackgroundTaskTimer;
- (void)taskDidRestoreIntermediatePageWhenLaunch:(id)arg1;
- (void)taskWillRestoreIntermediatePageWhenLaunch:(id)arg1;
- (void)taskDidCancelColdLaunchWithAppID:(id)arg1;
- (void)taskDidColdLaunchFaiedWithAppID:(id)arg1;
- (void)taskDidFinishLaunchWithAppID:(id)arg1;
- (void)taskDidFinishHotLaunchWithAppID:(id)arg1;
- (void)taskDidFinishColdLaunchWithAppID:(id)arg1;
- (void)taskEnterBackgroundWithAppID:(id)arg1 andRelativePath:(id)arg2;
- (void)taskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)taskDidClose:(id)arg1;
- (void)taskDidOpen:(id)arg1;
- (void)checkAndCloseExceedMaxConcurrentCountTask;
- (_Bool)isGameBackgroundTaskAllowToClose:(id)arg1;
- (void)checkGameAppBackgroundTask:(id)arg1;
- (void)closeAllWebViewInNavigatorTask;
- (void)closeTimeoutBackgoundTask;
- (void)closeBackgroundTask:(_Bool)arg1 inScene:(unsigned long long)arg2 didCloseWeAppCount:(unsigned int *)arg3 simulatedWeAppCount:(unsigned int *)arg4 gameCount:(unsigned int *)arg5;
- (void)closeBackgroundTask:(_Bool)arg1 inScene:(unsigned long long)arg2;
- (void)closeAllTaskUseTips:(_Bool)arg1 tipTitle:(id)arg2 tipContent:(id)arg3 includeForeSimulatedNative:(_Bool)arg4 reason:(unsigned long long)arg5;
- (void)onAppTaskClose:(id)arg1;
- (void)closeGameTaskOnNavigationController:(id)arg1;
- (void)closeTask:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTask:(id)arg1;
- (void)deleteTask:(id)arg1;
- (id)currentForegroundTask;
- (void)callOnTerminateContact:(id)arg1 appid:(id)arg2;
- (void)callOnTerminateAppID:(id)arg1;
- (void)endRemoteDebugIfNeededForAppid:(id)arg1;
- (id)allTaskArray;
- (_Bool)isNeedCloseAppTaskToOpenPagePath:(id)arg1 appID:(id)arg2 appType:(unsigned int)arg3;
- (_Bool)isNeedNewTask:(id)arg1 pagePath:(id)arg2 appType:(unsigned int)arg3;
- (void)removeTaskFromMapWithAppID:(id)arg1;
- (void)addTaskToMap:(id)arg1;
- (id)getTaskWithUsername:(id)arg1;
- (id)getTaskWithAppID:(id)arg1;
- (id)getAndNewTaskIfNotExistWithAppID:(id)arg1 relativeURL:(id)arg2 taskExtInfo:(id)arg3 debugModeType:(unsigned int)arg4 isNewTask:(_Bool *)arg5 isJumpFromWeApp:(_Bool)arg6;
- (_Bool)isTaskInRunning:(id)arg1 debugMode:(unsigned long long)arg2;
- (_Bool)isTaskForContactInRunning:(id)arg1 debugMode:(unsigned long long)arg2;
- (_Bool)isBeingDismissTaskForIpadGame;
- (_Bool)isReachMaxSharedResourceBackgroundAppCount;
- (unsigned int)currentSharedResourceBackgroundAppCount;
- (_Bool)isExistAppMediaPlaying;
- (_Bool)isExistAppLivePlaying;
- (_Bool)isExistAppLiveForegroundPlaying;
- (_Bool)isExistAppLivePushing;
- (_Bool)isExistAppWXAudioPlaying;
- (_Bool)isExistAppInnerAudioPlaying;
- (_Bool)isExistAppRecording;
- (_Bool)hasGameTaskOnNavigationController:(id)arg1;
- (id)firstAppIdFromRootViewController:(id)arg1;
- (id)getForegroundAppID;
- (unsigned long long)getAppTaskCount;
- (_Bool)getWeAppTaskInfo:(id)arg1;
- (void)syncSendJSEventToTask:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviewId:(unsigned int)arg4 eventId:(unsigned int)arg5;
- (void)sendJSEventToTaskAllWebView:(id)arg1 withAppID:(id)arg2 param:(id)arg3 toWebviews:(id)arg4;
- (void)closeTaskWithAppID:(id)arg1 reason:(unsigned long long)arg2;
- (void)closeTaskWithAppID:(id)arg1;
- (_Bool)isReachMaxWebViewDepthWithAppID:(id)arg1;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopAllParent:(_Bool)arg5 completeHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithappID:(id)arg1 relativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParent:(id)arg4 isPopParent:(_Bool)arg5 completeHandler:(CDUnknownBlockType)arg6;
- (void)openAppTaskWithContact:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 handlerWrapper:(id)arg4;
- (void)delayKillAllTask;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)removeTopSesionTaskInfo;
- (void)saveTopSessionTaskInfo:(id)arg1;
- (void)loadTopSessionTaskInfo;
- (void)dealloc;
- (id)init;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)stopActivityWithStateList:(id)arg1 AppTask:(id)arg2;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onLeaveTaskDoneAndWillEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)openWeApp:(id)arg1 openContext:(id)arg2 weappNav:(id)arg3;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)arg1 generateType:(int)arg2 weAppVC:(id)arg3;
- (id)getAppTaskWithMinimizationTaskKey:(id)arg1;
- (void)tryRescueMinimizeAppTaskWhenViewDidBeDismissed:(id)arg1;
- (_Bool)maximizeAppTask:(id)arg1;
- (void)unminimizeAppTask:(id)arg1;
- (_Bool)updateMinimizedTask:(id)arg1 manually:(_Bool)arg2;
- (_Bool)updateSnapShotImg:(id)arg1 appTask:(id)arg2;
- (_Bool)updateMinimizeSnapShotImg:(id)arg1;
- (_Bool)minimizeAppTask:(id)arg1 manually:(_Bool)arg2 generateType:(unsigned long long)arg3;
- (_Bool)isAppTaskUpdatingBackgroundLocation:(id)arg1;
- (_Bool)isAppTaskManuallyMinimized:(id)arg1;
- (_Bool)isAppTaskMinimized:(id)arg1;
- (_Bool)canMinimizeAppTaskOrShowTips:(id)arg1;
- (_Bool)isAppTaskSupportMinimization:(id)arg1;
- (_Bool)isFormJumpWeAppRingWithFromAppId:(id)arg1 toAppId:(id)arg2;
- (unsigned long long)getJumpRoleWithAppId:(id)arg1;
- (void)figureRingJumpWeAppRelationWithFromAppId:(id)arg1 toAppId:(id)arg2 jumpScene:(unsigned long long)arg3;
- (void)addJumpWeAppRelationWithFromAppId:(id)arg1 toAppId:(id)arg2 jumpScene:(unsigned long long)arg3;
- (void)generateJumpWeAppOperation:(id *)arg1 withAppId:(id)arg2 extInfo:(id)arg3;
- (void)addNativeJumpWeAppRefererInfoIfHave:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3;
- (void)clearJumpList;
- (void)removeJumpWeAppLastInfo;
- (id)getAppIdListFromJumpWeAppList;
- (void)getJumpWeAppLastInfo:(id *)arg1 fromInfo:(id *)arg2 withAppId:(id)arg3;
- (void)addJumpWeAppRelationIfHave:(id)arg1;
- (void)processJumpWeAppBeforeOpenTaskWithAppId:(id)arg1 openInfo:(id)arg2 extInfo:(id)arg3 getOperation:(id *)arg4;
- (void)jumpWeAppCateGoryOnServiceClearData;
- (void)jumpWeAppCategoryOnServiceInit;
- (void)fireMemoryEvent:(unsigned int)arg1;
- (void)genWebviewForMemWarning;
- (_Bool)shouldShowMemAlert;
- (void)switchMemAlert;
- (void)reportForegroundForceCloseForTask:(id)arg1;
- (void)reportAllAppForceClose;
- (void)onDispatchSourceDidReceiveMemoryPressure:(unsigned long long)arg1;
- (void)onDispatchSourceDidBackToNormalMemoryPressure;
- (void)onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)fireMemoryWarningEventToAllTasks;
- (void)fireMemoryWarningEventToActiveTasks;
- (void)unregisterMemoryWarningLevelListener;
- (void)registerMemoryWarningLevelListener;
- (void)unregisterMemoryPressureRecord;
- (void)registerMemoryPressureRecord;
- (void)fetchMemoryWarningReleasePolicies;
- (unsigned long long)releasePreloadPageInForegroundTask;
- (unsigned long long)releaseBackgroundPageInForegroundTask;
- (void)releaseForegroundTaskDidCloseWeAppCount:(unsigned long long *)arg1 simulatedNativeCount:(unsigned long long *)arg2 gameCount:(unsigned long long *)arg3 tipsContent:(id)arg4;
- (unsigned long long)releasePreloadPageInStackBackgroundTask;
- (unsigned long long)releaseForegroundPageInStackBackgroundTask;
- (unsigned long long)releaseBackgroundPageInStackBackgroundTask;
- (unsigned long long)releaseForegroundPageInNonStackBackgroundTask;
- (unsigned long long)releaseBackgroundPageInNonStackBackgroundTask;
- (void)releaseNonStackBackgroundTaskDidCloseWeAppCount:(unsigned int *)arg1 simulatedNativeCount:(unsigned int *)arg2 gameCount:(unsigned int *)arg3;
- (void)doMemoryReleasePolicy:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)triggerMemoryEvent:(unsigned long long)arg1;
- (void)onForegroundTaskPreloadPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onForegroundTaskForegroundPageTerminatedBySystemTwiceWithAppid:(id)arg1;
- (void)onForegroundTaskForegroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onForegroundTaskBackgroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onStackBackgroundTaskPreloadPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onStackBackgroundTaskForegroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onStackBackgroundTaskBackgroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onNonStackBackgroundTaskPreloadPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onNonStackBackgroundTaskForegroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)onNonStackBackgroundTaskBackgroundPageTerminatedBySystemWithAppid:(id)arg1;
- (void)notifyMemoryWarningCategoryOnServiceClearData;
- (void)notifyMemoryWarningCategoryOnServiceInit;
- (void)taskDidResignBackgroundLocating:(id)arg1;
- (void)taskDidTriggerBackgroundLocating:(id)arg1;
- (unsigned int)backgroundLocatingAppCount;
- (id)backgroundLocatingAppList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

