//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IHDHeadImageViewExt-Protocol.h"
#import "IMMImagePickerManagerExt-Protocol.h"
#import "IMMMusicViewControllerExt-Protocol.h"
#import "IMPVideoExt-Protocol.h"
#import "IWSVideoExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "MMSightCameraExtention-Protocol.h"
#import "MMUIViewControllerExt-Protocol.h"
#import "MinimizeEventRouteDelegate-Protocol.h"
#import "MinimizeTaskDataSource-Protocol.h"
#import "MinimizeTransitionInterface-Protocol.h"
#import "MinimizeWindowDelegate-Protocol.h"
#import "WAPluginEventExt-Protocol.h"
#import "WCStoryPreviewStatusExt-Protocol.h"

@class MemoryMappedKV, MinimizationWindow, MinimizeTaskData, NSMutableArray, NSMutableDictionary, NSString, UIViewController;

@interface MinimizeTaskMgr : MMUserService <MinimizeEventRouteDelegate, MinimizeWindowDelegate, MinimizeTaskDataSource, MMUIViewControllerExt, IMMImagePickerManagerExt, MMKernelExt, WAPluginEventExt, IWSVideoExt, WCStoryPreviewStatusExt, MMSightCameraExtention, IMPVideoExt, IHDHeadImageViewExt, IMMMusicViewControllerExt, MMServiceProtocol, MinimizeTransitionInterface>
{
    _Bool _isMainWindowResignKeyWindow;
    _Bool _isFullScreenPlaying;
    _Bool _isMMMusicPlayerActive;
    _Bool _isWillShowImagePicker;
    int _gestureMode;
    NSMutableArray *_passiveStateTaskList;
    NSString *_pendingNewTaskKeyForReport;
    MinimizationWindow *_minimizeWindow;
    unsigned long long _minimizeWindowState;
    NSString *_lastAdsorbFloatingViewSessionId;
    unsigned long long _lastAdsorbFloatingViewCreateTime;
    NSMutableDictionary *_dicTaskKey2NotifyDelegate;
    MinimizeTaskData *_currentTransitioningTaskData;
    NSMutableArray *_tmpSnapshotViewListWhenSwitchTask;
    NSString *_taskKeyWithGesture;
    UIViewController *_prevNeedHideWindowViewControllerWhenShowImagePicker;
    MemoryMappedKV *_mappedKV;
    struct CGPoint _lastAdsorbFloatingViewPosition;
}

+ (id)newTransitionControllerForTaskKey:(id)arg1 TaskBizKey:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(nonatomic) __weak UIViewController *prevNeedHideWindowViewControllerWhenShowImagePicker; // @synthesize prevNeedHideWindowViewControllerWhenShowImagePicker=_prevNeedHideWindowViewControllerWhenShowImagePicker;
@property(nonatomic) _Bool isWillShowImagePicker; // @synthesize isWillShowImagePicker=_isWillShowImagePicker;
@property(nonatomic) _Bool isMMMusicPlayerActive; // @synthesize isMMMusicPlayerActive=_isMMMusicPlayerActive;
@property(nonatomic) _Bool isFullScreenPlaying; // @synthesize isFullScreenPlaying=_isFullScreenPlaying;
@property(nonatomic) _Bool isMainWindowResignKeyWindow; // @synthesize isMainWindowResignKeyWindow=_isMainWindowResignKeyWindow;
@property(nonatomic) int gestureMode; // @synthesize gestureMode=_gestureMode;
@property(retain, nonatomic) NSString *taskKeyWithGesture; // @synthesize taskKeyWithGesture=_taskKeyWithGesture;
@property(retain, nonatomic) NSMutableArray *tmpSnapshotViewListWhenSwitchTask; // @synthesize tmpSnapshotViewListWhenSwitchTask=_tmpSnapshotViewListWhenSwitchTask;
@property(retain, nonatomic) MinimizeTaskData *currentTransitioningTaskData; // @synthesize currentTransitioningTaskData=_currentTransitioningTaskData;
@property(retain, nonatomic) NSMutableDictionary *dicTaskKey2NotifyDelegate; // @synthesize dicTaskKey2NotifyDelegate=_dicTaskKey2NotifyDelegate;
@property(nonatomic) unsigned long long lastAdsorbFloatingViewCreateTime; // @synthesize lastAdsorbFloatingViewCreateTime=_lastAdsorbFloatingViewCreateTime;
@property(retain, nonatomic) NSString *lastAdsorbFloatingViewSessionId; // @synthesize lastAdsorbFloatingViewSessionId=_lastAdsorbFloatingViewSessionId;
@property(nonatomic) struct CGPoint lastAdsorbFloatingViewPosition; // @synthesize lastAdsorbFloatingViewPosition=_lastAdsorbFloatingViewPosition;
@property(nonatomic) unsigned long long minimizeWindowState; // @synthesize minimizeWindowState=_minimizeWindowState;
@property(retain, nonatomic) MinimizationWindow *minimizeWindow; // @synthesize minimizeWindow=_minimizeWindow;
@property(retain, nonatomic) NSString *pendingNewTaskKeyForReport; // @synthesize pendingNewTaskKeyForReport=_pendingNewTaskKeyForReport;
@property(retain, nonatomic) NSMutableArray *passiveStateTaskList; // @synthesize passiveStateTaskList=_passiveStateTaskList;
- (long long)availableNormalTaskCount;
- (void)onMusicPageActive:(_Bool)arg1;
- (void)onWCWebSameLayerVideoPlayFullScreen:(_Bool)arg1;
- (void)onMPVideoPlayFullScreen:(_Bool)arg1;
- (void)onWSVideoPlayFullScreen:(_Bool)arg1;
- (void)onWAVideoPlayFullScreen:(_Bool)arg1;
- (void)UIWindowDidBecomeKeyNotification:(id)arg1;
- (_Bool)shouldIgnoreAppearAndDisappearEventForVC:(id)arg1;
- (_Bool)isForbidResetFullScreenPlayingStatusWhenVcWillAppear:(id)arg1;
- (_Bool)isViewControllerNeedHideMinimization:(id)arg1;
- (void)MMUIViewControllerDidBeDismissed:(id)arg1;
- (void)MMUIViewControllerDidBePoped:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)handleViewControllerAppearanceEvent:(id)arg1;
- (void)checkAndHandleCurrentTopViewControllerAppearance;
- (void)onMMImagePickerManagerShow;
- (void)onMMImagePickerManagerFinish;
- (void)onHDHeadImageWillDisappear;
- (void)onHDHeadImageWillAppear;
- (void)markImagePicking:(_Bool)arg1;
- (void)MMSightCameraWillBePoped;
- (void)MMSightCameraWillBePushed;
- (void)MMSightCameraWillBeDealloc;
- (void)MMSightCameraWillBeDismissed;
- (void)MMSightCameraWillBePresent;
- (void)onStoryPreviewStatusShow;
- (void)onStoryPreviewStatusHide;
- (void)onLoginOK;
- (void)onManulLoginOK;
- (void)setWindowMinimizationState:(unsigned long long)arg1;
- (void)routeExposedTaskEventWithTaskKey:(id)arg1;
- (void)routeRemoveTaskEventWithTaskKey:(id)arg1;
- (void)routeEnterTaskEventWithTaskKey:(id)arg1 openContext:(id)arg2 enterTaskScene:(unsigned int)arg3;
- (void)clearGestureRelatedData;
- (void)endPopBackGesture:(id)arg1 taskBizKey:(id)arg2 isComplete:(_Bool)arg3 pendingTaskContext:(id)arg4;
- (void)endPopBackGesture:(id)arg1 TaskBizKey:(id)arg2 isComplete:(_Bool)arg3;
- (_Bool)updatePopBackGesture:(id)arg1 Progress:(double)arg2 TouchPoint:(struct CGPoint)arg3 ShouldCancel:(_Bool *)arg4;
- (_Bool)updatePopBackGesture:(id)arg1 TaskBizKey:(id)arg2 Progress:(double)arg3 TouchPoint:(struct CGPoint)arg4 ShouldCancel:(_Bool *)arg5;
- (void)beginPopBackGesture:(id)arg1;
- (void)beginPopBackGesture:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)needShowMinimizeWindow;
- (_Bool)hasSpecialTask;
- (void)onUpdateAbsorbFloatingViewLastPosition:(struct CGPoint)arg1;
- (void)onExitTaskListPage:(unsigned long long)arg1 ExitType:(int)arg2;
- (void)onTaskCountExceedMaxWhenSlideToAddNewTask:(id)arg1;
- (void)onOuterContentViewSizeDidChanged:(id)arg1 From:(struct CGSize)arg2 To:(struct CGSize)arg3;
- (void)onEnterTaskList;
- (void)onPositiveTaskCloseBtnClick:(id)arg1 CloseFromState:(_Bool)arg2;
- (void)onClearPendingTask:(id)arg1 bAddNewTask:(_Bool)arg2;
- (void)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onFloatingViewMoveToTrash:(id)arg1;
- (_Bool)tryDeleteTaskRelatedData:(id)arg1;
- (_Bool)tryDeleteTaskFromList:(id)arg1;
- (void)realEnterTask:(id)arg1 FromFloatingView:(id)arg2 EnterTaskScene:(unsigned int)arg3;
- (void)onFloatingViewTap:(id)arg1 FromFloatingView:(id)arg2 WillEnterBackgroundTaskKey:(id)arg3 EnterTaskScene:(unsigned int)arg4;
- (void)markWidgetFullScreen:(_Bool)arg1;
- (id)getAllBackgroundTaskList;
- (id)getAllOutterTaskList;
- (void)setTaskIsForegournd:(_Bool)arg1 taskKey:(id)arg2;
- (id)getTask:(id)arg1;
- (_Bool)removeUsedTaskData:(id)arg1;
- (_Bool)appendOrUpdateUsedTaskData:(id)arg1 notifyDelegate:(id)arg2;
- (_Bool)removeTask:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)tryAdjustTaskListOrderIfNeed:(id)arg1 NewTaskData:(id)arg2;
- (_Bool)removeTask:(id)arg1 TaskList:(id)arg2;
- (_Bool)replaceTask:(id)arg1 TaskList:(id)arg2;
- (_Bool)updateTaskState:(id)arg1 NewTaskData:(id)arg2;
- (_Bool)updateTask:(id)arg1 WithTaskData:(id)arg2;
- (_Bool)tryUpdateTaskText:(id)arg1 NewTaskData:(id)arg2;
- (_Bool)hasTask:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)isTaskInForground:(id)arg1 TaskBizKey:(id)arg2;
- (id)getTask:(id)arg1 TaskBizKey:(id)arg2;
- (id)taskSnapShotImageWithTaskData:(id)arg1;
- (_Bool)updateTaskSnapshot:(id)arg1 taskBizName:(id)arg2 taskBizKey:(id)arg3;
- (_Bool)p_checkAndUpdateTask:(id)arg1 notifyDelegate:(id)arg2 errCode:(unsigned int *)arg3;
- (_Bool)p_checkAndAddTask:(id)arg1 notifyDelegate:(id)arg2 errCode:(unsigned int *)arg3;
- (_Bool)p_tryAddTaskAndMinimize:(id)arg1 notiDelegate:(id)arg2 errCode:(unsigned int *)arg3;
- (_Bool)tryAddTaskAndMinimize:(id)arg1 notiDelegate:(id)arg2 errCode:(unsigned int *)arg3;
- (_Bool)tryAddTaskAndMinimize:(id)arg1 NotiDelegate:(id)arg2;
- (_Bool)maximizeTask:(id)arg1 TaskBizKey:(id)arg2;
- (_Bool)checkTaskMaxCountOrShowTipsBeforeAdd:(id)arg1 pendingTaskContext:(id)arg2;
- (_Bool)canShowMinimizeOperation;
- (id)minimizeTaskListWithTaskBizName:(id)arg1;
- (void)delayRemoveTmpSnapShotViews;
- (void)onMinimizeAnimationEnd:(id)arg1;
- (void)onMinimizeAnimationEnd:(id)arg1 TaskBizKey:(id)arg2;
- (void)onMinimizeAnimationBegin:(id)arg1 FromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (void)onMinimizeAnimationBegin:(id)arg1 TaskBizKey:(id)arg2 FromFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4 duration:(double)arg5;
- (void)resetMinimizeAnimationTaskData;
- (void)performMinimizeAnimationWithTaskBizName:(id)arg1 taskBizKey:(id)arg2;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1 TaskBizKey:(id)arg2 toWindow:(id)arg3;
- (struct CGRect)getConvertedVisibleFrame:(id)arg1 TaskBizKey:(id)arg2;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (id)getCurrentFloatingView;
- (id)getTransitionFloatingView:(id)arg1;
- (id)getOutterTaskListFloatingView:(id)arg1 TaskBizKey:(id)arg2;
- (id)getTransitionFloatingView:(id)arg1 TaskBizKey:(id)arg2;
- (void)onServiceClearData;
- (void)loadTaskListFromFileAndShowAbsorbFloatingView;
- (void)onServiceInit;
- (void)checkAndMigrateOldNormalList;
- (void)callMinimizeTaskDataRemoved:(id)arg1;
- (void)callMinimizeTaskDataExposed:(id)arg1;
- (void)callMinimizeTaskDataEntered:(id)arg1 openContext:(id)arg2 enterTaskScene:(unsigned int)arg3;
- (id)notifityDelegateRecoverIfNeed:(id)arg1;
- (_Bool)recoverNotifyDelegate:(id)arg1;
- (_Bool)checkIfTaskValid:(id)arg1;
- (id)recoverLastAdsorbFloatingViewInfo;
- (_Bool)saveLastAdsorbFloatingViewInfo:(struct CGPoint)arg1 AggreSessionId:(id)arg2;
- (_Bool)saveLastAdsorbFloatingViewSessionId:(id)arg1;
- (_Bool)saveLastAdsorbFloatingViewPosition:(struct CGPoint)arg1;
- (void)tryReportRemovePassiveStateTaskOperation:(id)arg1 UserTrigger:(_Bool)arg2;
- (int)opTypeFromMaximizeScene:(unsigned int)arg1;
- (void)tryReportRemoveTaskOperation:(id)arg1 IsLastTask:(_Bool)arg2 FromCloseButtonInListPage:(_Bool)arg3;
- (void)fillOperationCommonInfo:(id)arg1 Task:(id)arg2;
- (void)tryReportMinimizeOperation:(id)arg1 OpType:(int)arg2;
- (void)reportMaximizeOperation:(id)arg1 EnterTaskScene:(unsigned int)arg2;
- (void)reportExitTaskListPage:(unsigned long long)arg1 exitType:(int)arg2;
- (id)trySaveAggreSessionId:(_Bool)arg1;
- (id)getMiniSessionIdList:(id)arg1;
- (int)getReportState:(id)arg1;
- (long long)getIndexFromTaskList:(id)arg1 CurrentTask:(id)arg2;
- (long long)getTaskOrder:(id)arg1;
- (void)tryReportWhenUpdateTask:(id)arg1 NewTask:(id)arg2;
- (void)tryGenExtInfoAndReportNewTask:(id)arg1 overloadedType:(int)arg2;
- (void)genExtInfoAndReportNewTask:(id)arg1;
- (unsigned long long)getTotalTaskCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
