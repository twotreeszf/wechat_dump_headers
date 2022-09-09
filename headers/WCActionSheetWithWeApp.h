//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCActionSheet.h"

@class NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface WCActionSheetWithWeApp : WCActionSheet
{
    NSString *_weAppButtonTitle;
    NSMutableArray *_m_WeAppItemList;
    NSMutableArray *_m_WeAppIconList;
    UIView *_weAppSheetView;
    UILabel *_weAppOpLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *weAppOpLabel; // @synthesize weAppOpLabel=_weAppOpLabel;
@property(retain, nonatomic) UIView *weAppSheetView; // @synthesize weAppSheetView=_weAppSheetView;
@property(retain, nonatomic) NSMutableArray *m_WeAppIconList; // @synthesize m_WeAppIconList=_m_WeAppIconList;
@property(retain, nonatomic) NSMutableArray *m_WeAppItemList; // @synthesize m_WeAppItemList=_m_WeAppItemList;
@property(retain, nonatomic) NSString *weAppButtonTitle; // @synthesize weAppButtonTitle=_weAppButtonTitle;
- (void)resetWeAppIcons;
- (void)onSheetItem:(id)arg1 makeView:(id)arg2;
- (void)reloadInnerView;
- (id)getWeAppIcon;
- (void)updateWeAppIcons;
@property(readonly, nonatomic) NSArray *weAppDatas;
- (void)updateWeAppItemDatas:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

