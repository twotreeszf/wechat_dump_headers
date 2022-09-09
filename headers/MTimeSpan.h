//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MTimeSpan : NSObject
{
    NSDate *m_beginDate;
    NSDate *m_endDate;
}

+ (id)timeSpanOfMonthInDate:(id)arg1;
+ (id)timeSpanOfWeekInDate:(id)arg1;
+ (id)timeSpanOfThisMonth;
+ (id)timeSpanOfThisWeek;
+ (id)timeSpanOfToday;
+ (id)timeSpanOfIntDate:(unsigned int)arg1;
+ (id)timeSpanOfDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *m_endDate; // @synthesize m_endDate;
@property(retain, nonatomic) NSDate *m_beginDate; // @synthesize m_beginDate;
- (unsigned int)endInIntDate;
- (unsigned int)beginInIntDate;
- (id)end;
- (id)begin;
- (id)description;
- (id)init;

@end

