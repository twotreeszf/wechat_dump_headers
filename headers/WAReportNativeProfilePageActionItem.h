//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportNativeProfilePageActionItem : WAReportBaseItem
{
    unsigned int _eventTime;
    unsigned int _shareActionType;
    unsigned long long _enterScene;
    unsigned long long _eventID;
    unsigned long long _result;
    NSString *_shareId;
    NSString *_shareTitle;
    NSString *_sharePath;
    NSString *_imageUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *sharePath; // @synthesize sharePath=_sharePath;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(nonatomic) unsigned int shareActionType; // @synthesize shareActionType=_shareActionType;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(nonatomic) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (id)reportString;

@end

