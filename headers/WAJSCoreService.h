//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSNativeBufferBase.h"

#import "WAJSEventHandlerContextDelegate.h"
#import "WAJSServiceProtocol.h"

@class CContact, JSContext, JSVirtualMachine, NSArray, NSCondition, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, WAAppTaskExtInfo, WAJSContextPluginScheduler, WAJSCoreServiceOpenData, WAPackageConfig, WAWebViewController, WxaExternalInfo;

@interface WAJSCoreService : WAJSNativeBufferBase <WAJSEventHandlerContextDelegate, WAJSServiceProtocol>
{
    unsigned int _workerFlowId;
    unsigned int _debugModeType;
    _Bool _isDebugAndVConsoleOpen;
    _Bool _isIgnoreRemoteCheckDomain;
    WxaExternalInfo *_wxaExternalInfo;
    unsigned long long _appVersion;
    unsigned int _appServiceMaxDataSize;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_enterPath;
    unsigned int _enterScene;
    NSArray *_templates;
    CContact *_contact;
    WAPackageConfig *_packageConfig;
    unsigned long long _taskRunningState;
    _Bool _jsThreadSuspended;
    _Bool _jsThreadDying;
    NSCondition *_condition;
    NSString *lastError;
    NSMutableSet *_setInjectedModule;
    unsigned int _subContextId;
    int _enterJsErrorFunctionCount;
    _Bool _stopReportJsErrorFunction;
    _Bool _threadInjected;
    _Bool _m_bIsStartFromPreloadAppTask;
    _Bool _hasInjectErr;
    NSString *_appID;
    JSContext *_context;
    JSVirtualMachine *_jsVirtualMachine;
    id <WAJSServiceProtocol> _serviceProtocol;
    id <WAJSCoreServiceDelegate> _delegate;
    id <WAJSCoreServiceRemoteDelegate> _remoteDelegate;
    WAWebViewController *_currentWebView;
    NSString *_serviceJSUrl;
    WAJSContextPluginScheduler *_pluginScheduler;
    unsigned long long _runningState;
    WAJSCoreServiceOpenData *_launchData;
    NSThread *_thread;
    NSMutableDictionary *_subContexts;
    NSMutableDictionary *_workerFlows;
    NSMutableDictionary *_timerObjs;
    NSMutableSet *_eventHandlers;
    NSMutableArray *_prevEvents;
    NSMutableDictionary *_extraInfo;
}

+ (void)setRefererInfo:(id)arg1 toDicParam:(id)arg2;
@property(retain) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain) NSMutableArray *prevEvents; // @synthesize prevEvents=_prevEvents;
@property(retain) NSMutableSet *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property _Bool hasInjectErr; // @synthesize hasInjectErr=_hasInjectErr;
@property(retain) NSMutableDictionary *workerFlows; // @synthesize workerFlows=_workerFlows;
@property(retain) NSMutableDictionary *subContexts; // @synthesize subContexts=_subContexts;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) _Bool m_bIsStartFromPreloadAppTask; // @synthesize m_bIsStartFromPreloadAppTask=_m_bIsStartFromPreloadAppTask;
@property(retain, nonatomic) WAJSCoreServiceOpenData *launchData; // @synthesize launchData=_launchData;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(retain, nonatomic) WAJSContextPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(copy, nonatomic) NSString *serviceJSUrl; // @synthesize serviceJSUrl=_serviceJSUrl;
@property(nonatomic) __weak WAWebViewController *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(nonatomic) __weak id <WAJSCoreServiceRemoteDelegate> remoteDelegate; // @synthesize remoteDelegate=_remoteDelegate;
@property(nonatomic) __weak id <WAJSCoreServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WAJSServiceProtocol> serviceProtocol; // @synthesize serviceProtocol=_serviceProtocol;
@property(retain) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain) JSContext *context; // @synthesize context=_context;
@property _Bool threadInjected; // @synthesize threadInjected=_threadInjected;
@property(copy) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)jSCore_invokeHandler:(id)arg1 param:(id)arg2 callbackID:(unsigned int)arg3 contextID:(unsigned int)arg4;
- (void)jSCore_publishHandler:(id)arg1 param:(id)arg2 webViewIDs:(id)arg3;
- (void)webCore_invoke:(id)arg1 param:(id)arg2;
- (void)stopRemoteDebug;
- (void)alterWillStop;
- (void)startRemoteDebug;
- (void)sendCallInterfaceResult:(id)arg1 callID:(unsigned int)arg2;
- (void)evaluateJavascript:(id)arg1 withSourceURL:(id)arg2;
- (void)sendEvaluateJavascript:(id)arg1;
- (void)workThread_injectModuleAppServiceScript:(id)arg1;
- (void)injectModuleAppServiceWithModuleName:(id)arg1;
- (void)executeDelayToForegroundJSAPI;
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)threadDidReceiveSuspend;
- (void)suspendWorkingThread;
- (void)checkWorkingThreadStatusWhenRunningStateChanged;
- (void)onRunningStateDidChanged:(unsigned long long)arg1;
- (void)onRunningStateWillChanged:(unsigned long long)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)asyncPrintConsoleLogToCurrentWebView:(id)arg1;
- (void)printConsoleLog:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)setWxaExternalInfo:(id)arg1;
- (id)getWxaExternalInfo;
- (void)setIsIgnoreRemoteCheckDomain:(_Bool)arg1;
- (_Bool)isIgnoreRemoteCheckDomain;
- (void)setIsDebugAndVConsoleOpen:(_Bool)arg1;
- (_Bool)isDebugAndVConsoleOpen;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (unsigned int)getAppType;
- (id)getAppId;
- (id)getEventHandler:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)reportApiCallResult:(id)arg1;
- (void)workThread_invokeCallbackHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3 contextId:(unsigned int)arg4;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)notifyJSInjectedOnMainThread:(id)arg1;
- (_Bool)isPlayingInnerAudio;
- (void)stopPlayingBackgroundAudio;
- (_Bool)isPlayingBackgroundAudio;
- (void)setupTimerBlock:(id)arg1;
- (void)setupAPIBlock:(id)arg1 contextId:(unsigned int)arg2;
- (void)setupInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 contextId:(unsigned int)arg4;
- (void)setupSystemLog:(id)arg1;
- (void)injectJSBaseForAppBrandThread:(id)arg1 userScript:(id)arg2 fromPreload:(_Bool)arg3;
- (void)reportJSErrorOnIsolatedContext:(id)arg1 context:(id)arg2;
- (void)reportJSError:(id)arg1;
- (id)getCurrentWebView;
- (id)wxAppInfoJSONWithTemplate:(id)arg1 contactAttribute:(id)arg2;
- (id)getAppLaunchConfig;
- (void)injectJavaScript;
- (void)releaseJSContext;
- (void)initJSContext:(id)arg1;
- (void)setEnterPath:(id)arg1 withScene:(unsigned int)arg2 taskExtInfo:(id)arg3;
- (void)triggerStrictBanMode:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (_Bool)checkJSAPIRunInMainThread:(id)arg1;
- (_Bool)checkJSAPIRunMode:(id)arg1;
- (id)getPermissionWithJSAPI:(id)arg1;
- (void)tryInjectJavaScript;
- (void)onAppBeforPushNavigation:(id)arg1;
- (_Bool)isJSInjected;
- (void)performEventOnThread:(id)arg1;
- (void)sendInnerAppBrandEvent:(long long)arg1 serviceParam:(id)arg2 pluginParam:(id)arg3 webviewID:(unsigned long long)arg4;
- (void)sendInnerAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)workthread_sendJSEventToService:(id)arg1;
- (void)innerSendJSEventToService:(id)arg1;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (void)sendWebviewEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)sendErrorEvent:(id)arg1;
- (void)workThread_runOperationBlock:(CDUnknownBlockType)arg1;
- (void)asyncRunOperationBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)stopAppBrandAndThread;
- (void)stopAppBrand;
- (void)startAppBrand:(id)arg1 packageConfig:(id)arg2 extraInfo:(id)arg3;
- (void)prepareTypedArray:(struct OpaqueJSContext *)arg1;
- (void)setupSubContext:(_Bool)arg1;
- (void)sendWorkerMessage:(unsigned int)arg1 msg:(id)arg2;
- (void)setupWeixinWorker;
- (void)startServiceThread;
- (void)runThread:(id)arg1;
- (void)loadAppConfig;
- (void)injectPublicServiceJSForPreload;
- (id)initForPreloadAppTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
