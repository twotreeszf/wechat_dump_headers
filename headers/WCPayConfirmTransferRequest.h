//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayConfirmTransferRequest : NSObject
{
    NSString *m_nsTransferID;
    NSString *m_nsFromUserName;
    unsigned long long m_uiInvalidTime;
    NSString *_left_button_continue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *left_button_continue; // @synthesize left_button_continue=_left_button_continue;
@property(nonatomic) unsigned long long m_uiInvalidTime; // @synthesize m_uiInvalidTime;
@property(retain, nonatomic) NSString *m_nsFromUserName; // @synthesize m_nsFromUserName;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
- (void)dealloc;

@end

