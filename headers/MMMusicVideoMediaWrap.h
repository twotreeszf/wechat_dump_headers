//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPlayerHttpMediaWrap.h"

@class NSString;

@interface MMMusicVideoMediaWrap : WCPlayerHttpMediaWrap
{
    NSString *_url;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithUrl:(id)arg1;
- (id)getMediaWrapUrl;
- (id)getMediaWrapIdentifier;

@end

