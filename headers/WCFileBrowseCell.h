//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSString, UIImageView, UILabel, WCFileBrowseInfo, WCFileBrowseInfoBtn;
@protocol WCFileBrowseCellDelegate;

@interface WCFileBrowseCell : UITableViewCell
{
    _Bool _bSelected;
    id <WCFileBrowseCellDelegate> _delegate;
    NSIndexPath *_cellIndexPath;
    UIImageView *_selectImageView;
    UIImageView *_fileHeaderView;
    UILabel *_headLabel;
    UILabel *_fileSizeLabel;
    UILabel *_fromWhoLabel;
    UILabel *_firstNameLabel;
    UILabel *_centerLabel;
    UILabel *_secondNameLabel;
    UILabel *_timeLabel;
    WCFileBrowseInfoBtn *_infoIconBtn;
    WCFileBrowseInfo *_browseInfo;
    NSString *_searchText;
}

+ (id)p_convertByteSizeToString:(unsigned long long)arg1;
+ (double)getCellHeight:(double)arg1 browseInfo:(id)arg2;
+ (struct UIEdgeInsets)getSperatorInset;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) _Bool bSelected; // @synthesize bSelected=_bSelected;
@property(retain, nonatomic) WCFileBrowseInfo *browseInfo; // @synthesize browseInfo=_browseInfo;
@property(retain, nonatomic) WCFileBrowseInfoBtn *infoIconBtn; // @synthesize infoIconBtn=_infoIconBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *secondNameLabel; // @synthesize secondNameLabel=_secondNameLabel;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UILabel *firstNameLabel; // @synthesize firstNameLabel=_firstNameLabel;
@property(retain, nonatomic) UILabel *fromWhoLabel; // @synthesize fromWhoLabel=_fromWhoLabel;
@property(retain, nonatomic) UILabel *fileSizeLabel; // @synthesize fileSizeLabel=_fileSizeLabel;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(retain, nonatomic) UIImageView *fileHeaderView; // @synthesize fileHeaderView=_fileHeaderView;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(nonatomic) __weak id <WCFileBrowseCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPreviewFile:(id)arg1;
- (id)p_getFromWhoTitleString;
- (void)updateView;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (void)updateWithBrowseInfo:(id)arg1 selected:(_Bool)arg2 searchText:(id)arg3;
- (void)updateWithBrowseInfo:(id)arg1 selected:(_Bool)arg2;
- (void)updateWithBrowseInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

