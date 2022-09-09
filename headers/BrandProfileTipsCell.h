//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "ILinkEventExt-Protocol.h"

@class BrandProfileTipsSectionData, MMUIActivityIndicatorView, NSString, RichTextView;
@protocol BrandProfileTipsCellDelegate;

@interface BrandProfileTipsCell : UITableViewCell <ILinkEventExt>
{
    RichTextView *_tipsLabel;
    MMUIActivityIndicatorView *_indicatorView;
    id <BrandProfileTipsCellDelegate> _delegate;
    BrandProfileTipsSectionData *_sectionData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileTipsSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(nonatomic) __weak id <BrandProfileTipsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

