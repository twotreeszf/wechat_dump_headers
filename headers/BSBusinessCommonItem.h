//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BusinessActionInfo, BusinessDetailInfo, BusinessExtendInfo, NSString;

@interface BSBusinessCommonItem : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_thumbUrl;
    BusinessDetailInfo *_detailInfo;
    BusinessExtendInfo *_extendInfo;
    BusinessActionInfo *_actionInfo;
}

+ (id)fromServerObj:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BusinessActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) BusinessExtendInfo *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;

@end

