//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMailUploadAttachmentTask : NSObject
{
    NSString *_fileName;
    NSString *_filePath;
    NSString *_clientMediaID;
    NSString *_fileId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *clientMediaID; // @synthesize clientMediaID=_clientMediaID;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;

@end

