//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCActionSheet.h"

@class UIImage, UIView;

@interface WCFinderFullScreenEduPageActionSheet : WCActionSheet
{
    UIView *_tipsView;
    UIImage *_sampleImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *sampleImage; // @synthesize sampleImage=_sampleImage;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
- (void)onClickCloseAction;
- (id)getSampleImageView:(struct CGSize)arg1;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;
- (id)initWithSampleImage:(id)arg1;

@end
