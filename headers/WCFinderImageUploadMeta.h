//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderUploadMediaTask;

@interface WCFinderImageUploadMeta : NSObject
{
    NSString *_imagePath;
    CDUnknownBlockType _complection;
    WCFinderUploadMediaTask *_mediaTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUploadMediaTask *mediaTask; // @synthesize mediaTask=_mediaTask;
@property(copy, nonatomic) CDUnknownBlockType complection; // @synthesize complection=_complection;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;

@end

