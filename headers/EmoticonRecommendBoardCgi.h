//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSArray, NSData, NSString;
@protocol EmoticonRecommendBoardCgiDelegate;

@interface EmoticonRecommendBoardCgi : StoreEmotionBaseCgi
{
    unsigned int _startTime;
    NSString *_queryString;
    NSString *_chatId;
    NSString *_sessionId;
    unsigned long long _scene;
    id <EmoticonRecommendBoardCgiDelegate> _delegate;
    NSArray *_recommendWraps;
    NSArray *_contexts;
    NSData *_pageBuffer;
    NSData *_localEmoji;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSData *localEmoji; // @synthesize localEmoji=_localEmoji;
@property(retain, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSArray *recommendWraps; // @synthesize recommendWraps=_recommendWraps;
@property(nonatomic) __weak id <EmoticonRecommendBoardCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *chatId; // @synthesize chatId=_chatId;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)doReportWithErrorCode:(int)arg1 isExpired:(_Bool)arg2;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (void)stopRequest;
- (_Bool)startRequest;
- (_Bool)canStartRequest;
- (id)initWithQueryString:(id)arg1 scene:(unsigned long long)arg2 sessionId:(id)arg3 localEmoji:(id)arg4;
- (id)initWithQueryString:(id)arg1 scene:(unsigned long long)arg2 chatId:(id)arg3 sessionId:(id)arg4 contexts:(id)arg5;

@end
