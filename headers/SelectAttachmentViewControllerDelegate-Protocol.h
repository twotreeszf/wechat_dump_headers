//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ChatRoomPanelDynamicWeAppItem, MsgSendOpEntry, NSArray, NSMutableArray, RecommandAppItem, ServiceAppData, UIButton;

@protocol SelectAttachmentViewControllerDelegate <NSObject>
- (_Bool)canShowSolitaire;
- (_Bool)canShowFileBrowser;
- (_Bool)canShowGroupPayEntry;
- (_Bool)canShowCardPkgEntry;
- (_Bool)canShowSight;
- (_Bool)canShowServiceEntry;
- (_Bool)canShowRedEnvelopesEntey;
- (_Bool)canShowTransferMoneyEntry;
- (NSArray *)getAttachmentViewServiceAppList;
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (NSArray *)getInputToolWeAppOpEntryAr;
- (MsgSendOpEntry *)getMsgSendOpEntry;

@optional
- (void)onShowAttachViewWithPageIndex:(unsigned long long)arg1 items:(NSMutableArray *)arg2;
- (void)onShowLiveEntrance;
- (void)onLiveButtonClicked:(UIButton *)arg1;
- (void)onChatRoomToolButtonClick:(UIButton *)arg1;
- (void)onShowInputToolWeAppAr:(NSArray *)arg1;
- (void)onInputToolWeAppButtonClicked:(ChatRoomPanelDynamicWeAppItem *)arg1;
- (void)onGroupPayButtonClicked:(UIButton *)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(UIButton *)arg1;
- (void)onMultiTalkButtonClicked:(UIButton *)arg1;
- (void)onRedEnvelopesClicked:(UIButton *)arg1;
- (void)onVoiceInputButtonClicked:(UIButton *)arg1;
- (void)onTransferButtonClicked:(UIButton *)arg1;
- (void)onMyFavoritesButtonClicked:(UIButton *)arg1;
- (void)on3rdServiceButtonClicked:(ServiceAppData *)arg1;
- (void)on3rdRecommandButtonClicked:(RecommandAppItem *)arg1;
- (void)onVoiceInputClicked:(UIButton *)arg1;
- (void)onVoiceVoipButtonClicked:(UIButton *)arg1;
- (void)onVideoVoipButtonClicked:(UIButton *)arg1;
- (void)onShareCardButtonClicked:(UIButton *)arg1;
- (void)onLocationButtonClicked:(UIButton *)arg1;
- (void)onCameraControllerClicked:(UIButton *)arg1;
- (void)onFileBrowserClicked:(UIButton *)arg1;
- (void)onSolitaireButtonClicked:(UIButton *)arg1;
- (void)onMediaBrowserClicked:(UIButton *)arg1;
@end

