//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeEffectBaseAdapter.h"

@class NSMutableArray;

@interface TwoDStickerEffectAdapter : WeEffectBaseAdapter
{
    NSMutableArray *_stickerArr;
}

+ (id)weeffectType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *stickerArr; // @synthesize stickerArr=_stickerArr;
- (id)generateJsonDic;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)load;

@end

