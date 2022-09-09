//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface WAAppMgr : MMUserService <PBMessageObserverDelegate, IMMLanguageMgrExt, MMServiceProtocol>
{
    unsigned int _lastUpdate;
}

@property(nonatomic) unsigned int lastUpdate; // @synthesize lastUpdate=_lastUpdate;
- (void)updateSearchPlaceHolder;
- (void)onLanguageChange;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

