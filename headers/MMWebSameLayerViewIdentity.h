//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMWebSameLayerViewIdentity : NSObject
{
    NSDictionary *m_dict;
}

- (void).cxx_destruct;
- (id)description;
- (double)maxDiff;
- (struct CGRect)targetFrame;
- (_Bool)isSameView:(struct CGRect)arg1;
- (unsigned int)viewId;
- (_Bool)checkData;
- (id)initWithDict:(id)arg1;

@end
