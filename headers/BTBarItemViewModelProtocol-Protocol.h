//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BTBaseBarItemView, NSString;

@protocol BTBarItemViewModelProtocol <NSObject>
+ (NSString *)itemViewClassName;
@property(nonatomic) __weak BTBaseBarItemView *barItemView;
@property(nonatomic) _Bool hasLine;
@property(readonly, nonatomic) _Bool hasArrow;
@property(readonly, nonatomic) _Bool hasGreenDot;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headImgUrl;
@end

