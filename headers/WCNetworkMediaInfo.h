//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;
@protocol WCNetworkMediaInfoDelegate;

@interface WCNetworkMediaInfo : MMObject <PBMessageObserverDelegate>
{
    WCNetworkMediaInfo *weakSelf;
    int _source;
    NSString *_vid;
    id <WCNetworkMediaInfoDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCNetworkMediaInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)onError:(int)arg1;
- (void)getInfoFromTXVideo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startGetVideoInfo;
- (void)setH5URL:(id)arg1;
- (id)init;

@end

