//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicMVModel, WCFinderDataItem;

@protocol IMMMusicMVCGIService <NSObject>

@optional
- (void)onMusicMVCGISerivceGetMvInfoFailWithObjectId:(unsigned long long)arg1 failureType:(unsigned long long)arg2;
- (void)onMusicMVCGISerivceGetMvInfoSuccessWithMVModel:(MMMusicMVModel *)arg1 objectId:(unsigned long long)arg2;
- (void)onMusicMVCGISerivcePostMVFailed:(MMMusicMVModel *)arg1;
- (void)onMusicMVCGISerivcePostMVSuccess:(WCFinderDataItem *)arg1;
@end

