//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface MMFinderShareSettingLowerSettingCell : MMTableViewCell
{
    UILabel *_groupName;
    UIView *_separator;
    UIImageView *_checkIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *checkIconView; // @synthesize checkIconView=_checkIconView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *groupName; // @synthesize groupName=_groupName;
- (void)isCheckIconViewChecked:(_Bool)arg1;
- (void)unToggle;
- (void)toggle;
- (void)updateWithGroupName:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

