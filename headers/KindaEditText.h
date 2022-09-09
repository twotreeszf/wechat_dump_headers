//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KindaView.h"

#import "MMKEditText-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WCPayDecimalKeyboardViewDelegate-Protocol.h"

@class MMDynamicColor, MMKEditTextOnTextBeginChangeCallback, MMKEditTextOnTextChangedCallback, MMKEditTextOnTextEndEditingCallback, NSString, UITextField, WCPayDecimalKeyboardView;

@interface KindaEditText : KindaView <UITextFieldDelegate, WCPayDecimalKeyboardViewDelegate, MMKEditText>
{
    _Bool _m_bRealLen;
    int _m_maxLength;
    UITextField *_m_textField;
    double _m_textSize;
    MMDynamicColor *_m_textColor;
    long long _m_textAlign;
    MMDynamicColor *_m_hintColor;
    long long _m_keyboardType;
    MMDynamicColor *_m_tintColor;
    NSString *_m_fontName;
    MMKEditTextOnTextBeginChangeCallback *_m_textBeginChangeCallback;
    MMKEditTextOnTextChangedCallback *_m_textChangedCallback;
    MMKEditTextOnTextEndEditingCallback *_m_textEndEditingCallBack;
    WCPayDecimalKeyboardView *_keyboardView;
    long long __restrictType;
}

- (void).cxx_destruct;
@property(nonatomic) long long _restrictType; // @synthesize _restrictType=__restrictType;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property(nonatomic) _Bool m_bRealLen; // @synthesize m_bRealLen=_m_bRealLen;
@property(nonatomic) int m_maxLength; // @synthesize m_maxLength=_m_maxLength;
@property(retain, nonatomic) MMKEditTextOnTextEndEditingCallback *m_textEndEditingCallBack; // @synthesize m_textEndEditingCallBack=_m_textEndEditingCallBack;
@property(retain, nonatomic) MMKEditTextOnTextChangedCallback *m_textChangedCallback; // @synthesize m_textChangedCallback=_m_textChangedCallback;
@property(retain, nonatomic) MMKEditTextOnTextBeginChangeCallback *m_textBeginChangeCallback; // @synthesize m_textBeginChangeCallback=_m_textBeginChangeCallback;
@property(copy, nonatomic) NSString *m_fontName; // @synthesize m_fontName=_m_fontName;
@property(retain, nonatomic) MMDynamicColor *m_tintColor; // @synthesize m_tintColor=_m_tintColor;
@property(nonatomic) long long m_keyboardType; // @synthesize m_keyboardType=_m_keyboardType;
@property(retain, nonatomic) MMDynamicColor *m_hintColor; // @synthesize m_hintColor=_m_hintColor;
@property(nonatomic) long long m_textAlign; // @synthesize m_textAlign=_m_textAlign;
@property(retain, nonatomic) MMDynamicColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(nonatomic) double m_textSize; // @synthesize m_textSize=_m_textSize;
@property(retain, nonatomic) UITextField *m_textField; // @synthesize m_textField=_m_textField;
- (void)updateWCPayDecimalKeyBoard;
- (void)transfromNumber;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (long long)getRestrictType;
- (void)setRestrictType:(long long)arg1;
- (_Bool)getEnabled;
- (void)setEnabled:(_Bool)arg1;
- (long long)getClearButtonMode;
- (void)setClearButtonMode:(long long)arg1;
- (id)encryptWith3Des;
- (void)setOnTextEndEditingCallback:(id)arg1;
- (void)setOnTextChangedCallback:(id)arg1;
- (void)setOnTextBeginChangeCallback:(id)arg1;
- (id)getTintColor;
- (void)setTintColor:(id)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (int)getSelection;
- (void)setSelection:(int)arg1;
- (long long)getKeyboardType;
- (void)setKeyboardType:(long long)arg1;
- (int)getMaxLength;
- (void)setMaxLength:(int)arg1;
- (id)getHintColor;
- (void)setHintColor:(id)arg1;
- (id)getHint;
- (void)setHint:(id)arg1;
- (long long)getTextAlign;
- (void)setTextAlign:(long long)arg1;
- (id)getTextFont;
- (void)setTextFont:(id)arg1;
- (id)getTextColor;
- (void)setTextColor:(id)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (id)getText;
- (void)setText:(id)arg1;
- (void)textFieldEndEditing;
- (void)textFieldDidChange;
- (id)getView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

