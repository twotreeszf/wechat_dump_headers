//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebTransNode : NSObject
{
    _Bool _isNodeInFirstScreen;
    _Bool _isTitle;
    NSString *_hashCode;
    NSString *_orgText;
    NSString *_transText;
    NSString *_brand;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTitle; // @synthesize isTitle=_isTitle;
@property(nonatomic) _Bool isNodeInFirstScreen; // @synthesize isNodeInFirstScreen=_isNodeInFirstScreen;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *transText; // @synthesize transText=_transText;
@property(copy, nonatomic) NSString *orgText; // @synthesize orgText=_orgText;
@property(copy, nonatomic) NSString *hashCode; // @synthesize hashCode=_hashCode;

@end

