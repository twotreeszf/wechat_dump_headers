//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JavaScriptCore/JSContext.h>

@interface JSContext (JSCDebugger)
+ (void)JSCDebuggerQueueTaskOnGlobalQueue:(CDUnknownBlockType)arg1;
+ (struct __CFString *)JSCDebuggerRunLoopMode;
+ (_Bool)isSupportedDebugger;
- (CDUnknownBlockType)setupConnectionAdapter:(void *)arg1 disconnectBlock:(id *)arg2;
- (void)removeDebuggerWrapper;
- (void)setupJSCConnectionIfNeeded:(_Bool)arg1;
- (id)debuggerWrapperFromContext;
- (void)getMemoryConsume:(CDUnknownBlockType)arg1;
- (void)disconnectToJSCDebugger;
- (void)sendMessageToJSCDebugger:(id)arg1;
- (_Bool)setupJSCDebuggerConnection:(CDUnknownBlockType)arg1 needFilter:(_Bool)arg2;
- (_Bool)setupJSCDebuggerConnection:(CDUnknownBlockType)arg1;
@end

