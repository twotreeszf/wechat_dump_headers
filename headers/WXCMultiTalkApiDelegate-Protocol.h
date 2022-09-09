//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSMutableArray, NSString, WXCMultiTalkGroup, WXCPbWxBannerVoiceInfo;

@protocol WXCMultiTalkApiDelegate
- (void)onMultiTalkNotAllowCameraLimit:(unsigned int)arg1;
- (void)onMultiTalkCreateLimit:(unsigned int)arg1;
- (void)onMultiTalkJoinLimit:(unsigned int)arg1;
- (void)onMultiTalkBannerChange:(WXCPbWxBannerVoiceInfo *)arg1 WxGroupId:(NSString *)arg2;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onReceiveSubscribeMemberChangeMsg:(int)arg1;
- (void)onReceiveVideoMemberChangeMsg:(WXCMultiTalkGroup *)arg1 extArray:(NSMutableArray *)arg2;
- (void)onReawakeFriendOrSendPokerToFriendResult:(_Bool)arg1;
- (void)onRespActiveGroupBriefInfoList:(NSArray *)arg1 isSuccess:(_Bool)arg2;
- (void)onReceiveMutilTalkPokerMsg;
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 errorType:(int)arg2 groupInfo:(WXCMultiTalkGroup *)arg3;
- (void)onErr:(int)arg1 groupUserName:(NSString *)arg2;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onVideoData:(unsigned int)arg1 Bgra:(char *)arg2 Width:(unsigned int)arg3 Height:(unsigned int)arg4 frontCamera:(_Bool)arg5 screenData:(_Bool)arg6;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(WXCMultiTalkGroup *)arg1;
- (void)onReceiveMissMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onEnterMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCancelCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onInviteMultiTalk:(WXCMultiTalkGroup *)arg1;
@end

