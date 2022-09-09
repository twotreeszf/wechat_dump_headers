//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILBSLifeMgrExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"

@class CLLocation, NSArray, NSString, WCFinderBaseCgi, WCFinderExtReadingInfoModel, WCFinderReportPostStateModel, WCLocationInfo;
@protocol WCFinderPostViewModelDelegate;

@interface WCFinderPostViewModel : NSObject <ILBSLifeMgrExt, ILocationMgrExt>
{
    unsigned long long _geoTag;
    _Bool _dynamicSwitchRecommendTagViewShow;
    _Bool _enableAuthorInfoOnTopSwitch;
    _Bool _showCompletePOIInfo;
    unsigned long long _postTextMaxLimit;
    unsigned long long _tagNumber;
    unsigned long long _mentionNumber;
    double _authorInfoTopWidHeightRatio;
    WCFinderReportPostStateModel *_postInfoModel;
    NSArray *_GPSInfoArray;
    id <WCFinderPostViewModelDelegate> _delegate;
    WCLocationInfo *_poiInfo;
    WCFinderExtReadingInfoModel *_extReadingInfo;
    NSArray *_extensionLinkAllowedList;
    CLLocation *_lastUserLocation;
    WCFinderBaseCgi *_parseExtCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBaseCgi *parseExtCgi; // @synthesize parseExtCgi=_parseExtCgi;
@property(retain, nonatomic) CLLocation *lastUserLocation; // @synthesize lastUserLocation=_lastUserLocation;
@property(retain, nonatomic) NSArray *extensionLinkAllowedList; // @synthesize extensionLinkAllowedList=_extensionLinkAllowedList;
@property(retain, nonatomic) WCFinderExtReadingInfoModel *extReadingInfo; // @synthesize extReadingInfo=_extReadingInfo;
@property(nonatomic) _Bool showCompletePOIInfo; // @synthesize showCompletePOIInfo=_showCompletePOIInfo;
@property(retain, nonatomic) WCLocationInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(nonatomic) __weak id <WCFinderPostViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *GPSInfoArray; // @synthesize GPSInfoArray=_GPSInfoArray;
@property(retain, nonatomic) WCFinderReportPostStateModel *postInfoModel; // @synthesize postInfoModel=_postInfoModel;
@property(nonatomic) double authorInfoTopWidHeightRatio; // @synthesize authorInfoTopWidHeightRatio=_authorInfoTopWidHeightRatio;
@property(nonatomic) _Bool enableAuthorInfoOnTopSwitch; // @synthesize enableAuthorInfoOnTopSwitch=_enableAuthorInfoOnTopSwitch;
@property(nonatomic) unsigned long long mentionNumber; // @synthesize mentionNumber=_mentionNumber;
@property(nonatomic) unsigned long long tagNumber; // @synthesize tagNumber=_tagNumber;
@property(nonatomic) _Bool dynamicSwitchRecommendTagViewShow; // @synthesize dynamicSwitchRecommendTagViewShow=_dynamicSwitchRecommendTagViewShow;
@property(nonatomic) unsigned long long postTextMaxLimit; // @synthesize postTextMaxLimit=_postTextMaxLimit;
- (id)getExtReadingRecommendContent;
- (id)getExtReadingSelectedContent;
- (void)clearDataItemExtReadingInfo;
- (void)updateDataItemExtReadingInfoWith:(id)arg1;
- (void)fetchExtTitleWithLink:(id)arg1 isFromPasteBoard:(_Bool)arg2 readingType:(unsigned long long)arg3;
- (void)updateSelectedLocationInfo:(id)arg1;
- (id)getPOIAddressDisplayContent;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)updateDataItemPOIInfo;
- (id)genWCLocationInfoWithLbsLife:(id)arg1;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)fetchUserLBSInfoByUserCacheGPS;
- (void)getInfoFromHistorySave;
- (void)dealloc;
- (void)updateExtensionLinkAllowedList;
- (id)initWithPostInfoModel:(id)arg1 GPSInfoArrayOfAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

