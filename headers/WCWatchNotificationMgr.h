//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WCYoDelegate-Protocol.h"

@class NSMutableArray, NSString, WCYoWindowController;

@interface WCWatchNotificationMgr : MMUserService <WCYoDelegate, MMServiceProtocol>
{
    unsigned int _yoTime;
    NSMutableArray *_yoCounts;
    WCYoWindowController *_yoWindowController;
    NSString *_isShowingUsername;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int yoTime; // @synthesize yoTime=_yoTime;
@property(copy, nonatomic) NSString *isShowingUsername; // @synthesize isShowingUsername=_isShowingUsername;
@property(retain, nonatomic) WCYoWindowController *yoWindowController; // @synthesize yoWindowController=_yoWindowController;
@property(retain, nonatomic) NSMutableArray *yoCounts; // @synthesize yoCounts=_yoCounts;
- (void)didHitInside;
- (void)didHitOutside;
- (void)dismissYoWindow;
- (void)prepareToCloseYoWindow;
- (void)dequeue;
- (void)addYoCount:(unsigned long long)arg1 contact:(id)arg2 type:(int)arg3;
- (void)displaySignalMessage:(id)arg1;
- (id)getYoWindow;
- (void)onServiceEnterForeground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

