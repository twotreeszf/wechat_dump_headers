//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray, NSString;

@interface WebViewSanboxPreverifyContext : MMObject
{
    _Bool _bConfigRequestResult;
    _Bool _bNotCheckIfUrlMatchToSessionUrl;
    unsigned long long _startConfigTimeStamp;
    NSString *_mainFrameSessionId;
    NSArray *_arrConfigTagNameList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bNotCheckIfUrlMatchToSessionUrl; // @synthesize bNotCheckIfUrlMatchToSessionUrl=_bNotCheckIfUrlMatchToSessionUrl;
@property(retain, nonatomic) NSArray *arrConfigTagNameList; // @synthesize arrConfigTagNameList=_arrConfigTagNameList;
@property(copy, nonatomic) NSString *mainFrameSessionId; // @synthesize mainFrameSessionId=_mainFrameSessionId;
@property(nonatomic) _Bool bConfigRequestResult; // @synthesize bConfigRequestResult=_bConfigRequestResult;
@property(nonatomic) unsigned long long startConfigTimeStamp; // @synthesize startConfigTimeStamp=_startConfigTimeStamp;

@end

