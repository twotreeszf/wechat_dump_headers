//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCStoryBubble : MMObject <PBCoding>
{
    NSString *tid;
    NSString *username;
    long long bubbleColor;
}

+ (id)storyBubbleFromServerObj:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_bubbleColor;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(nonatomic) long long bubbleColor; // @synthesize bubbleColor;
@property(retain, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
