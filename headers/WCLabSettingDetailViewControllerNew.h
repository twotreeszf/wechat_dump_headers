//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCLabSettingDetailFooterViewDelegate-Protocol.h"
#import "WCLabSettingDetailImagesCellDelegate-Protocol.h"
#import "WCLabSettingDetailVisitWeAppCellDelegate-Protocol.h"

@class NSString, UISwitch, UITableView, WCLabsAppItem;

@interface WCLabSettingDetailViewControllerNew : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCLabSettingDetailFooterViewDelegate, WCLabSettingDetailVisitWeAppCellDelegate, WCLabSettingDetailImagesCellDelegate>
{
    WCLabsAppItem *_labItem;
    UITableView *_tableView;
    UISwitch *_labSwitch;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UISwitch *labSwitch; // @synthesize labSwitch=_labSwitch;
- (void)initTableView;
- (void)onClickImage:(id)arg1;
- (id)genFeedbackFromStr;
- (void)onClickVisisWeAppWithLabItem:(id)arg1;
- (void)onClickExposeButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithLabItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

