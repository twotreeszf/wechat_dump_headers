//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImagePreviewBrowserControllerDataSource-Protocol.h"

@class NSMutableArray, NSString;

@interface MMAssetPickerControllerProxyObject : NSObject <MMImagePreviewBrowserControllerDataSource>
{
    NSMutableArray *m_previewInfos;
    NSMutableArray *_selectedInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedInfos; // @synthesize selectedInfos=_selectedInfos;
- (_Bool)isPreviewSelectedAssetInfosContainsVideo;
- (unsigned long long)previewAssetTotal;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (long long)previewIndexForAssetInfo:(id)arg1;
- (id)selectedAssetInfosForPreview;
- (_Bool)isPreviewSelectedOnly;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

