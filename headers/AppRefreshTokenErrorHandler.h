//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMAppRefreshTokenErrorViewControllerDelegate-Protocol.h"

@class MMUINavigationController, NSString;

@interface AppRefreshTokenErrorHandler : MMObject <MMAppRefreshTokenErrorViewControllerDelegate>
{
    MMUINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)onAppRefreshTokenErrorViewDimiss:(id)arg1;
- (void)clearAllHandle;
- (void)startHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

