//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayRemarkPageSheetConfig : NSObject
{
    unsigned int _maxInputLength;
    NSString *_title;
    NSString *_placeHolder;
    NSString *_currentContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentContent; // @synthesize currentContent=_currentContent;
@property(nonatomic) unsigned int maxInputLength; // @synthesize maxInputLength=_maxInputLength;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end
