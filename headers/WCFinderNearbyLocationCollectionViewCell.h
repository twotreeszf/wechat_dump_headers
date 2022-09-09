//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "ILinkEventExt-Protocol.h"

@class NSString, RichTextView, UIImageView;
@protocol WCFinderNearbyLocationCellDelegate;

@interface WCFinderNearbyLocationCollectionViewCell : UICollectionViewCell <ILinkEventExt>
{
    id <WCFinderNearbyLocationCellDelegate> _delegate;
    UIImageView *_locationImageView;
    RichTextView *_hintTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *hintTextView; // @synthesize hintTextView=_hintTextView;
@property(retain, nonatomic) UIImageView *locationImageView; // @synthesize locationImageView=_locationImageView;
@property(nonatomic) __weak id <WCFinderNearbyLocationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

