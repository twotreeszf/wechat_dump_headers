//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFinderContact, WCFinderLiveShareItem;

@interface WCFinderLiveConnectInviteEntranceViewModel : NSObject
{
    WCFinderLiveShareItem *_shareItem;
    WCFinderContact *_otherContact;
    WCFinderContact *_selfContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *selfContact; // @synthesize selfContact=_selfContact;
@property(retain, nonatomic) WCFinderContact *otherContact; // @synthesize otherContact=_otherContact;
@property(retain, nonatomic) WCFinderLiveShareItem *shareItem; // @synthesize shareItem=_shareItem;
- (id)selfAuthDesc;
- (id)selfAuthImage;
- (id)selfNickname;
- (id)selfAvatarURL;
- (id)otherAuthImage;
- (id)otherNickname;
- (id)otherAvatarURL;
- (void)createLivePrepareSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithFinderLiveShareItem:(id)arg1;

@end
