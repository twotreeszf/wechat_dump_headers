//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WCFinderPlayerControlViewDelegate-Protocol.h"

@class NSString, SightIconView, WCFinderFeedMediaWrap, WCFinderMediaInfo, WCFinderPlayerControlView, WCPlayerView;
@protocol WCSNSFinderVideoNodeViewDelegate;

@interface WCSNSFinderVideoNodeView : UIView <WCFinderPlayerControlViewDelegate>
{
    _Bool _willPauseOnPresenFullScreen;
    WCPlayerView *_playerView;
    WCFinderPlayerControlView *_playerConfigControlView;
    SightIconView *_playIconView;
    WCFinderFeedMediaWrap *_mediaWrap;
    WCFinderMediaInfo *_mediaInfo;
    id <WCSNSFinderVideoNodeViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCSNSFinderVideoNodeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool willPauseOnPresenFullScreen; // @synthesize willPauseOnPresenFullScreen=_willPauseOnPresenFullScreen;
@property(retain, nonatomic) WCFinderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView; // @synthesize playerConfigControlView=_playerConfigControlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)pausePlay;
- (void)startPlay;
- (id)genPlayerConfigControlView;
- (void)dealloc;
- (id)genPlayIconView;
- (id)initWithMediaInfo:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

