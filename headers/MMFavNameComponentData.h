//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMComponentData.h"

@class FavoritesItem, NSArray, NSString, UIImage;

@interface MMFavNameComponentData : MMComponentData
{
    _Bool bShowDataSize;
    unsigned int _m_uiFavUpDateTime;
    NSString *m_nameId;
    NSString *m_fromUsr;
    NSString *m_brand;
    NSString *m_toUsr;
    NSString *m_realChatName;
    long long favType;
    long long dataSize;
    FavoritesItem *item;
    NSArray *_tagList;
    UIImage *_logoImage;
    NSString *_m_nameTailContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nameTailContent; // @synthesize m_nameTailContent=_m_nameTailContent;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) unsigned int m_uiFavUpDateTime; // @synthesize m_uiFavUpDateTime=_m_uiFavUpDateTime;
@property(retain, nonatomic) FavoritesItem *item; // @synthesize item;
@property(nonatomic) _Bool bShowDataSize; // @synthesize bShowDataSize;
@property(nonatomic) long long dataSize; // @synthesize dataSize;
@property(nonatomic) long long favType; // @synthesize favType;
@property(retain, nonatomic) NSString *m_realChatName; // @synthesize m_realChatName;
@property(retain, nonatomic) NSString *m_toUsr; // @synthesize m_toUsr;
@property(retain, nonatomic) NSString *m_brand; // @synthesize m_brand;
@property(retain, nonatomic) NSString *m_fromUsr; // @synthesize m_fromUsr;
@property(retain, nonatomic) NSString *m_nameId; // @synthesize m_nameId;

@end

