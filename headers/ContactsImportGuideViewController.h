//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactsImportLogicDelegate-Protocol.h"

@class ContactsImportLogic, NSString, UIButton, UIImageView, UILabel;

@interface ContactsImportGuideViewController : MMUIViewController <ContactsImportLogicDelegate>
{
    ContactsImportLogic *_contactsImportLogic;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) ContactsImportLogic *contactsImportLogic; // @synthesize contactsImportLogic=_contactsImportLogic;
- (void)onBindOldWechatAccountFailed:(id)arg1 errorMessage:(id)arg2 canRecover:(_Bool)arg3;
- (void)onBindOldWechatAccountSucceeded:(id)arg1;
- (void)onTapButton;
- (void)onTapCloseNavigationItem;
- (void)layoutControllerView;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithQRCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

