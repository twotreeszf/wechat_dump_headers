//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AddMemLogicDelegate-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "RoomContactSelectDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class AddMemLogic, CContact, NSString, RoomContactSelectViewController;
@protocol ViewMemLogicDelegate;

@interface ViewMemLogic : NSObject <RoomContactSelectDelegate, contactInfoDelegate, AddMemLogicDelegate, IGroupMgrExt>
{
    id <ViewMemLogicDelegate> m_delegate;
    AddMemLogic *m_addMemLogic;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    _Bool _m_bShowWithGrid;
    CContact *_m_oContact;
    struct CGPoint _m_bContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint m_bContentOffset; // @synthesize m_bContentOffset=_m_bContentOffset;
@property(nonatomic) _Bool m_bShowWithGrid; // @synthesize m_bShowWithGrid=_m_bShowWithGrid;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <ViewMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)didClickDelContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)roomContactSearchBarDidBecomeFirstResponse;
- (void)newMessageFromContactInfo:(id)arg1;
- (id)getViewController;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)addMember;
- (void)didReloadMemData;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

