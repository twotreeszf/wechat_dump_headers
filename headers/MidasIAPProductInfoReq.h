//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MidasIAPBaseReq.h"

@class NSMutableSet;

@interface MidasIAPProductInfoReq : MidasIAPBaseReq
{
    _Bool _useCache;
    NSMutableSet *_productIds;
}

@property(readonly, nonatomic) NSMutableSet *productIds; // @synthesize productIds=_productIds;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
- (void).cxx_destruct;
- (_Bool)validateParams;
- (id)init;

@end

