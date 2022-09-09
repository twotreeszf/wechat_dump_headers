//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTReaderItemCellView.h"

#import "ILinkEventExt-Protocol.h"

@class BTTextItemCellViewModel, MMUILabel, NSString, UrlController, WAAppIdToUsernameTransfer;

@interface BTTextItemCellView : BTReaderItemCellView <ILinkEventExt>
{
    UrlController *m_urlController;
    MMUILabel *m_foldLabel;
    WAAppIdToUsernameTransfer *m_appIdTransfer;
    MMUILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
- (void)onFullTextBtnClick;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)updateFriendRelatedInfo;
- (void)refreshFoldLabelText;
- (void)layoutSubviewsTopItem;
- (void)initFoldLabel;
- (id)getTitleViewColor:(_Bool)arg1;
- (void)initTitleView;
- (void)onUpdateViewModel;
- (void)initTopReaderItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BTTextItemCellViewModel *viewModel; // @dynamic viewModel;

@end

