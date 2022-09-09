//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class FavoritesTagDB, NSMutableArray, NSString;
@protocol FavoritesTagMgrDelegate;

@interface FavoritesTagMgr : MMObject <PBMessageObserverDelegate>
{
    FavoritesTagDB *_favTagDB;
    NSMutableArray *m_tagEditingItems;
    NSString *m_editingTag;
    NSString *m_newTag;
    CDUnknownBlockType m_tagEditHandler;
    id <FavoritesTagMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavoritesTagMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateTagInList:(id)arg1;
- (void)updateTagInFavItem:(id)arg1;
- (void)startBatchUpdateTag;
- (void)updateTag:(id)arg1 with:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)getItemTags:(unsigned int)arg1;
- (id)getAllTags;
- (void)updateItemTags:(id)arg1 byFavLocalId:(unsigned int)arg2;
- (void)deleteItemTagsByFavLocalId:(unsigned int)arg1;
- (void)initDB:(id)arg1;
- (id)init;

@end

