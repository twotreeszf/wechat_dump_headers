//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSnsABTestTitle : NSObject
{
    NSString *showTitleFormat;
    _Bool hasUserNameKey;
    _Bool hasSexKey;
    NSString *maleKey;
    NSString *femailKey;
    NSString *defaultSexKey;
    NSString *richTextKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *richTextKey; // @synthesize richTextKey;
- (id)getShowTitle:(id)arg1;
- (_Bool)tryParseTitleFormat:(id)arg1;
- (_Bool)parseTitleFormat:(id)arg1 priorTitleFormat:(id)arg2;
- (id)description;
- (id)init;

@end

