//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IStrongNotificationMgrExt-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVAudioPlayer, MMTableView, MMTimer, MMUIButton, MMUIView, NSArray, NSMutableDictionary, NSString;
@protocol StrongNotificationViewControllerDelegate;

@interface StrongNotificationViewController : MMWindowViewController <UISearchBarDelegate, IStrongNotificationMgrExt, UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *m_tableView;
    NSArray *m_strongNotificationItemAndMessageArray;
    NSMutableDictionary *m_cellHeightDic;
    MMUIView *m_maskView;
    MMUIButton *m_closeButton;
    MMUIView *m_topView;
    MMTimer *m_stopPlaySoundAndAppVibrationTimer;
    AVAudioPlayer *m_player;
    _Bool m_isHadPlaySoundAndAppVibration;
    MMUIView *m_contentView;
    id <StrongNotificationViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StrongNotificationViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MMUIView *m_contentView; // @synthesize m_contentView;
- (void)onEnterBackground;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)asyncPlaySound;
- (void)stopPlaySoundAndAppVibration;
- (void)checkNeedAsyncPlaySound;
- (void)stopPlaySoundAndAppVibrationTimerAction;
- (void)startStopPlaySoundAndAppVibrationTimer;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onClickClose;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFinderLiveTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderLiveTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateNormalTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getNormalTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateWeAppTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getWeAppTableViewCellWithCellIdentifier:(id)arg1;
- (void)reloadTableData;
- (void)reloadTableView;
- (id)getContentView;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initCloseButton;
- (void)intTopView;
- (void)initView;
- (void)initTableView;
- (void)setUpScrollViewGradientLayer;
- (void)initContentView;
- (void)tryUpdateResource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
