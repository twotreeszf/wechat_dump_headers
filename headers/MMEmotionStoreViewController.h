//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonStoreMgrExt-Protocol.h"

@class MMPersonalEmotionsViewController, MMWechatEmotionsViewController, UIImageView, UISegmentedControl;

@interface MMEmotionStoreViewController : MMUIViewController <EmoticonStoreMgrExt>
{
    UISegmentedControl *_segmentedControl;
    MMWechatEmotionsViewController *_wechatEmotionsViewController;
    MMPersonalEmotionsViewController *_personalEmotionsViewContrller;
    UIImageView *_badgeView;
    unsigned int _scene;
    _Bool _isReport;
    unsigned long long m_defaultSelectedTag;
    CDUnknownBlockType _onCanelModelViewBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onCanelModelViewBlock; // @synthesize onCanelModelViewBlock=_onCanelModelViewBlock;
- (void)OnEmoticonExptConfigChange:(int)arg1;
- (void)clickEmotionCharts;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)clickPersonalEmotionsTab;
- (void)clickWechatEmotionsTab;
- (void)clickSegmentedControl;
- (void)updateNew:(_Bool)arg1;
- (void)configSegmentedControl;
- (void)onOperate;
- (void)OnCancelModalView:(id)arg1;
- (void)configViewControllers;
- (_Bool)isNeedPersonalViewTab;
- (void)configViews;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEmotionScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (id)initWithEmotionScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

@end

