//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIColor;

@interface MMWebViewPresetUI : MMObject
{
    _Bool _navigationBarSperatorLineHidden;
    _Bool _hideCloseButton;
    _Bool _shouldShowDomain;
    unsigned long long _statusBarColor;
    UIColor *_navigationBarColor;
    UIColor *_navigationBarTitleColor;
    UIColor *_navigationLeftItemFontColor;
    UIColor *_navigationRightItemColor;
    NSString *_navigationLeftIconName;
    NSString *_navigationBarTitle;
    unsigned long long _webScrollStyle;
    UIColor *_backcontainerColor;
    unsigned long long _backcontainerEffect;
    UIColor *_addressLabelColor;
    UIColor *_backgroundColor;
}

@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool shouldShowDomain; // @synthesize shouldShowDomain=_shouldShowDomain;
@property(retain, nonatomic) UIColor *addressLabelColor; // @synthesize addressLabelColor=_addressLabelColor;
@property(nonatomic) unsigned long long backcontainerEffect; // @synthesize backcontainerEffect=_backcontainerEffect;
@property(retain, nonatomic) UIColor *backcontainerColor; // @synthesize backcontainerColor=_backcontainerColor;
@property(nonatomic) unsigned long long webScrollStyle; // @synthesize webScrollStyle=_webScrollStyle;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(retain, nonatomic) NSString *navigationLeftIconName; // @synthesize navigationLeftIconName=_navigationLeftIconName;
@property(retain, nonatomic) UIColor *navigationRightItemColor; // @synthesize navigationRightItemColor=_navigationRightItemColor;
@property(retain, nonatomic) UIColor *navigationLeftItemFontColor; // @synthesize navigationLeftItemFontColor=_navigationLeftItemFontColor;
@property(nonatomic) _Bool hideCloseButton; // @synthesize hideCloseButton=_hideCloseButton;
@property(nonatomic) _Bool navigationBarSperatorLineHidden; // @synthesize navigationBarSperatorLineHidden=_navigationBarSperatorLineHidden;
@property(retain, nonatomic) UIColor *navigationBarTitleColor; // @synthesize navigationBarTitleColor=_navigationBarTitleColor;
@property(retain, nonatomic) UIColor *navigationBarColor; // @synthesize navigationBarColor=_navigationBarColor;
@property(nonatomic) unsigned long long statusBarColor; // @synthesize statusBarColor=_statusBarColor;
- (void).cxx_destruct;
- (id)init;

@end
