//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMusicPlayerExt-Protocol.h"
#import "MMMusicLyricVcCalculatorDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMMusicFadeOutView, MMMusicInfo, MMMusicLyricVcCalculator, MMUIButton, NSString, UITableView;
@protocol MMMusicLyricsPanelDelegate;

@interface MMMusicLyricsPanel : UIView <UITableViewDelegate, UITableViewDataSource, MMMusicLyricVcCalculatorDelegate, IMusicPlayerExt>
{
    MMMusicInfo *m_musicInfo;
    UITableView *_lyricsView;
    unsigned int _currentLyricIndex;
    unsigned int _lastLyricIndex;
    MMMusicLyricVcCalculator *m_lyricCalcuator;
    MMMusicFadeOutView *m_lyricBgView;
    UIView *m_bottomView;
    MMUIButton *m_upBtn;
    struct CGRect lyricsViewFrame;
    _Bool isFirstLocation;
    unsigned long long mode;
    id <MMMusicLyricsPanelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicLyricsPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tryToLocateProperLyricInBottomArea;
- (void)tryToLocateProperLyricInTopArea;
- (void)tryToLocateFirstProperLyricInRightPos;
- (void)updateUIWithCurrIndex:(unsigned int)arg1;
- (void)onCurrentLyricChangeTo:(id)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;
- (_Bool)shouldPlayLyricAnimation;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)textFontForSection:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onClickUpBtn;
- (void)layoutSubviews;
- (void)updateLyrics:(id)arg1;
- (void)initUpBtn;
- (void)initLyricsListView;
- (void)initView;
- (void)dealloc;
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

