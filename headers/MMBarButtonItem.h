//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class MMBarButton;

@interface MMBarButtonItem : UIBarButtonItem
{
    struct CGRect m_standardPortriatFrame;
    MMBarButton *m_btn;
    struct UIEdgeInsets m_standardPortraitEdgeInsets;
    long long m_iContentHeight;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_iContentHeight; // @synthesize m_iContentHeight;
@property(nonatomic) struct UIEdgeInsets m_standardPortraitEdgeInsets; // @synthesize m_standardPortraitEdgeInsets;
@property(nonatomic) struct CGRect m_standardPortriatFrame; // @synthesize m_standardPortriatFrame;
@property(nonatomic) __weak MMBarButton *m_btn; // @synthesize m_btn;
@property(nonatomic) _Bool showRedDot;
- (void)setEnabled:(_Bool)arg1;

@end

