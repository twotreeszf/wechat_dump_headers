//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BrandSessionViewController.h"

#import "WCActionSheetDelegate.h"

@class NSString, UIView;

@interface BrandNewSessionViewController : BrandSessionViewController <WCActionSheetDelegate>
{
    UIView *m_topNavView;
}

- (void).cxx_destruct;
- (void)brandArticleSearchWillEndSearch;
- (void)brandArticleSearchWillBeginSearch;
- (void)initSearchBar;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)unsubscribeOnTableView:(id)arg1 IndexPath:(id)arg2;
- (void)handleDeleteSession:(id)arg1;
- (void)deleteSessionOnTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheetForRightButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onNavBackBarButtonClicked;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)initNavigationBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
