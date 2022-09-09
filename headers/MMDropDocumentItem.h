//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSItemProviderReading-Protocol.h"

@class NSData, NSString;

@interface MMDropDocumentItem : NSObject <NSItemProviderReading>
{
    NSData *_data;
}

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 typeIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

