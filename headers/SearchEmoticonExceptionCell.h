//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class EmoticonCellLikeButton, NSString, SightIconView, UILabel;
@protocol EmoticonSearchCollectionComponentDelegate;

@interface SearchEmoticonExceptionCell : UICollectionViewCell
{
    _Bool _loading;
    _Bool _enableWebSearch;
    NSString *_wording;
    id <EmoticonSearchCollectionComponentDelegate> _delegate;
    SightIconView *_sightIconView;
    UILabel *_wordingLabel;
    EmoticonCellLikeButton *_webSearchButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCellLikeButton *webSearchButton; // @synthesize webSearchButton=_webSearchButton;
@property(retain, nonatomic) UILabel *wordingLabel; // @synthesize wordingLabel=_wordingLabel;
@property(retain, nonatomic) SightIconView *sightIconView; // @synthesize sightIconView=_sightIconView;
@property(nonatomic) __weak id <EmoticonSearchCollectionComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableWebSearch; // @synthesize enableWebSearch=_enableWebSearch;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
- (void)onTapWebSearchButton;
- (id)genWebSearchButton;
- (void)refreshView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

