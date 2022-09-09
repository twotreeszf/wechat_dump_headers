//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IGroupMgrExt-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContactVerifyLogic, MMLoadingView, NSDictionary, NSMutableArray, NSString, UIView;
@protocol ContactsCreateChatRoomLogicDelegate;

@interface ContactsCreateChatRoomLogic : MMObject <contactVerifyLogicDelegate, IGroupMgrExt>
{
    NSDictionary *m_dicMultiSelect;
    UIView *m_ParentView;
    MMLoadingView *m_loadingView;
    id <ContactsCreateChatRoomLogicDelegate> m_Delegate;
    unsigned int m_uiUseChatState;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSMutableArray *m_arrNeedVerifyUsrName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiUseChatState; // @synthesize m_uiUseChatState;
@property(nonatomic) __weak id <ContactsCreateChatRoomLogicDelegate> m_Delegate; // @synthesize m_Delegate;
- (id)genOpenIMErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (void)OnOpenIMCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (id)genErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)verifyContact;
- (_Bool)createChatRoom;
- (id)genMemerList;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)start:(id)arg1 parentView:(id)arg2;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

