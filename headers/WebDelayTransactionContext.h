//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class MMWebViewController, MMWebViewKeepHolderMgr;

@interface WebDelayTransactionContext : MMObject
{
    MMWebViewController *_webViewVC;
    MMWebViewKeepHolderMgr *_webKeeper;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMWebViewKeepHolderMgr *webKeeper; // @synthesize webKeeper=_webKeeper;
@property(retain, nonatomic) MMWebViewController *webViewVC; // @synthesize webViewVC=_webViewVC;

@end

