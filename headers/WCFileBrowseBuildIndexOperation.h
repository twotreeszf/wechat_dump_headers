//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class WCFileBrowseInfoDB;

@interface WCFileBrowseBuildIndexOperation : NSOperation
{
    WCFileBrowseInfoDB *_browseInfoDB;
    CDUnknownBlockType _buildIndexCompletion;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType buildIndexCompletion; // @synthesize buildIndexCompletion=_buildIndexCompletion;
@property(retain, nonatomic) WCFileBrowseInfoDB *browseInfoDB; // @synthesize browseInfoDB=_browseInfoDB;
- (void)p_buildFileBrowseWithDataInfo:(id)arg1 withType:(unsigned long long)arg2;
- (id)p_getTaskInfo;
- (void)buildAllFileIntoFileBrowse;
- (void)start;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

