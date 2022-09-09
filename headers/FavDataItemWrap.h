//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RecordNodeDataSource-Protocol.h"

@class FavoritesItem, FavoritesItemDataField, NSString;

@interface FavDataItemWrap : NSObject <RecordNodeDataSource>
{
    FavoritesItemDataField *m_dataItem;
    FavoritesItem *m_parent;
    unsigned int m_index;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int index; // @synthesize index=m_index;
@property(retain, nonatomic) FavoritesItem *parent; // @synthesize parent=m_parent;
@property(retain, nonatomic) FavoritesItemDataField *dataItem; // @synthesize dataItem=m_dataItem;
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (_Bool)StartDownload;
- (id)GetSightPath;
- (id)GetThumbPath;
- (id)GetFilePath;
- (id)GetFileName;
- (id)GetFileExt;
- (id)GetMusicInfo;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (id)GetWebPageDomin;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1;
- (unsigned int)GetVideoDuration;
- (id)GetVideoTitle;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (unsigned int)GetVoiceFormat;
- (id)GetAudioInfo;
- (id)GetImgArrayWithDataList:(id)arg1;
- (id)GetImgArray;
- (unsigned int)GetImgCount;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (id)GetImageSourcePath;
- (id)GetImagePath;
- (id)GetImageLocalID;
- (unsigned int)GetParentLocalID;
- (_Bool)CanbeForwardToWC;
- (_Bool)CanbeForwardToChat;
- (unsigned int)GetDataIndex;
- (id)GetDataItem;
- (id)getThumbPathForData:(id)arg1;
- (id)GetParent;
- (id)GetDataSrcName;
- (double)GetRecordNodeContentHeight;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

