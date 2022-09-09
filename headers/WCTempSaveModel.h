//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString, SightDraft, WCLocationInfo;

@interface WCTempSaveModel : NSObject <NSCoding, NSCopying>
{
    NSString *_content;
    NSArray *_imageArray;
    SightDraft *_sightDraft;
    NSDate *_lastSaveDate;
    long long _lastPrivacy;
    WCLocationInfo *_poiInfo;
    NSArray *_tempSelectContacts;
    NSArray *_remindContactUsernames;
    NSArray *_lastPostVisibleLabelNames;
    NSArray *_lastPostInVisibleLabelNames;
    NSString *_sessionID;
    unsigned long long _pasteLength;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long pasteLength; // @synthesize pasteLength=_pasteLength;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSArray *lastPostInVisibleLabelNames; // @synthesize lastPostInVisibleLabelNames=_lastPostInVisibleLabelNames;
@property(retain, nonatomic) NSArray *lastPostVisibleLabelNames; // @synthesize lastPostVisibleLabelNames=_lastPostVisibleLabelNames;
@property(retain, nonatomic) NSArray *remindContactUsernames; // @synthesize remindContactUsernames=_remindContactUsernames;
@property(retain, nonatomic) NSArray *tempSelectContacts; // @synthesize tempSelectContacts=_tempSelectContacts;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) long long lastPrivacy; // @synthesize lastPrivacy=_lastPrivacy;
@property(retain, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=_lastSaveDate;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

