//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WCAddressBaseAddress : NSObject <NSCoding>
{
    NSString *m_nsNationalCode;
    unsigned int m_uiAddressID;
    NSString *m_nsUserName;
    NSString *m_nsTelNumber;
    NSString *m_nsAddressStageID;
    NSString *m_nsAddressPostCode;
    NSString *m_nsAddressProviceFirstStageName;
    NSString *m_nsAddressCitySecondStageName;
    NSString *m_nsAddressCountiesThirdStageName;
    NSString *m_nsAddressDetailInfo;
    NSString *m_nsEncryptData;
    NSString *m_nsEncryptType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsEncryptType; // @synthesize m_nsEncryptType;
@property(retain, nonatomic) NSString *m_nsEncryptData; // @synthesize m_nsEncryptData;
@property(readonly, nonatomic) unsigned int m_uiAddressID; // @synthesize m_uiAddressID;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsTelNumber; // @synthesize m_nsTelNumber;
@property(retain, nonatomic) NSString *m_nsAddressStageID; // @synthesize m_nsAddressStageID;
@property(retain, nonatomic) NSString *m_nsAddressProviceFirstStageName; // @synthesize m_nsAddressProviceFirstStageName;
@property(retain, nonatomic) NSString *m_nsAddressPostCode; // @synthesize m_nsAddressPostCode;
@property(retain, nonatomic) NSString *m_nsAddressDetailInfo; // @synthesize m_nsAddressDetailInfo;
@property(retain, nonatomic) NSString *m_nsAddressCountiesThirdStageName; // @synthesize m_nsAddressCountiesThirdStageName;
@property(retain, nonatomic) NSString *m_nsAddressCitySecondStageName; // @synthesize m_nsAddressCitySecondStageName;
@property(retain, nonatomic) NSString *m_nsNationalCode; // @synthesize m_nsNationalCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyAddress;
- (id)initWithID:(unsigned int)arg1;
- (void)dealloc;

@end

