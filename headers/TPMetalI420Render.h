//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPMetalRenderBase.h"

@class MTLTextureDescriptor;
@protocol MTLTexture;

@interface TPMetalI420Render : TPMetalRenderBase
{
    id <MTLTexture> _yTexture;
    id <MTLTexture> _uTexture;
    id <MTLTexture> _vTexture;
    MTLTextureDescriptor *_descriptor;
    MTLTextureDescriptor *_chromaDescriptor;
    int _width;
    int _height;
    int _chromaWidth;
    int _chromaHeight;
}

- (void).cxx_destruct;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (_Bool)setupTexturesForFrame:(struct TPFrame *)arg1;
- (id)fragmentFunctionSourceName;
- (id)vertexFunctionSourceName;
- (id)shaderSource;
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(_Bool)arg2;

@end

