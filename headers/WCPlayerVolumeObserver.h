//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPVolumeView;
@protocol WCPlayerVolumeObserverDelegate;

@interface WCPlayerVolumeObserver : NSObject
{
    id <WCPlayerVolumeObserverDelegate> _delegate;
    MPVolumeView *_volumeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) __weak id <WCPlayerVolumeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (float)volume;
- (void)onSystemVolumeDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startObserveVolumeChangeEvent;
- (void)stopObserveVolumeChangeEvent;
- (void)dealloc;

@end

