//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString;

@protocol IRoomHistoryDownloadExt <NSObject>

@optional
- (void)OnRoomHistoryDownloadExipired:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
- (void)OnRoomHistoryDownloadFail:(CMessageWrap *)arg1 DataId:(NSString *)arg2;
- (void)OnRoomHistoryDownloadOK:(CMessageWrap *)arg1;
@end

