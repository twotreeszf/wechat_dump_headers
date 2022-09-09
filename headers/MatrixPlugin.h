//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MatrixPluginProtocol-Protocol.h"

@class MatrixPluginConfig, NSString;
@protocol MatrixPluginListenerDelegate;

@interface MatrixPlugin : NSObject <MatrixPluginProtocol>
{
    MatrixPluginConfig *pluginConfig;
    id <MatrixPluginListenerDelegate> _pluginListener;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MatrixPluginListenerDelegate> pluginListener; // @synthesize pluginListener=_pluginListener;
@property(retain, nonatomic) MatrixPluginConfig *pluginConfig; // @synthesize pluginConfig;
- (void)reportIssueCompleteWithIssue:(id)arg1 success:(_Bool)arg2;
- (void)reportIssue:(id)arg1;
- (void)destroy;
- (void)stop;
- (_Bool)start;
- (void)setupPluginListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

