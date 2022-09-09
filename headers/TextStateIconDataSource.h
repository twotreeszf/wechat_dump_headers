//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYModel-Protocol.h"

@class NSArray, NSMapTable, NSString, TextStateIconCategory;

@interface TextStateIconDataSource : NSObject <YYModel>
{
    NSArray *_categoryArray;
    NSString *_version;
    NSString *_sourcePath;
    TextStateIconCategory *_otherIcons;
    NSMapTable *_totalIconMapTable;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)FromXML:(id)arg1;
+ (id)FromResourcePath:(id)arg1;
+ (id)FromAPPBundle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *totalIconMapTable; // @synthesize totalIconMapTable=_totalIconMapTable;
@property(retain, nonatomic) TextStateIconCategory *otherIcons; // @synthesize otherIcons=_otherIcons;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
- (id)iconWrapForId:(id)arg1;
- (_Bool)isResourceValid;
- (id)effectSourceCopy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

