//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PreEnterBaseStep.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCPrivacyPolicyControlLogicDelegate-Protocol.h"

@class NSString, WCPrivacyPolicyControlLogic;

@interface PreEnterShowPrivacyPolicyStep : PreEnterBaseStep <WCPrivacyPolicyControlLogicDelegate, PBMessageObserverDelegate>
{
    NSString *m_content;
    WCPrivacyPolicyControlLogic *m_privacyPolicyLogic;
    _Bool m_bSendChoice;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendPrivacyPolicyChoice:(_Bool)arg1;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)startStep;
- (void)dealloc;
- (id)initWithXml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

