//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KaraHistoricalCondition : NSObject
{
    Class _WINQ;
}

- (void).cxx_destruct;
@property(readonly) Class WINQ; // @synthesize WINQ=_WINQ;
- (struct OrderingTerm)dateThatReceivedDescending;
- (struct Expression)dateThatReceivedBefore:(id)arg1;
- (struct Expression)dateThatReceivedAfter:(id)arg1;
- (struct Expression)dateThatReceivedFrom:(id)arg1 to:(id)arg2;
- (struct Expression)recalled;
- (id)initWithClass:(Class)arg1;

@end

