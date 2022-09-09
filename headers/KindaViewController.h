//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMIUIPagePlatformDelegate-Protocol.h"
#import "MMIUIPagePlatformFuncDelegate-Protocol.h"

@class KindaLayout, KindaProxy, MMIUIPage, MMVoidBoolI32Callback, MMVoidCallback, NSString, UIView;
@protocol KindaViewControllerControlDelegate;

@interface KindaViewController : MMUIViewController <MMIUIPagePlatformFuncDelegate, MMIUIPagePlatformDelegate>
{
    MMIUIPage *_m_page;
    KindaLayout *_m_layout;
    MMVoidCallback *_m_leftCallback;
    MMVoidCallback *_m_rightCallback;
    MMVoidBoolI32Callback *_m_keyboardShowCallback;
    id <KindaViewControllerControlDelegate> _m_controlDelegate;
    KindaProxy *_kindProxy;
    UIView *_yogaSuperView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *yogaSuperView; // @synthesize yogaSuperView=_yogaSuperView;
@property(retain, nonatomic) KindaProxy *kindProxy; // @synthesize kindProxy=_kindProxy;
@property(nonatomic) __weak id <KindaViewControllerControlDelegate> m_controlDelegate; // @synthesize m_controlDelegate=_m_controlDelegate;
@property(retain, nonatomic) MMVoidBoolI32Callback *m_keyboardShowCallback; // @synthesize m_keyboardShowCallback=_m_keyboardShowCallback;
@property(retain, nonatomic) MMVoidCallback *m_rightCallback; // @synthesize m_rightCallback=_m_rightCallback;
@property(retain, nonatomic) MMVoidCallback *m_leftCallback; // @synthesize m_leftCallback=_m_leftCallback;
@property(retain, nonatomic) KindaLayout *m_layout; // @synthesize m_layout=_m_layout;
@property(retain, nonatomic) MMIUIPage *m_page; // @synthesize m_page=_m_page;
- (void)setWindowAdjustUnspecified:(_Bool)arg1;
- (void)stopLoading;
- (void)startLoading:(id)arg1 block:(_Bool)arg2;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShown:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)endIgnoringInteractionEvents;
- (void)beginIgnoringInteractionEvents;
- (void)endEditing;
- (id)previousViewController;
- (void)closeUI:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)refreshNavigationBar;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopRightCallbackImpl:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (id)getTitle;
- (void)setTitle:(id)arg1;
- (long long)currentPlatform;
- (void)onClickRightItem;
- (void)onClickLeftItem;
- (void)setupNavigationBar;
- (void)viewDidBeInteractivePoped;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewDidTransitionToNewSize;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPage:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

