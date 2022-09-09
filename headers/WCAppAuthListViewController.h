//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCAppAuthLogicDelegate-Protocol.h"
#import "WCDataSearchDelegate-Protocol.h"
#import "WCSearchDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, MMUILabel, NSString, WCAppAuthLogicController, WCDataSearcher, WCTimeLineFooterView;

@interface WCAppAuthListViewController : MMUIViewController <UITableViewDelegate, tableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WCSearchDelegate, WCDataSearchDelegate, WCAppAuthLogicDelegate>
{
    _Bool _bSearchWording;
    WCAppAuthLogicController *_logicController;
    WCDataSearcher *_searcher;
    MMTableView *_mmTableView;
    MMUILabel *_searchErrorTips;
    MMUILabel *_fetchErrorTips;
    WCTimeLineFooterView *_getListTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    MMUILabel *_wordingLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bSearchWording; // @synthesize bSearchWording=_bSearchWording;
@property(retain, nonatomic) MMUILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) WCTimeLineFooterView *searchTableFooterView; // @synthesize searchTableFooterView=_searchTableFooterView;
@property(retain, nonatomic) WCTimeLineFooterView *getListTableFooterView; // @synthesize getListTableFooterView=_getListTableFooterView;
@property(retain, nonatomic) MMUILabel *fetchErrorTips; // @synthesize fetchErrorTips=_fetchErrorTips;
@property(retain, nonatomic) MMUILabel *searchErrorTips; // @synthesize searchErrorTips=_searchErrorTips;
@property(retain, nonatomic) MMTableView *mmTableView; // @synthesize mmTableView=_mmTableView;
@property(retain, nonatomic) WCDataSearcher *searcher; // @synthesize searcher=_searcher;
@property(retain, nonatomic) WCAppAuthLogicController *logicController; // @synthesize logicController=_logicController;
- (void)logicDidFinishSearch;
- (void)logicDidSearchMoreApps:(id)arg1;
- (void)logicDidFinishDeletionAtIndex:(long long)arg1;
- (void)logicDidFinishLoadApps;
- (void)logicDidLoadMoreApps:(id)arg1;
- (void)showAlertForCmdId:(unsigned int)arg1;
- (void)logicDidFailAtCgi:(unsigned int)arg1 errcode:(int)arg2 errmsg:(id)arg3;
- (void)showAppInfoDetail:(id)arg1 fromScene:(unsigned int)arg2;
- (void)makeAppInfo:(id)arg1 cell:(id)arg2;
- (void)setSearchTableResultText:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)endEditTable;
- (void)startEditTable;
- (id)getSectionTitle;
- (void)showSearchTableLoadMore;
- (void)adjustSubviewRects;
- (void)initTableView;
- (void)updateListTips;
- (void)updateSearchBarTips;
- (void)initSearchBar;
- (void)initNaviBtnWithStatus:(_Bool)arg1;
- (void)initView;
- (void)initLogic;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

