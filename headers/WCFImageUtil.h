//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCFImageUtil : NSObject
{
}

+ (_Bool)fileExistsAtPath:(id)arg1;
+ (_Bool)isHighEndDevice;
+ (id)scaleAspectFillImage:(id)arg1 toSize:(struct CGSize)arg2;
+ (struct CGRect)scaleAspectFillRectForImage:(id)arg1 viewSize:(struct CGSize)arg2;
+ (id)scaleImageFile:(id)arg1 toSize:(struct CGSize)arg2 mode:(long long)arg3;
+ (id)scaleImageData:(id)arg1 toSize:(struct CGSize)arg2 mode:(long long)arg3;
+ (_Bool)enableScale;
+ (id)thubmnailForImageSource:(struct CGImageSource *)arg1 maxPixel:(double)arg2 scaleAspectFill:(_Bool)arg3 orientation:(long long)arg4 scale:(double)arg5;
+ (struct WCFImageMeta)imageMetaFromSource:(struct CGImageSource *)arg1;
+ (long long)cgImageOrientToUI:(unsigned int)arg1;

@end
