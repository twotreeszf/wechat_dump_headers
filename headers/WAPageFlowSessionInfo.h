//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAPageFlowSessionInfo : MMObject
{
    _Bool _isTriggerDownloaded;
    NSString *_sessionId;
    unsigned long long _scene;
    NSString *_sceneNote;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    NSString *_referPageOfHomePage;
    unsigned long long _targetActionType;
    NSString *_targetActionNote;
    NSString *_referAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *referAction; // @synthesize referAction=_referAction;
@property(copy, nonatomic) NSString *targetActionNote; // @synthesize targetActionNote=_targetActionNote;
@property(nonatomic) unsigned long long targetActionType; // @synthesize targetActionType=_targetActionType;
@property(nonatomic) _Bool isTriggerDownloaded; // @synthesize isTriggerDownloaded=_isTriggerDownloaded;
@property(copy, nonatomic) NSString *referPageOfHomePage; // @synthesize referPageOfHomePage=_referPageOfHomePage;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)initWithSessionPrefix:(id)arg1;

@end

