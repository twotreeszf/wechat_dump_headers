//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMusicFinderVideoCellModel, UIImage;

@protocol MMMusicPostVideoTabFinderControllerDelegate <NSObject>
- (void)onSelectFinderSearchResultVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;
- (void)onSelectFinderResultVideo:(MMMusicFinderVideoCellModel *)arg1 thumbImage:(UIImage *)arg2 cellFrameInVCAcquireBlock:(struct CGRect (^)(void))arg3 contentOffsetResetBlock:(void (^)(void))arg4;
- (void)onExitTabFinderSearchMode;
- (void)onEnterTabFinderSearchMode;
@end

