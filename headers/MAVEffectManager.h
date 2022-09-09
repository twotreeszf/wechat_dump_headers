//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAVEffectManager : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    NSMutableArray *_stickers;
    shared_ptr_1fb3139e _vlogEffectMgr;
}

+ (id)createEffect:(long long)arg1;
+ (long long *)NSArrayToLongArray:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) shared_ptr_1fb3139e vlogEffectMgr; // @synthesize vlogEffectMgr=_vlogEffectMgr;
@property(nonatomic) struct __CVOpenGLESTextureCache *textureCache; // @synthesize textureCache=_textureCache;
- (void)destroy;
- (void)reset;
- (long long)getVLogEffectDuration:(long long)arg1;
- (struct CGSize)getVLogEffectSize:(long long)arg1;
- (int)getVLogEffectReplacementImages:(long long)arg1;
- (_Bool)bringToFront:(long long)arg1;
- (_Bool)removePAGText:(long long)arg1;
- (_Bool)updatePAGText:(long long)arg1 timeRange:(CDStruct_e83c9415)arg2 effectId:(long long)arg3 layoutInfo:(id)arg4 textInfo:(id)arg5;
- (long long)addPAGText:(CDStruct_e83c9415)arg1 effectId:(long long)arg2 layoutInfo:(id)arg3 textInfo:(id)arg4;
- (_Bool)removePAGSticker:(long long)arg1;
- (_Bool)updatePAGSticker:(long long)arg1 timeRange:(CDStruct_e83c9415)arg2 effectId:(long long)arg3 layoutInfo:(id)arg4;
- (long long)addPAGSticker:(CDStruct_e83c9415)arg1 effectId:(long long)arg2 layoutInfo:(id)arg3;
- (_Bool)removeVLogEffectRange:(long long)arg1;
- (_Bool)updateVLogEffectRange:(long long)arg1 timeRange:(CDStruct_e83c9415)arg2 effectId:(long long)arg3 targets:(id)arg4;
- (long long)addVLogEffectRangeAtTimeRange:(CDStruct_e83c9415)arg1 effectId:(long long)arg2 targets:(id)arg3;
- (long long)addVLogEffectRange:(long long)arg1;
- (void)setEffectRangeParams:(long long)arg1 params:(id)arg2;
- (void)setEffectParams:(long long)arg1 params:(id)arg2;
- (void)clearStickers;
- (void)clearTransEffectRange;
- (void)clearEffects;
- (void)removeEffect:(id)arg1;
- (unsigned long long)addEffect:(id)arg1;
- (id)createEffect:(long long)arg1 path:(id)arg2;
- (id)createEffect:(long long)arg1;
- (id)init;

@end

