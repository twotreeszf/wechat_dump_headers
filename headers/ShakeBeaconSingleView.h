//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class ShakeBeaconItem;
@protocol ShakeBeaconSingleViewDelegate;

@interface ShakeBeaconSingleView : MMUIView
{
    id <ShakeBeaconSingleViewDelegate> _delegate;
    ShakeBeaconItem *_item;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ShakeBeaconItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <ShakeBeaconSingleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectView:(id)arg1;
- (void)onClickHeadImageView:(id)arg1;
- (void)stopAnimation;
- (void)showAnimation;
- (id)initWithBeaconInfo:(id)arg1;

@end

