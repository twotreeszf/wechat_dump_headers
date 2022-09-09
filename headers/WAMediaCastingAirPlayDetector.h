//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPVolumeView, WAMediaCastingAirPlayDectectPrivateWindow;
@protocol WAMediaCastingAirPlayDetectorDelegate;

@interface WAMediaCastingAirPlayDetector : NSObject
{
    id <WAMediaCastingAirPlayDetectorDelegate> _delegate;
    WAMediaCastingAirPlayDectectPrivateWindow *_dectectWindow;
}

+ (id)format_WirelessTypeString:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAMediaCastingAirPlayDectectPrivateWindow *dectectWindow; // @synthesize dectectWindow=_dectectWindow;
@property(nonatomic) __weak id <WAMediaCastingAirPlayDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWirelessRouteActiveDidChange;
@property(readonly, nonatomic) unsigned long long wirelessType;
@property(readonly, nonatomic) _Bool isAirPlaying;
@property(readonly, nonatomic) MPVolumeView *volumeView;
- (id)init;
- (void)dealloc;

@end

