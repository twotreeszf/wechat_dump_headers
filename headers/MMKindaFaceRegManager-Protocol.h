//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMVoidBoolStringI32StringCallback, MMVoidCallback, NSString;

@protocol MMKindaFaceRegManager <NSObject>
- (void)startFaceImpl:(int)arg1 strPackage:(NSString *)arg2 strPackageSign:(NSString *)arg3 finishCallback:(MMVoidBoolStringI32StringCallback *)arg4 cancelCallback:(MMVoidCallback *)arg5 otherVerifyTitle:(NSString *)arg6;
@end

