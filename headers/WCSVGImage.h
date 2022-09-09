//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCSVGCanvas;

@interface WCSVGImage : NSObject
{
    WCSVGCanvas *_mainCanvas;
    struct CGRect _viewBox;
}

+ (id)svgImageWithContentsOfFile:(id)arg1;
+ (id)svgImageWithData:(id)arg1;
+ (id)svgImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 fromConfig:(id)arg2;
+ (id)imageData:(id)arg1 fromConfig:(id)arg2;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3 alpha:(double)arg4 rotate:(double)arg5;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2 color:(id)arg3;
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3 rotate:(double)arg4;
+ (id)imageNamed:(id)arg1 color:(id)arg2 alpha:(double)arg3;
+ (id)imageNamed:(id)arg1 color:(id)arg2;
+ (id)imageNamed:(id)arg1;
+ (id)imageData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox=_viewBox;
@property(retain, nonatomic) WCSVGCanvas *mainCanvas; // @synthesize mainCanvas=_mainCanvas;
@property(readonly, nonatomic) struct CGSize size;
- (id)imageFromConfig:(id)arg1;

@end

