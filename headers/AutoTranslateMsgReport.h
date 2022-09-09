//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AutoTranslateMsgReport : NSObject
{
    unsigned int _expectCount;
    unsigned int _handleCount;
    unsigned long long _startTimestamp;
    unsigned long long _endTimestamp;
}

@property(nonatomic) unsigned long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) unsigned int handleCount; // @synthesize handleCount=_handleCount;
@property(nonatomic) unsigned int expectCount; // @synthesize expectCount=_expectCount;
- (void)reportKV;
- (void)startAutoTraslateWithExpectCnt:(unsigned int)arg1;
- (void)reset;

@end
