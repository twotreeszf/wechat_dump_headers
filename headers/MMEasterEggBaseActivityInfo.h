//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMEasterEggActivityInfo-Protocol.h"

@class NSString;

@interface MMEasterEggBaseActivityInfo : NSObject <MMEasterEggActivityInfo>
{
    int _size;
    NSString *_imageFilePath;
    long long _animationType;
    NSString *_appId;
}

+ (id)activityNodeName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
- (id)generateInteractiveImplicitView;
- (_Bool)isValid;
- (void)tryParseEntryAnimTypeNodeFromActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (void)tryParseAppIdFromActivityNode:(struct XmlReaderNode_t *)arg1;
- (id)initWithActivityNode:(struct XmlReaderNode_t *)arg1 directoryPath:(id)arg2 clientEggVersion:(unsigned long long)arg3;
- (id)accessibilityLabel;
- (Class)activityClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

