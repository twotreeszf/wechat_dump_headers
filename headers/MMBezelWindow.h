//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

@class NSObject;
@protocol MMBezelWindowDelegate;

@interface MMBezelWindow : MMUIWindow
{
    NSObject<MMBezelWindowDelegate> *_bezelWindowDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<MMBezelWindowDelegate> *bezelWindowDelegate; // @synthesize bezelWindowDelegate=_bezelWindowDelegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

