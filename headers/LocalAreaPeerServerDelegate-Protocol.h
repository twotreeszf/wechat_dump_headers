//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol LocalAreaPeerServerDelegate <NSObject>

@optional
- (void)onPeerDisconnect;
- (void)onPeerConnected;
- (void)onPeerConnecting;
- (void)onPeerReceiveData:(NSData *)arg1;
@end

