//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IVoiceInputExt-Protocol.h"

@class NSString, UIButton, VoiceRecogView;
@protocol NSObject, VoiceInputViewDelegate;

@interface VoiceInputView : UIView <IVoiceInputExt>
{
    unsigned int mVoiceId;
    id <NSObject> keyboard_targetor;
    SEL keyboard_selector;
    id <NSObject> send_targetor;
    SEL send_selector;
    int voiceInputStatus;
    id <VoiceInputViewDelegate> delegate;
    VoiceRecogView *mRecogView;
    UIButton *mKeyboardBtn;
    UIButton *mSendBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *mSendBtn; // @synthesize mSendBtn;
@property(retain, nonatomic) UIButton *mKeyboardBtn; // @synthesize mKeyboardBtn;
@property(retain, nonatomic) VoiceRecogView *mRecogView; // @synthesize mRecogView;
@property(nonatomic) id <VoiceInputViewDelegate> delegate; // @synthesize delegate;
- (void)stopVoiceInput;
- (void)resetView;
- (void)addSendTarget:(id)arg1 action:(SEL)arg2;
- (void)addKeyboardTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)OnSendBtnClicked:(id)arg1;
- (void)OnClearBtnClicked:(id)arg1;
- (void)stopRecord;
- (void)startRecord;
- (void)changeBkgView;
- (void)updateButtonStatus;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnGetText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)OnEndRecord;
- (void)OnStartRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

