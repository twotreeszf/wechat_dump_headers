//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TRTCUtil : NSObject
{
}

+ (_Bool)isiOSAppExtension;
+ (void)copyPixelBuffer2dataPtr:(char **)arg1 pixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(int)arg3 planeWidth:(unsigned long long)arg4;
+ (id)copyDataFromPixelBuffer:(struct __CVBuffer *)arg1;
+ (struct CGSize)getAlignd16SizeWithSize:(struct CGSize)arg1;
+ (struct CGSize)videoSizeBySize:(struct CGSize)arg1;
+ (struct CGSize)videoSizeByResolution:(long long)arg1 isProtrait:(_Bool)arg2;
+ (struct CGSize)videoSizeByResolution:(long long)arg1 isPortrait:(_Bool)arg2 fixByScreenAspectRatio:(_Bool)arg3;

@end

