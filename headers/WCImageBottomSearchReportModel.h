//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSearchReportModel.h"

@class NSString;

@interface WCImageBottomSearchReportModel : WCSearchReportModel
{
    _Bool _isBubbleEnable;
    long long _action;
    long long _source;
    NSString *_picMD5;
    unsigned long long _detectId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBubbleEnable; // @synthesize isBubbleEnable=_isBubbleEnable;
@property(nonatomic) unsigned long long detectId; // @synthesize detectId=_detectId;
@property(copy, nonatomic) NSString *picMD5; // @synthesize picMD5=_picMD5;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long action; // @synthesize action=_action;
- (id)initWithMsgWrap:(id)arg1;

@end
