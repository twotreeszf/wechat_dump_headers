//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WSVideoDotDetail;

@interface WSVideoDotInfo : NSObject
{
    _Bool _hasClosedDotView;
    unsigned int _bizuin;
    unsigned long long _dotId;
    WSVideoDotDetail *_dotItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasClosedDotView; // @synthesize hasClosedDotView=_hasClosedDotView;
@property(retain, nonatomic) WSVideoDotDetail *dotItem; // @synthesize dotItem=_dotItem;
@property(nonatomic) unsigned long long dotId; // @synthesize dotId=_dotId;
@property(nonatomic) unsigned int bizuin; // @synthesize bizuin=_bizuin;

@end

