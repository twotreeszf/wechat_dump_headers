//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "ILinkEventExt-Protocol.h"
#import "WCFinderHeadImageViewDelegate-Protocol.h"
#import "WCFinderLiveNoticeViewDelegate-Protocol.h"
#import "WCFinderProfileRedPacketEventViewDelegate-Protocol.h"

@class FinderWxAppInfo, MMBadgeView, MMUIImageView, MMUILabel, MMWebImageView, NSString, RichTextView, UIButton, UIImageView, UILabel, UIView, WCFinderContact, WCFinderHeadImageView, WCFinderLiveNoticeView, WCFinderProfileRedPacketEventView, WCFinderStreamProfileExtInfo;
@protocol WCFinderStreamHeaderActionProtocol;

@interface WCFinderStreamSelfReusableView : UICollectionReusableView <WCFinderHeadImageViewDelegate, ILinkEventExt, WCFinderLiveNoticeViewDelegate, WCFinderProfileRedPacketEventViewDelegate>
{
    _Bool _isShowInProfileCheckboxOn;
    id <WCFinderStreamHeaderActionProtocol> _delegate;
    MMWebImageView *_brandImageView;
    UIView *_avatarContainerView;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_userNameLabel;
    RichTextView *_signatureLabel;
    UIButton *_moreActionBtn;
    MMBadgeView *_moreActionBadgeView;
    UIView *_authInfoView;
    MMWebImageView *_authInfoIconView;
    RichTextView *_authInfoLabel;
    UILabel *_genderLabel;
    UILabel *_addressLabel;
    MMUILabel *_signatureGuideLabel;
    MMUIImageView *_signatureGuideArrowIconView;
    UIView *_fansView;
    MMUIImageView *_fansIconView;
    MMUILabel *_fansNumLabel;
    MMUIImageView *_fansArrowIconView;
    UIView *_poiInfoDetailView;
    UIButton *_poiInfoDetailMoreBtn;
    MMUILabel *_poiInfoDetailLabel;
    UIImageView *_poiInfoIconImageView;
    UIView *_storeView;
    UIImageView *_storeIconView;
    UILabel *_storeLabel;
    UIImageView *_storeArrowImageView;
    UIImageView *_mpBrandIconView;
    UILabel *_mpBrandLabel;
    WCFinderLiveNoticeView *_liveNoticeView;
    RichTextView *_showInProfileTextView;
    UIButton *_showInProfileCheckbox;
    WCFinderContact *_contact;
    WCFinderStreamProfileExtInfo *_profileExtInfo;
    FinderWxAppInfo *_bindInfo;
    WCFinderProfileRedPacketEventView *_redPacketEventView;
}

+ (_Bool)enableEditPersonalInfo;
+ (double)headerHeightWith:(id)arg1 width:(double)arg2 extInfo:(id)arg3 userMessage:(id)arg4 showInWXProfileCheckboxState:(long long)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileRedPacketEventView *redPacketEventView; // @synthesize redPacketEventView=_redPacketEventView;
@property(retain, nonatomic) FinderWxAppInfo *bindInfo; // @synthesize bindInfo=_bindInfo;
@property(retain, nonatomic) WCFinderStreamProfileExtInfo *profileExtInfo; // @synthesize profileExtInfo=_profileExtInfo;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool isShowInProfileCheckboxOn; // @synthesize isShowInProfileCheckboxOn=_isShowInProfileCheckboxOn;
@property(retain, nonatomic) UIButton *showInProfileCheckbox; // @synthesize showInProfileCheckbox=_showInProfileCheckbox;
@property(retain, nonatomic) RichTextView *showInProfileTextView; // @synthesize showInProfileTextView=_showInProfileTextView;
@property(retain, nonatomic) WCFinderLiveNoticeView *liveNoticeView; // @synthesize liveNoticeView=_liveNoticeView;
@property(retain, nonatomic) UILabel *mpBrandLabel; // @synthesize mpBrandLabel=_mpBrandLabel;
@property(retain, nonatomic) UIImageView *mpBrandIconView; // @synthesize mpBrandIconView=_mpBrandIconView;
@property(retain, nonatomic) UIImageView *storeArrowImageView; // @synthesize storeArrowImageView=_storeArrowImageView;
@property(retain, nonatomic) UILabel *storeLabel; // @synthesize storeLabel=_storeLabel;
@property(retain, nonatomic) UIImageView *storeIconView; // @synthesize storeIconView=_storeIconView;
@property(retain, nonatomic) UIView *storeView; // @synthesize storeView=_storeView;
@property(retain, nonatomic) UIImageView *poiInfoIconImageView; // @synthesize poiInfoIconImageView=_poiInfoIconImageView;
@property(retain, nonatomic) MMUILabel *poiInfoDetailLabel; // @synthesize poiInfoDetailLabel=_poiInfoDetailLabel;
@property(retain, nonatomic) UIButton *poiInfoDetailMoreBtn; // @synthesize poiInfoDetailMoreBtn=_poiInfoDetailMoreBtn;
@property(retain, nonatomic) UIView *poiInfoDetailView; // @synthesize poiInfoDetailView=_poiInfoDetailView;
@property(retain, nonatomic) MMUIImageView *fansArrowIconView; // @synthesize fansArrowIconView=_fansArrowIconView;
@property(retain, nonatomic) MMUILabel *fansNumLabel; // @synthesize fansNumLabel=_fansNumLabel;
@property(retain, nonatomic) MMUIImageView *fansIconView; // @synthesize fansIconView=_fansIconView;
@property(retain, nonatomic) UIView *fansView; // @synthesize fansView=_fansView;
@property(retain, nonatomic) MMUIImageView *signatureGuideArrowIconView; // @synthesize signatureGuideArrowIconView=_signatureGuideArrowIconView;
@property(retain, nonatomic) MMUILabel *signatureGuideLabel; // @synthesize signatureGuideLabel=_signatureGuideLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *genderLabel; // @synthesize genderLabel=_genderLabel;
@property(retain, nonatomic) RichTextView *authInfoLabel; // @synthesize authInfoLabel=_authInfoLabel;
@property(retain, nonatomic) MMWebImageView *authInfoIconView; // @synthesize authInfoIconView=_authInfoIconView;
@property(retain, nonatomic) UIView *authInfoView; // @synthesize authInfoView=_authInfoView;
@property(retain, nonatomic) MMBadgeView *moreActionBadgeView; // @synthesize moreActionBadgeView=_moreActionBadgeView;
@property(retain, nonatomic) UIButton *moreActionBtn; // @synthesize moreActionBtn=_moreActionBtn;
@property(retain, nonatomic) RichTextView *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) MMWebImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(nonatomic) __weak id <WCFinderStreamHeaderActionProtocol> delegate; // @synthesize delegate=_delegate;
- (void)onTapRedPacketEvent;
- (void)onRedPacketEventViewClickClose:(id)arg1;
- (void)clickMPBrandView;
- (void)onLiveNoticeViewActionButtonClicked;
- (void)onGuideToSignature;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copyText:(id)arg1;
- (void)onJumpToWXProfile;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)bindWXBindInfo:(id)arg1;
- (id)createTagLabel;
- (id)createTagBackGroundView;
- (void)updateSignatureGuideViews:(_Bool)arg1;
- (void)tapAuthInfoView:(id)arg1;
- (void)setupShowMoreActionRedPoint:(_Bool)arg1;
- (void)updateFansViewWithUserMessage:(id)arg1;
- (void)updateShowInWXProfileCheckboxState:(long long)arg1;
- (void)updateUIWithContact:(id)arg1 extInfo:(id)arg2 userMessage:(id)arg3 showInWXProfileCheckboxState:(long long)arg4;
- (void)clickStoreView;
- (void)didClickMoreBtn:(id)arg1;
- (void)didClickNotifyBtn:(id)arg1;
- (void)onClickFanView:(id)arg1;
- (void)onClickFollowingView:(id)arg1;
- (void)onClickBrandImageView:(id)arg1;
- (void)clickAvatar;
- (id)signatureGuideTapGesture;
- (id)repleaceLinkHrefForContent:(id)arg1 toHref:(id)arg2;
- (id)jumpWXProfileHref;
- (void)updateShowInProfileCheckboxStatus:(_Bool)arg1;
- (void)updateRedPacketEventView;
- (void)onClickShowInProfileCheckbox;
- (void)onClickPOIDetailMoreBtn:(id)arg1;
- (void)onClickPOIDetailView:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

