//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AudioDataRead-Protocol.h"

@class NSData, NSString;

@interface AudioData : NSObject <AudioDataRead>
{
    NSData *_m_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data=_m_data;
- (unsigned int)getLength;
- (_Bool)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

