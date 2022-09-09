//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface LoginUserInfo : NSObject <PBCoding>
{
    _Bool m_bIsOpenVoicePrint;
    _Bool m_bIsOpenFace;
    unsigned int m_uiBindAcountFlag;
    unsigned int m_uiLastLoginAcountType;
    NSString *m_nsUserName;
    NSString *m_nsLoginName;
    NSString *m_nsNickName;
    unsigned long long m_ui64Uin;
    NSString *m_nsPhoneNumber;
    NSString *m_nsNoPwdLoginTicket;
    NSData *m_dtAutoAuthKey;
    NSString *m_bindLoginUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_bIsOpenFace;
+ (void)PBArrayAdd_m_bindLoginUserName;
+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_bIsOpenVoicePrint;
+ (void)PBArrayAdd_m_nsNoPwdLoginTicket;
+ (void)PBArrayAdd_m_nsPhoneNumber;
+ (void)PBArrayAdd_m_uiLastLoginAcountType;
+ (void)PBArrayAdd_m_uiBindAcountFlag;
+ (void)PBArrayAdd_m_ui64Uin;
+ (void)PBArrayAdd_m_nsNickName;
+ (void)PBArrayAdd_m_nsLoginName;
+ (void)PBArrayAdd_m_nsUserName;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsOpenFace; // @synthesize m_bIsOpenFace;
@property(retain, nonatomic) NSString *m_bindLoginUserName; // @synthesize m_bindLoginUserName;
@property(retain, nonatomic) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(nonatomic) _Bool m_bIsOpenVoicePrint; // @synthesize m_bIsOpenVoicePrint;
@property(retain, nonatomic) NSString *m_nsNoPwdLoginTicket; // @synthesize m_nsNoPwdLoginTicket;
@property(retain, nonatomic) NSString *m_nsPhoneNumber; // @synthesize m_nsPhoneNumber;
@property(nonatomic) unsigned int m_uiLastLoginAcountType; // @synthesize m_uiLastLoginAcountType;
@property(nonatomic) unsigned int m_uiBindAcountFlag; // @synthesize m_uiBindAcountFlag;
@property(nonatomic) unsigned long long m_ui64Uin; // @synthesize m_ui64Uin;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsLoginName; // @synthesize m_nsLoginName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
- (id)getLastLoginName;
@property(nonatomic) _Bool hasBindAccount; // @dynamic hasBindAccount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

