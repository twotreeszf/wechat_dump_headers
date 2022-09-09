//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaCastingPageSheet.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WAMediaCastingRoutePickerViewModelDelegate-Protocol.h"

@class MMUILabel, NSString, UIButton, UITableView, WAMediaCastingRoutePickerDeviceItem, WAMediaCastingRoutePickerTableHeaderView, WAMediaCastingRoutePickerViewModel;
@protocol WAMediaCastingRoutePickerViewDelegate;

@interface WAMediaCastingRoutePickerView : WAMediaCastingPageSheet <WAMediaCastingRoutePickerViewModelDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <WAMediaCastingRoutePickerViewDelegate> _pickerViewDelegate;
    WAMediaCastingRoutePickerViewModel *_viewModel;
    WAMediaCastingRoutePickerDeviceItem *_selectedDevice;
    UITableView *_tableView;
    MMUILabel *_titleLabel;
    UIButton *_closeButton;
    UIButton *_guideButton;
    WAMediaCastingRoutePickerTableHeaderView *_recentlyHeader;
    WAMediaCastingRoutePickerTableHeaderView *_availableHeader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingRoutePickerTableHeaderView *availableHeader; // @synthesize availableHeader=_availableHeader;
@property(retain, nonatomic) WAMediaCastingRoutePickerTableHeaderView *recentlyHeader; // @synthesize recentlyHeader=_recentlyHeader;
@property(retain, nonatomic) UIButton *guideButton; // @synthesize guideButton=_guideButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WAMediaCastingRoutePickerDeviceItem *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain, nonatomic) WAMediaCastingRoutePickerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WAMediaCastingRoutePickerViewDelegate> pickerViewDelegate; // @synthesize pickerViewDelegate=_pickerViewDelegate;
- (void)onClickGuideButton:(id)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)handleCurrentDeviceStatusChanged:(unsigned long long)arg1;
- (void)handleSearchingStatusChanged:(_Bool)arg1;
- (_Bool)curOrientationIsLandscape;
- (void)onMediaCastingRoutePickerViewModelCurrentDeviceStatusChanged:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelSearchingStatusChanged:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelDeviceListChanged:(id)arg1;
- (void)notifySelected:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGPoint)containerDismissAnimationEndPoint;
- (struct CGPoint)containerShowAnimationStartPoint;
- (struct CGPoint)containerPoint;
- (_Bool)cornerRaduis;
- (struct CGSize)contentViewSize;
- (void)layoutSubviews;
- (void)addSubviews:(id)arg1;
- (void)loadAllSubviews;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

