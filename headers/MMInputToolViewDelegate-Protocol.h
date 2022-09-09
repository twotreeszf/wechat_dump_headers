//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AudioRecorderUserData, BaseChatCellView, CEmoticonWrap, CMessageWrap, ChatRoomPanelDynamicWeAppItem, ChatRoomToolMessageEventInfo, EditImageAttr, EditVideoAttr, MMGrowTextView, MMShortVideoParamModel, MMUIViewController, MsgSendOpEntry, NSArray, NSData, NSString, NSURL, ServiceAppData, SolitaireObj, UIImage, UITableView;

@protocol MMInputToolViewDelegate <NSObject>

@optional
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(MMGrowTextView *)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(NSArray *)arg1;
- (void)onClickTopicSearchEntry;
- (void)onShowLiveEntrance;
- (void)onStartLive;
- (void)onRevokeGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onCompleteGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onCloseGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (void)onClickGroupUndoneItem:(ChatRoomToolMessageEventInfo *)arg1;
- (BaseChatCellView *)getChatCellWithMsg:(CMessageWrap *)arg1;
- (void)onInputToolViewClearReferMsg;
- (_Bool)shouldForbidVoiceTrans;
- (void)onWeAppSessionMsgBtnClick:(NSData *)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (_Bool)isHiddenAttachmentButton;
- (_Bool)isHiddenInputChangeButton;
- (void)onToolViewDidMoveToWindow;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (_Bool)shouldHideCameraEmoticon;
- (_Bool)shouldInitWXEmoticonView;
- (void)keyboardWillHide;
- (UITableView *)getMsgTableView;
- (MMUIViewController *)GetCurrentViewController;
- (void)initAllowChatRoomLive;
- (void)initAllowChatRoomTool;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowWxTalkFollowSight;
- (void)initAllowShareCard;
- (void)initAllowRecommendApp;
- (void)initAllowMultiTalk;
- (void)initAllowWxTalk;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (_Bool)isViewControllerAnimated;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)onTextDeleteAll;
- (void)sendCaptruedImage:(NSURL *)arg1;
- (_Bool)canSendCaptureImage;
- (void)pasteImage:(UIImage *)arg1;
- (_Bool)canPasteImage;
- (NSString *)getCurrentChatName;
- (void)redEnvelopesLogic;
- (void)transferMoneyLogic;
- (_Bool)hasGroupPayEntry;
- (_Bool)hasCardPkgEntry;
- (_Bool)hasRedEnvelopesEntry;
- (_Bool)hasTransferMoneyEntry;
- (_Bool)hasServiceEntry;
- (NSArray *)getServiceAppList;
- (NSArray *)getAttachmentViewServiceAppList;
- (void)openServiceApp:(ServiceAppData *)arg1;
- (void)onChatRoomToolButtonClick;
- (void)onStreamVoiceInputButtonClick;
- (NSString *)chatUserNameForSightStatistics;
- (void)onShowInputToolWeAppAr:(NSArray *)arg1;
- (void)onInputToolWeAppButtonClickedWithItem:(ChatRoomPanelDynamicWeAppItem *)arg1;
- (void)onGroupPayButtonClick;
- (void)onOpenMyCardPkgViewController;
- (void)openMyFavoritesListController;
- (void)openEnterpriseBrandEntry;
- (_Bool)canShowEnterpriseBrandEntry;
- (_Bool)canShowLocation;
- (_Bool)canShowFavEntry;
- (_Bool)canShowFileBrowser;
- (_Bool)canShowSight;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (_Bool)shouldShowOpenTrackRoom;
- (void)onSelectLocation;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onMultiTalkButtonClick;
- (void)onShareCard;
- (void)SendNotGameEmoticonMessage:(CMessageWrap *)arg1 errorMsg:(NSString *)arg2;
- (void)SendEmoticonMesssageToolView:(CEmoticonWrap *)arg1;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onSightPictureTaken:(UIImage *)arg1 imageData:(NSData *)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(EditImageAttr *)arg4;
- (void)onShortVideoTaken:(NSString *)arg1 thumbImg:(UIImage *)arg2 editVideoAttr:(EditVideoAttr *)arg3 paramModel:(MMShortVideoParamModel *)arg4;
- (void)openCameraController;
- (void)openFileBrowser;
- (void)openMediaBrowser;
- (_Bool)StopRecordingInTransState:(_Bool)arg1;
- (AudioRecorderUserData *)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (void)OnClickAttachmentButtonAction;
- (void)OnClickAttachmentButton:(_Bool)arg1;
- (_Bool)IsShowAttachmentButtonRedDot;
- (_Bool)IsRecording;
- (void)CancelRecording;
- (void)StopRecording;
- (_Bool)StartRecording;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(_Bool)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(_Bool *)arg1;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)SendEmojiArtMessageToolView:(NSString *)arg1;
- (void)SendTextMsgWithSolitaire:(SolitaireObj *)arg1;
- (void)SendTextMessageToolView:(NSString *)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (NSArray *)getInputToolWeAppOpEntryAr;
- (MsgSendOpEntry *)getMsgSendOpEntry;
@end

