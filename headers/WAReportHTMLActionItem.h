//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportHTMLActionItem : WAReportBaseItem
{
    unsigned int _clientTimestamp;
    unsigned int _publiclibversion;
    NSString *_currentUrl;
    NSString *_referpageurl;
    long long _targetAction;
    NSString *_targetPageUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int publiclibversion; // @synthesize publiclibversion=_publiclibversion;
@property(nonatomic) unsigned int clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(retain, nonatomic) NSString *targetPageUrl; // @synthesize targetPageUrl=_targetPageUrl;
@property(nonatomic) long long targetAction; // @synthesize targetAction=_targetAction;
@property(retain, nonatomic) NSString *referpageurl; // @synthesize referpageurl=_referpageurl;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
- (id)reportString;
- (int)reportID;

@end

