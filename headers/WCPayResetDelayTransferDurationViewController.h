//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class DelaySwitchSettingLogic, GetTransferWordingResponse, NSString;

@interface WCPayResetDelayTransferDurationViewController : WCPayBaseViewController
{
    GetTransferWordingResponse *_wordingResponse;
    NSString *_selectedTitle;
    DelaySwitchSettingLogic *_delaySetting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySetting; // @synthesize delaySetting=_delaySetting;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(retain, nonatomic) GetTransferWordingResponse *wordingResponse; // @synthesize wordingResponse=_wordingResponse;
- (void)onOpenQA;
- (void)selcetCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)reloadTableView;
- (void)setupNavigationBar;
- (int)switchType;
- (id)defaultSelectedTitle;
- (void)setupModel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

