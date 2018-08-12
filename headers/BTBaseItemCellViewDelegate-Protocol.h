//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTBaseItemCellView, CContact, CMessageWrap, MMUIViewController, MMWebViewController, NSString, ReaderWrap, UIView;

@protocol BTBaseItemCellViewDelegate <NSObject>

@optional
- (void)onShowUnFinishedView;
- (void)onLongPressForDebug:(CMessageWrap *)arg1;
- (void)onBrandItemAudioClick:(BTBaseItemCellView *)arg1;
- (void)onBrandItemLongPress:(BTBaseItemCellView *)arg1;
- (void)onBrandItemImageClick:(BTBaseItemCellView *)arg1 imageView:(UIView *)arg2;
- (void)onReloadItemView:(BTBaseItemCellView *)arg1;
- (MMWebViewController *)getWebViewController:(ReaderWrap *)arg1 url:(NSString *)arg2 forPeek:(_Bool)arg3 fromMsgWrap:(CMessageWrap *)arg4;
- (MMUIViewController *)getViewController;
- (void)onClickHeaderRemoveContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderProfile:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderUnTopContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderTopContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
- (void)onClickHeaderContact:(CContact *)arg1 fromView:(BTBaseItemCellView *)arg2;
@end
