//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class CBaseFile, NSString;

@interface WAFileDescriptorLogicFileWrap : MMObject
{
    CBaseFile *_baseFile;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) CBaseFile *baseFile; // @synthesize baseFile=_baseFile;
- (id)initWithBaseFile:(id)arg1 appId:(id)arg2;

@end
