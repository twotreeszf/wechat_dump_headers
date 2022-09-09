//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactInfoViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PublicWifiBrandInoCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APBase, MMTableView, NSArray, NSString;
@protocol PublicWifiConnectedViewControllerDelegate;

@interface PublicWifiConnectedViewController : MMUIViewController <PublicWifiBrandInoCellDelegate, MMWebViewDelegate, ContactInfoViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isNeedFollow;
    id <PublicWifiConnectedViewControllerDelegate> _delegate;
    NSArray *_rowData;
    MMTableView *_tableView;
    APBase *_apBase;
    unsigned long long _followState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long followState; // @synthesize followState=_followState;
@property(nonatomic) _Bool isNeedFollow; // @synthesize isNeedFollow=_isNeedFollow;
@property(retain, nonatomic) APBase *apBase; // @synthesize apBase=_apBase;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *rowData; // @synthesize rowData=_rowData;
@property(nonatomic) __weak id <PublicWifiConnectedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)requestAddContactToWeixinServer;
- (void)onRemoveContact;
- (void)onFollowStateChanged:(_Bool)arg1;
- (void)jumpToBrandProfile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)normalSpace;
- (void)genBrandDescCell:(id)arg1;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (_Bool)shouldInteractivePop;
- (void)dismissWithAnimate;
- (void)onBack;
- (void)onDone;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)reloadData;
- (id)initWithApBase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

