//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray, UIImage;

@interface WAHeaderStackDisplayView : MMUIView
{
    double _coverGap;
    double _headerSize;
    UIImage *_defaultImage;
    NSMutableArray *_headerViews;
    NSMutableArray *_layers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) double headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) double coverGap; // @synthesize coverGap=_coverGap;
- (void)orderHeaderViews;
- (void)resetHeaderViewsPosition;
- (void)fitHeaderViewCount:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)fillWithHeaderImageUrls:(id)arg1 animated:(_Bool)arg2;
- (double)getHeight;
- (double)getWidth;
- (id)initWithHeaderSize:(double)arg1;
- (id)init;

@end

