//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKAppLinkReturnToRefererViewDelegate-Protocol.h"

@class FBSDKAppLinkReturnToRefererView, NSString, UINavigationController;
@protocol FBSDKAppLinkReturnToRefererControllerDelegate;

@interface FBSDKAppLinkReturnToRefererController : NSObject <FBSDKAppLinkReturnToRefererViewDelegate>
{
    UINavigationController *_navigationController;
    FBSDKAppLinkReturnToRefererView *_view;
    id <FBSDKAppLinkReturnToRefererControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBSDKAppLinkReturnToRefererControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openRefererAppLink:(id)arg1;
- (void)closeViewAnimated:(_Bool)arg1 explicitlyClosed:(_Bool)arg2;
- (void)closeViewAnimated:(_Bool)arg1;
- (void)updateNavigationBarY:(double)arg1;
- (void)moveNavigationBar;
- (void)orientationDidChange:(id)arg1;
- (void)statusBarFrameDidChange:(id)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2;
- (void)returnToRefererViewDidTapInsideCloseButton:(id)arg1;
- (void)removeFromNavController;
- (void)showViewForRefererURL:(id)arg1;
- (void)showViewForRefererAppLink:(id)arg1;
@property(retain, nonatomic) FBSDKAppLinkReturnToRefererView *view;
- (void)dealloc;
- (id)initForDisplayAboveNavController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

