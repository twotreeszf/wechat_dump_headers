//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, UIView, WCFinderDataItem;

@protocol WCFinderTabViewControllerProtocol <NSObject>
- (struct CGRect)getCurSearchBarFrame;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (_Bool)triggerRefreshLogic:(unsigned int)arg1 toTab:(unsigned int)arg2;
- (void)tabViewControllerStopCurrentPlayVideo;
- (_Bool)tabViewControllerGetSelectState;
- (NSData *)getCurViewModelLastBuff;
- (void)tabViewControllerSelectionDidChange:(_Bool)arg1;

@optional
- (UIView *)getCurMaskView;
- (WCFinderDataItem *)getCurrentDataItemWithSessionBuffer;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (void)tabViewControllerDidChangeOrientation:(_Bool)arg1;
@end

