//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface VoiceAutoTransReporter : NSObject
{
    unsigned int _userScollCount;
    int _transEndType;
    NSMutableSet *_voiceIds;
}

- (void).cxx_destruct;
@property(nonatomic) int transEndType; // @synthesize transEndType=_transEndType;
@property(retain, nonatomic) NSMutableSet *voiceIds; // @synthesize voiceIds=_voiceIds;
@property(nonatomic) unsigned int userScollCount; // @synthesize userScollCount=_userScollCount;
- (void)report;
- (void)addVoiceIdWithMsg:(id)arg1;
- (void)userDidScroll;
- (id)init;

@end

