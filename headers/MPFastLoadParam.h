//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPFastLoadParam : NSObject
{
    _Bool _hasItemShowType;
    unsigned int _itemShowType;
    unsigned int _enterType;
    NSString *_urlForReport;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *urlForReport; // @synthesize urlForReport=_urlForReport;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
- (id)description;

@end

