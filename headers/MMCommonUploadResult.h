//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCommonUploadResult : NSObject
{
    NSString *_uploadId;
    NSString *_fileId;
    NSString *_aesKey;
    NSString *_imgInfoBuffer;
    unsigned long long _uploadSize;
    NSString *_bigFileSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bigFileSignature; // @synthesize bigFileSignature=_bigFileSignature;
@property(nonatomic) unsigned long long uploadSize; // @synthesize uploadSize=_uploadSize;
@property(retain, nonatomic) NSString *imgInfoBuffer; // @synthesize imgInfoBuffer=_imgInfoBuffer;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) NSString *uploadId; // @synthesize uploadId=_uploadId;

@end

