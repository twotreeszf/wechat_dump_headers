//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMusicMVModel;
@protocol MMMusicDotMVDataSourceDelegate;

@interface MMMusicDotMVDataSource : NSObject
{
    unsigned int _currTimeMs;
    int _currDotIndex;
    id <MMMusicDotMVDataSourceDelegate> _delegate;
    MMMusicMVModel *_mvModel;
}

- (void).cxx_destruct;
@property(nonatomic) int currDotIndex; // @synthesize currDotIndex=_currDotIndex;
@property(nonatomic) unsigned int currTimeMs; // @synthesize currTimeMs=_currTimeMs;
@property(retain, nonatomic) MMMusicMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(nonatomic) __weak id <MMMusicDotMVDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)getCurrIndexFromCurrPlayTime:(unsigned int)arg1;
- (void)updateCurrPlayedTime:(unsigned int)arg1;
- (void)updateTimeInfo:(id)arg1;
- (void)updateWithMVModel:(id)arg1;
- (id)initWithMVModel:(id)arg1;

@end
