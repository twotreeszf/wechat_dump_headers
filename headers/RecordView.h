//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MMVoiceTransViewDelegate-Protocol.h"

@class AudioRecorderUserData, MMNewVoiceInputReportObj, MMUIActivityIndicatorView, MMVoiceOperateButton, MMVoiceTransView, NSString, UIButton, UIImageView, UILabel;
@protocol RecordViewDelegate;

@interface RecordView : UIView <MMVoiceTransViewDelegate>
{
    _Bool _bForbidVoiceTrans;
    _Bool _bPreventRecordViewExit;
    _Bool _bPreparing;
    _Bool _bTimeOutCounting;
    _Bool _isTouchEnd;
    _Bool _isShowingAnimating;
    _Bool _isHiddingAnimating;
    id <RecordViewDelegate> _delegate;
    NSString *_chatUserName;
    UIView *_recordLeftView;
    UIImageView *_recordImageView;
    UIImageView *_recordSignalView;
    UIButton *_recordGarbageView;
    UIImageView *_recordWarningView;
    UIImageView *_recordBkgView;
    UILabel *_warningMessageLabel;
    UILabel *_timeoutCountingLabel;
    MMUIActivityIndicatorView *_indicatorView;
    MMNewVoiceInputReportObj *_reportObj;
    AudioRecorderUserData *_userData;
    MMVoiceTransView *_translateView;
    MMVoiceOperateButton *_cancelBtn;
    MMVoiceOperateButton *_translateBtn;
    UILabel *_operateTipsLabel;
    UIImageView *_cancelTipImageView;
    UIImageView *_transTipImageView;
    UIImageView *_bgBlurView;
    UIView *_recordTipBlurView;
    struct CGPoint _originCancelCenterPoint;
    struct CGPoint _originTransCenterPoint;
    struct CGPoint _lastMoveInPoint;
    struct CGRect _cancelButtonEffectiveRect;
    struct CGRect _translateButtonEffectiveRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint lastMoveInPoint; // @synthesize lastMoveInPoint=_lastMoveInPoint;
@property(nonatomic) struct CGPoint originTransCenterPoint; // @synthesize originTransCenterPoint=_originTransCenterPoint;
@property(nonatomic) struct CGPoint originCancelCenterPoint; // @synthesize originCancelCenterPoint=_originCancelCenterPoint;
@property(nonatomic) struct CGRect translateButtonEffectiveRect; // @synthesize translateButtonEffectiveRect=_translateButtonEffectiveRect;
@property(nonatomic) struct CGRect cancelButtonEffectiveRect; // @synthesize cancelButtonEffectiveRect=_cancelButtonEffectiveRect;
@property(nonatomic) _Bool isHiddingAnimating; // @synthesize isHiddingAnimating=_isHiddingAnimating;
@property(nonatomic) _Bool isShowingAnimating; // @synthesize isShowingAnimating=_isShowingAnimating;
@property(retain, nonatomic) UIView *recordTipBlurView; // @synthesize recordTipBlurView=_recordTipBlurView;
@property(retain, nonatomic) UIImageView *bgBlurView; // @synthesize bgBlurView=_bgBlurView;
@property(retain, nonatomic) UIImageView *transTipImageView; // @synthesize transTipImageView=_transTipImageView;
@property(retain, nonatomic) UIImageView *cancelTipImageView; // @synthesize cancelTipImageView=_cancelTipImageView;
@property(retain, nonatomic) UILabel *operateTipsLabel; // @synthesize operateTipsLabel=_operateTipsLabel;
@property(retain, nonatomic) MMVoiceOperateButton *translateBtn; // @synthesize translateBtn=_translateBtn;
@property(retain, nonatomic) MMVoiceOperateButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) MMVoiceTransView *translateView; // @synthesize translateView=_translateView;
@property(retain, nonatomic) AudioRecorderUserData *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) MMNewVoiceInputReportObj *reportObj; // @synthesize reportObj=_reportObj;
@property(retain, nonatomic) MMUIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *timeoutCountingLabel; // @synthesize timeoutCountingLabel=_timeoutCountingLabel;
@property(retain, nonatomic) UILabel *warningMessageLabel; // @synthesize warningMessageLabel=_warningMessageLabel;
@property(retain, nonatomic) UIImageView *recordBkgView; // @synthesize recordBkgView=_recordBkgView;
@property(retain, nonatomic) UIImageView *recordWarningView; // @synthesize recordWarningView=_recordWarningView;
@property(retain, nonatomic) UIButton *recordGarbageView; // @synthesize recordGarbageView=_recordGarbageView;
@property(retain, nonatomic) UIImageView *recordSignalView; // @synthesize recordSignalView=_recordSignalView;
@property(retain, nonatomic) UIImageView *recordImageView; // @synthesize recordImageView=_recordImageView;
@property(retain, nonatomic) UIView *recordLeftView; // @synthesize recordLeftView=_recordLeftView;
@property(nonatomic) _Bool isTouchEnd; // @synthesize isTouchEnd=_isTouchEnd;
@property(nonatomic) _Bool bTimeOutCounting; // @synthesize bTimeOutCounting=_bTimeOutCounting;
@property(nonatomic) _Bool bPreparing; // @synthesize bPreparing=_bPreparing;
@property(nonatomic) _Bool bPreventRecordViewExit; // @synthesize bPreventRecordViewExit=_bPreventRecordViewExit;
@property(nonatomic) _Bool bForbidVoiceTrans; // @synthesize bForbidVoiceTrans=_bForbidVoiceTrans;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) __weak id <RecordViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendOriVoiceMsgWithUserData:(id)arg1;
- (void)cancelTransWithDuration:(double)arg1;
- (void)cancelTrans;
- (void)changeBgColorAlpha:(double)arg1;
- (void)sendMsgWithText:(id)arg1;
- (void)hiddenOperateButtonWithAnimate;
- (void)showRecordTipsOnly;
- (void)changeRecordTipAlhpa:(double)arg1;
- (void)showOperateButtonWithAnimate;
- (_Bool)isShowingTransView;
- (_Bool)isTransBtnHighlighted;
- (_Bool)isCancelBtnHighlighted;
- (_Bool)isShowingOperateBtn;
- (void)startVoiceTrans;
- (void)onTouchEndWithPoint:(struct CGPoint)arg1;
- (void)onTouchMoveInWithPoint:(struct CGPoint)arg1;
- (void)onTouchMoveOutWithPoint:(struct CGPoint)arg1;
- (void)animateShowTranslateViewWithUserData:(id)arg1;
- (void)endVoiceTrans;
- (void)startTransVoice;
- (void)SetPeakPower:(float)arg1;
- (_Bool)isRecordBkgShow;
- (void)ShowRecordingTimeoutCount:(long long)arg1 isShow:(_Bool)arg2;
- (void)HideRecordAnimated:(_Bool)arg1;
- (void)StartTooLongTipsAnimated:(_Bool)arg1;
- (void)StartTooShortTipsAnimated:(_Bool)arg1;
- (void)StartRecordCancelAnimated:(_Bool)arg1;
- (void)StartRecordAnimated:(_Bool)arg1;
- (void)ShowPreparing:(_Bool)arg1;
- (void)resetRecoding;
- (void)reset;
- (_Bool)canShowTransEntry;
- (id)createTranslateView;
- (void)initOperateOriginPoint;
- (void)updateEffectiveRect;
- (id)initWithFrame:(struct CGRect)arg1 ForbidVoiceTrans:(_Bool)arg2 ChatName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

