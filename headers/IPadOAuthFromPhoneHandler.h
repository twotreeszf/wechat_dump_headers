//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMWebViewDelegate.h"

@class MMUIViewController, MMUIWindow, MMWebViewController, NSString;

@interface IPadOAuthFromPhoneHandler : MMObject <MMWebViewDelegate>
{
    MMUIWindow *_window;
    MMUIViewController *_rootVC;
    MMWebViewController *_webviewVC;
}

- (void).cxx_destruct;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewWillClose:(id)arg1;
- (void)onWebViewClickClose;
- (void)startOAuth:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

