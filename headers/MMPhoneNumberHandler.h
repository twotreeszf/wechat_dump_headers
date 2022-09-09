//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "CNContactPickerDelegate-Protocol.h"
#import "CNContactViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CBaseContact, NSString, UIViewController;

@interface MMPhoneNumberHandler : MMObject <WCActionSheetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate>
{
    NSString *_phoneNumber;
    UIViewController *_viewController;
    CBaseContact *m_oContact;
}

+ (_Bool)canMakePhoneCall;
+ (void)makePhoneCall:(id)arg1;
+ (void)handlePhoneNumber:(id)arg1 contact:(id)arg2;
+ (void)handleBankCardNumber:(id)arg1;
+ (void)handleWechatProfilePhoneNumber:(id)arg1;
+ (void)handlePhoneNumber:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)CreateNewContact:(id)arg1 viewController:(id)arg2;
- (void)AddPhoneNumberToExistContact:(id)arg1 viewController:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)showNewPersonViewController;
- (void)showPeoplePickerController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleWechatOutActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleContactActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)requestAccessForContactsDone:(_Bool)arg1 withAlertTitle:(id)arg2;
- (void)handleTotalActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handlePhoneNumber:(id)arg1 contact:(id)arg2;
- (void)handleWechatProfilePhone:(id)arg1;
- (void)handleBankCardNumber:(id)arg1;
- (void)handlePhoneNumber:(id)arg1;
- (void)showWechatProfilePhoneNumberActionSheet;
- (void)showTotalActionSheet:(id)arg1;
- (void)showContactActionSheet:(id)arg1;
- (id)getViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

