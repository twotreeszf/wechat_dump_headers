//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;

@interface EmoticonSharedItem : NSObject <PBCoding, NSCopying>
{
    unsigned int m_packType;
    NSString *m_productId;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_productId;
+ (void)PBArrayAdd_m_packType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_productId; // @synthesize m_productId;
@property(nonatomic) unsigned int m_packType; // @synthesize m_packType;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

