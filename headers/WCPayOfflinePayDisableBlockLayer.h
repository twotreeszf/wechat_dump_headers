//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSArray, NSString;

@interface WCPayOfflinePayDisableBlockLayer : NSObject <PBCoding>
{
    _Bool is_show;
    unsigned int block_layer_report_id;
    unsigned int action_type;
    NSString *tiny_app_username;
    NSString *tiny_app_path;
    NSString *url;
    NSArray *text_info_array;
}

+ (void)removeDisableBlockLayerData;
+ (_Bool)saveDisableBlockLayerData:(id)arg1;
+ (id)getLocalDisableBlockLayerData;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_text_info_array;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_tiny_app_path;
+ (void)PBArrayAdd_tiny_app_username;
+ (void)PBArrayAdd_action_type;
+ (void)PBArrayAdd_is_show;
+ (void)PBArrayAdd_block_layer_report_id;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *text_info_array; // @synthesize text_info_array;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSString *tiny_app_path; // @synthesize tiny_app_path;
@property(retain, nonatomic) NSString *tiny_app_username; // @synthesize tiny_app_username;
@property(nonatomic) unsigned int action_type; // @synthesize action_type;
@property(nonatomic) _Bool is_show; // @synthesize is_show;
@property(nonatomic) unsigned int block_layer_report_id; // @synthesize block_layer_report_id;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
