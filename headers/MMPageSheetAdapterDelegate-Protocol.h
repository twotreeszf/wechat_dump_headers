//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMPageSheetAdapter;

@protocol MMPageSheetAdapterDelegate <NSObject>
- (void)pageSheetDidClose:(MMPageSheetAdapter *)arg1;
- (void)pageSheetWillClose:(MMPageSheetAdapter *)arg1;
- (void)pageSheetDidDisappear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetWillDisappear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetDidAppear:(MMPageSheetAdapter *)arg1;
- (void)pageSheetWillAppear:(MMPageSheetAdapter *)arg1;
@end

