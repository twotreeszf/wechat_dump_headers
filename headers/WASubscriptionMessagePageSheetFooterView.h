//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, WASubscriptionMessagePageSheetViewModel;
@protocol WASubscriptionMessagePageSheetFooterViewDelegate;

@interface WASubscriptionMessagePageSheetFooterView : MMUIView
{
    id <WASubscriptionMessagePageSheetFooterViewDelegate> _delegate;
    WASubscriptionMessagePageSheetViewModel *_viewModel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIButton *_declineButton;
    UIButton *_keepOptionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *keepOptionButton; // @synthesize keepOptionButton=_keepOptionButton;
@property(retain, nonatomic) UIButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WASubscriptionMessagePageSheetFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDeclineButtonClicked:(id)arg1;
- (void)onKeepOptionButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onConfirmButtonClicked:(id)arg1;
- (void)updateConfirmButtonStatus;
- (_Bool)showKeepOptionButton;
- (_Bool)showDeclineButton;
- (void)addSubviews:(id)arg1;
- (void)layoutSubviews;
- (void)updateStatus;
- (double)calculateHeight:(double)arg1;
- (void)loadAllSubviews;
- (id)initWithViewModel:(id)arg1;

@end
