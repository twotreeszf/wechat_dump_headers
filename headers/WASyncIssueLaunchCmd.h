//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASyncBaseCmd.h"

@class NSMutableArray, NSString;

@interface WASyncIssueLaunchCmd : WASyncBaseCmd
{
    unsigned int _useBeginTime;
    unsigned int _useEndTime;
    NSString *_launchInfoString;
    NSMutableArray *_sceneList;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int useEndTime; // @synthesize useEndTime=_useEndTime;
@property(nonatomic) unsigned int useBeginTime; // @synthesize useBeginTime=_useBeginTime;
@property(retain, nonatomic) NSMutableArray *sceneList; // @synthesize sceneList=_sceneList;
@property(copy, nonatomic) NSString *launchInfoString; // @synthesize launchInfoString=_launchInfoString;
- (id)description;

@end

