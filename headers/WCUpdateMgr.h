//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCUpdateResourceExt.h"

@class NSBundle, WCUpdateInfo;

@interface WCUpdateMgr : NSObject <WCUpdateResourceExt>
{
    NSBundle *_resourceBundle;
    NSBundle *_languageBundle;
    WCUpdateInfo *_patchInfo;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (_Bool)_loadBundleWithoutCheck:(id)arg1;
- (void)exitOnEnteringBackground;
- (void)setNewClientVersionInUserDefault:(unsigned int)arg1;
- (void)clearNewClientVersionInUserDefault;
- (unsigned int)newClientVersion;
- (void)runPatch;
- (id)getPatchInfo:(id)arg1;
- (void)onPatchResDeleteFinish;
- (void)onPatchResUpdateFinish:(unsigned long long)arg1;
- (void)dealloc;
- (void)forceUpdate:(unsigned int)arg1;
- (void)registerExtension;
- (_Bool)loadBundle:(id)arg1 withIDKey:(const struct WCVMBundleLoadIDKey *)arg2;
- (_Bool)loadBundleWithoutIDKeyReport:(id)arg1;
- (void)loadAndExecute;
- (id)init;
- (id)getStringForCurLanguage:(id)arg1 defaultTo:(id)arg2;
- (id)getBundleResource:(id)arg1 ext:(id)arg2;
- (id)imageNamed:(id)arg1;
- (_Bool)loadResource;

@end

