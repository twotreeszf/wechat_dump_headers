//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol IWCFinderIntentDelegate;

@protocol IWCFinderIntentDelegate <NSObject>
- (NSString *)hashIntent;

@optional
- (_Bool)clearIntent;
- (_Bool)bindPreviousIntent:(id <IWCFinderIntentDelegate>)arg1;
- (id)traceValByKey:(NSString *)arg1;
- (id)getValByKey:(NSString *)arg1;
- (void)putKey:(NSString *)arg1 andVal:(id)arg2;
@end

