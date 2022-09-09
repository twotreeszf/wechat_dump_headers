//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"

@class ForwardMessageLogicController, NSArray, NSMutableArray, NSString;
@protocol FavForwardLogicDelegate;

@interface FavForwardLogicController : MMObject <ForwardMessageLogicDelegate, MMTipsViewControllerDelegate>
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSArray *m_forwardingItems;
    NSArray *m_forwardingDataWraps;
    NSMutableArray *m_messageWrapList;
    _Bool m_bAddAppMsgSourceType;
    id <FavForwardLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavForwardLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)checkAppMsgSourceType:(id)arg1;
- (void)addMsgFromItem:(id)arg1;
- (void)forMessage:(id)arg1 showConfirmView:(_Bool)arg2;
- (void)forMessage:(id)arg1;
- (void)forwardMessage:(id)arg1 delegate:(id)arg2;
- (void)doForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(_Bool)arg4;
- (void)BaseMsgForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (_Bool)addFavItemList:(id)arg1;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3 showConfirmView:(_Bool)arg4;
- (void)BaseMsgForwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)forwardFavDataItemWraps:(id)arg1 ToUser:(id)arg2 delegate:(id)arg3;
- (void)forwardFavDataItemWraps:(id)arg1 delegate:(id)arg2;
- (void)ForwardFavItemList:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

