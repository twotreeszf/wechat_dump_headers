//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCSightViewUtils : NSObject
{
}

+ (int)fetchVerticalDisplayType:(id)arg1;
+ (struct CGSize)getImageSize:(struct CGSize)arg1 mediaType:(long long)arg2;
+ (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1 isAd:(_Bool)arg2 mediaType:(long long)arg3 isFullPlay:(_Bool)arg4 adVerticalVideoDisplayType:(int)arg5;
+ (struct CGSize)sightViewSizeWithImgSize:(struct CGSize)arg1 isAd:(_Bool)arg2 mediaType:(long long)arg3;
+ (struct CGSize)thumbImageSizeWithMediaItem:(id)arg1;
+ (struct CGSize)sightViewSizeWithMediaItem:(id)arg1 isFullPlay:(_Bool)arg2;
+ (struct CGSize)sightViewSizeWithMediaItem:(id)arg1 isAd:(_Bool)arg2;
+ (struct CGSize)sightViewSizeWithMediaItem:(id)arg1;

@end

