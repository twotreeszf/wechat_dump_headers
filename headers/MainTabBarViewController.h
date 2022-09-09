//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarController.h"

#import "MMNewTipsMgrExt-Protocol.h"
#import "MMTabBarControllerDelegate-Protocol.h"
#import "WCLazyInitObjectProtocol-Protocol.h"

@class ContactsViewController, FindFriendEntryViewController, MMTabbarItem, MoreViewController, NSMutableArray, NSString, NewMainFrameViewController;
@protocol MainTabBarControllerDelegate;

@interface MainTabBarViewController : MMTabBarController <MMTabBarControllerDelegate, WCLazyInitObjectProtocol, MMNewTipsMgrExt>
{
    unsigned int m_whatHasInit;
    NewMainFrameViewController *m_mainFrameViewController;
    MMTabbarItem *m_mainFrameTabItem;
    ContactsViewController *m_contactsViewController;
    MMTabbarItem *m_contacsTabItem;
    FindFriendEntryViewController *m_findFriendEntryViewController;
    MMTabbarItem *m_findFrientTabItem;
    MoreViewController *m_moreViewController;
    MMTabbarItem *m_moreTabItem;
    NSMutableArray *m_arrViewController;
    _Bool haveLazyInit;
    id <MainTabBarControllerDelegate> _mainDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MainTabBarControllerDelegate> mainDelegate; // @synthesize mainDelegate=_mainDelegate;
@property(nonatomic) _Bool haveLazyInit; // @synthesize haveLazyInit;
- (void)openFindFinderWithDataItem:(id)arg1 postStateModel:(id)arg2;
- (void)recreateFindFriendViewController;
- (void)p_createMoreViewController;
- (id)p_getMoreViewController;
- (void)p_createFindFriendViewController;
- (id)p_getFindFriendEntryViewController;
- (id)findFriendEntryViewController;
- (void)p_createContactsViewController;
- (id)p_getContactsViewController;
- (void)p_createNewMainFrameViewController;
- (id)p_getNewMainFrameViewController;
- (void)p_createSlimViewControllers;
- (void)p_createTabBarItems;
- (void)p_tryToInitAllControllers;
@property(nonatomic) unsigned long long selectedIndex;
- (id)init;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)OnMainFrameSingleClicked:(id)arg1;
- (void)OnMainFrameDoubleClicked:(id)arg1;
- (id)getAllNavigationControllers;
- (id)getNavigationContollerAtIndex:(unsigned long long)arg1;
- (id)getAllTabBaseViewControllersIfExist;
- (id)getTabBarBaseViewController:(unsigned long long)arg1;
- (id)getNewMainFrameViewController;
- (void)goToLazyInitObject;
- (double)timeToLazyInitAfterOpenFirstView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

