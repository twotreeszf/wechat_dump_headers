//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTimelineLogicControllerImplProtocol-Protocol.h"

@class NSString;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineADLogicController : NSObject <WCTimelineLogicControllerImplProtocol>
{
    _Bool _canLogAdContext;
    id <WCTimelineLogicControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCTimelineLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool canLogAdContext; // @synthesize canLogAdContext=_canLogAdContext;
- (void)Register;
- (void)Reset;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 query:(id)arg3 scene:(long long)arg4;
- (void)onSearchTopicTagClicked:(id)arg1 query:(id)arg2 scene:(long long)arg3;
- (void)calADCellYVisible:(_Bool *)arg1 centerVisible:(_Bool *)arg2 bottomVisible:(_Bool *)arg3 forRowAtIndexPath:(id)arg4 inTableView:(id)arg5;
- (void)recordADCommentEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)tryReportAdCell:(id)arg1;
- (void)startAdResumeAppear;
- (void)startAdDisappear;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
