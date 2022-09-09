//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMPageSheetProvider-Protocol.h"

@class MMPageSheetConfig, MMPageSheetProviderController, NSString;

@interface MMPageSheetBaseView : UIView <MMPageSheetProvider>
{
    UIView *_detailView;
    MMPageSheetConfig *_pageSheetConfig;
    MMPageSheetProviderController *_adapter;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMPageSheetProviderController *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) MMPageSheetConfig *pageSheetConfig; // @synthesize pageSheetConfig=_pageSheetConfig;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
- (void)popPageSheet;
- (void)pushPageSheet:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)updateDetailViewHeight:(double)arg1 animated:(_Bool)arg2;
- (void)adjustContainerYOffset:(double)arg1 animated:(_Bool)arg2;
- (id)pageSheetProviderController;
- (void)didPushSelfInPage:(id)arg1;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
