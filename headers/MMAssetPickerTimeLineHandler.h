//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCEditVideoViewControllerDelegate-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"

@class MMAsset, MMAssetPickerController, NSString;

@interface MMAssetPickerTimeLineHandler : NSObject <WCFinderPostViewControllerDelegate, WCEditVideoViewControllerDelegate>
{
    MMAssetPickerController *_pickerController;
    MMAsset *_editAsset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMAsset *editAsset; // @synthesize editAsset=_editAsset;
@property(nonatomic) __weak MMAssetPickerController *pickerController; // @synthesize pickerController=_pickerController;
- (void)postViewControllerDidCancel:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (void)postViewControllerDidFinish:(id)arg1 dataItem:(id)arg2 postStateModel:(id)arg3;
- (void)gotoWeshi:(id)arg1;
- (void)gotoWCFinder:(id)arg1;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

