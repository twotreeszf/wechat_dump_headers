//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol VideoStreamDownloadLogicDelegate <NSObject>
- (void)OnSnsVideoChanged;
- (void)onDownloadVideoSuccess;
- (void)ShouldUpdateVideoThumbImage:(NSString *)arg1;
- (void)OnDownloadVideoErrorExpired:(_Bool)arg1;
- (void)onGetFristPartAVData;
- (void)onGetAVDataFromNetOffset:(unsigned int)arg1 Length:(unsigned int)arg2 NeedNotifyToPlay:(_Bool)arg3;

@optional
- (void)onDownloadVideoReturnCode:(int)arg1;
@end

