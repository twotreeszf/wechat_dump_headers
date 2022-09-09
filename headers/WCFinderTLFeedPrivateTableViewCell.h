//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WCFinderFeedContentVM;
@protocol WCFinderTLFeedPrivateTableViewCellDelegate;

@interface WCFinderTLFeedPrivateTableViewCell : UITableViewCell
{
    id <WCFinderTLFeedPrivateTableViewCellDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
}

+ (double)cellHWithContentVM:(id)arg1;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderTLFeedPrivateTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedContent:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)updateWithContentVM:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

