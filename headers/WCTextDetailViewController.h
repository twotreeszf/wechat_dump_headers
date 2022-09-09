//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "ITranslateSnsMgrExt-Protocol.h"
#import "RichTextLayoutDelegate-Protocol.h"

@class NSString, RichTextView, UIButton, UIScrollView, UIView, WCDataItem, WCUserComment;

@interface WCTextDetailViewController : MMUIViewController <RichTextLayoutDelegate, ILinkEventExt, ITranslateSnsMgrExt>
{
    UIScrollView *_bgScrollView;
    WCDataItem *_dataItem;
    NSString *_copyedText;
    RichTextView *_contentDescView;
    NSString *_contentDesc;
    RichTextView *m_translateView;
    UIButton *m_translateStatusView;
    UIView *m_translateLineView;
    int eTranslateStatus;
    WCUserComment *m_userComment;
    NSString *m_dataItemId;
    _Bool m_isAdComment;
    unsigned int m_scene;
}

+ (id)makeDataWrapForWCTranslate:(id)arg1;
- (void).cxx_destruct;
- (_Bool)canShowFavBtn;
- (_Bool)canShowTranslateBtn;
- (id)getContentDesc;
- (id)getSnsTranslateDataWrap;
- (_Bool)isCommentTranslateDataWrap:(id)arg1;
- (_Bool)isTimelineTranslateDataWrap:(id)arg1;
- (_Bool)isCorrectTranslateDataWrap:(id)arg1;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (double)initTranslateStatusButton:(_Bool)arg1 withTitle:(id)arg2;
- (double)initContentTranslateView:(id)arg1 andSuperScrollView:(id)arg2;
- (void)onTranslate:(id)arg1;
- (id)GetTranslateSnsKeyID;
- (void)onSearchTopicClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 isWord:(_Bool)arg3 withView:(id)arg4;
- (void)onExpose:(id)arg1;
- (void)onFavAddForTranslated:(id)arg1;
- (void)onFavAdd:(id)arg1;
- (void)onCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCommentUserInfo:(id)arg1 andDataItemTid:(id)arg2 isAdComment:(_Bool)arg3;
- (id)initWithDataItem:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

