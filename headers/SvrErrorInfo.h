//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface SvrErrorInfo : MMObject <PBCoding>
{
    NSString *m_nsContent;
    NSString *m_nsNoticeID;
    NSString *m_nsUrl;
    unsigned int m_uiTime;
    unsigned int m_uiStatus;
    NSString *m_nsTipsContent;
    unsigned int m_uiExpiredTime;
    NSString *m_position;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_position;
+ (void)PBArrayAdd_m_uiExpiredTime;
+ (void)PBArrayAdd_m_nsTipsContent;
+ (void)PBArrayAdd_m_uiStatus;
+ (void)PBArrayAdd_m_uiTime;
+ (void)PBArrayAdd_m_nsUrl;
+ (void)PBArrayAdd_m_nsNoticeID;
+ (void)PBArrayAdd_m_nsContent;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_position; // @synthesize m_position;
@property(nonatomic) unsigned int m_uiExpiredTime; // @synthesize m_uiExpiredTime;
@property(retain, nonatomic) NSString *m_nsTipsContent; // @synthesize m_nsTipsContent;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned int m_uiTime; // @synthesize m_uiTime;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl;
@property(retain, nonatomic) NSString *m_nsNoticeID; // @synthesize m_nsNoticeID;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
- (void)ParseFromXml:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

