//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveLotteryAttendMethod, MMFinderLiveTaskId, NSString;

@interface MMFinderLiveLotteryCreateInfo : NSObject
{
    unsigned int _lotteryDuration;
    unsigned int _lotteryWinnerCnt;
    MMFinderLiveTaskId *_liveTaskId;
    NSString *_lotteryDescription;
    FinderLiveLotteryAttendMethod *_method;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveLotteryAttendMethod *method; // @synthesize method=_method;
@property(nonatomic) unsigned int lotteryWinnerCnt; // @synthesize lotteryWinnerCnt=_lotteryWinnerCnt;
@property(retain, nonatomic) NSString *lotteryDescription; // @synthesize lotteryDescription=_lotteryDescription;
@property(nonatomic) unsigned int lotteryDuration; // @synthesize lotteryDuration=_lotteryDuration;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)description;
- (id)initWithLiveTaskId:(id)arg1;

@end
