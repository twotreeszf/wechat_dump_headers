//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage;
@protocol TAVVideoCompositionTrack;

@interface TAVVideoCompositionImage : NSObject
{
    CIImage *_image;
    id <TAVVideoCompositionTrack> _track;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoCompositionTrack> track; // @synthesize track=_track;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;

@end
