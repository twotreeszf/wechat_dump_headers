//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

@class MMUILabel, RichTextView, WCMicroMerchantFeedsGroup;

@interface WCContentMicroMerchantItemView : WCContentItemBaseView
{
    RichTextView *_leftTitle;
    MMUILabel *_rightTitle;
    WCMicroMerchantFeedsGroup *_groupData;
}

+ (double)heightForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMicroMerchantFeedsGroup *groupData; // @synthesize groupData=_groupData;
@property(retain, nonatomic) MMUILabel *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) RichTextView *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void)throwUrlMessage;
- (void)initViewsWithGroupItem:(id)arg1;
- (void)initViewsWithWCDataItem:(id)arg1;

@end
