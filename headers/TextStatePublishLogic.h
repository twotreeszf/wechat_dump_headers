//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCCgiBlockHelper;
@protocol TextStatePublishLogicDelegate;

@interface TextStatePublishLogic : NSObject
{
    id <TextStatePublishLogicDelegate> _delegate;
    WCCgiBlockHelper *_cgiBlockHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *cgiBlockHelper; // @synthesize cgiBlockHelper=_cgiBlockHelper;
@property(nonatomic) __weak id <TextStatePublishLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)callFailureDelegateWithErrorMessage:(id)arg1 tid:(id)arg2;
- (void)callSuccessDelegateWithTid:(id)arg1;
- (void)publishTextState:(id)arg1 contactBlackList:(id)arg2 tid:(id)arg3;

@end

