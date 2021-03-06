//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class EditImageAttr, MMImageExifLogInfo, NSURL;

@interface ImageInfo : NSObject <NSCopying>
{
    unsigned int m_uiImageSource;
    NSURL *m_nuImageSourceURL;
    MMImageExifLogInfo *_exifLogInfo;
}

@property(retain, nonatomic) MMImageExifLogInfo *exifLogInfo; // @synthesize exifLogInfo=_exifLogInfo;
@property(retain, nonatomic) NSURL *m_nuImageSourceURL; // @synthesize m_nuImageSourceURL;
@property(nonatomic) unsigned int m_uiImageSource; // @synthesize m_uiImageSource;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

@end

