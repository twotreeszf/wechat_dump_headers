//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLKViewDelegate-Protocol.h"
#import "MTKViewDelegate-Protocol.h"

@class CIContext, CIImage, EAGLContext, GLKView, MTKView, NSString, TAVFrame;
@protocol MTLCommandQueue, MTLDevice, TAVPreviewDelegate;

@interface TAVPreview : UIView <MTKViewDelegate, GLKViewDelegate>
{
    id <TAVPreviewDelegate> _delegate;
    MTKView *_MTKView;
    id <MTLCommandQueue> _MTLCommandQueue;
    id <MTLDevice> _MTLDevice;
    GLKView *_GLKView;
    EAGLContext *_EAGLContext;
    CIContext *_CIContext;
    TAVFrame *_currentFrame;
    CIImage *_CIImage;
    unsigned long long _imageMode;
    struct CGRect _contentRect;
}

+ (_Bool)supportMetal;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long imageMode; // @synthesize imageMode=_imageMode;
@property(retain, nonatomic) CIImage *CIImage; // @synthesize CIImage=_CIImage;
@property(retain, nonatomic) TAVFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(retain, nonatomic) CIContext *CIContext; // @synthesize CIContext=_CIContext;
@property(retain, nonatomic) EAGLContext *EAGLContext; // @synthesize EAGLContext=_EAGLContext;
@property(retain, nonatomic) GLKView *GLKView; // @synthesize GLKView=_GLKView;
@property(retain, nonatomic) id <MTLDevice> MTLDevice; // @synthesize MTLDevice=_MTLDevice;
@property(retain, nonatomic) id <MTLCommandQueue> MTLCommandQueue; // @synthesize MTLCommandQueue=_MTLCommandQueue;
@property(retain, nonatomic) MTKView *MTKView; // @synthesize MTKView=_MTKView;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(nonatomic) __weak id <TAVPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)createEmptyCIImageWithSize:(struct CGSize)arg1;
- (id)resizeCIImageForDrawing:(id)arg1;
- (id)renderedCIImage;
- (struct CGSize)renderSize;
- (void)setNeedsDisplay;
- (void)setupPreviewIfNeeded;
- (void)layoutSubviews;
- (void)updatePreviewWithFrame:(id)arg1;
- (void)createEAGLContext;
- (void)createMTLContext;
- (void)initContext;
- (void)dealloc;
- (void)setContentMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

