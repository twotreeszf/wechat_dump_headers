//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol InternalTransferTaskDelegate;

@interface InternalTransferTask : NSObject
{
    id <InternalTransferTaskDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <InternalTransferTaskDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)startTask;

@end

