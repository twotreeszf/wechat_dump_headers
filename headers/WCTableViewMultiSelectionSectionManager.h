//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTableViewSectionManager.h"

@class NSMutableArray;

@interface WCTableViewMultiSelectionSectionManager : WCTableViewSectionManager
{
    id <WCTableViewMultiSelectionSectionManagerDelegate> _delegate;
    NSMutableArray *_selectedRows;
}

@property(retain, nonatomic) NSMutableArray *selectedRows; // @synthesize selectedRows=_selectedRows;
@property(nonatomic) __weak id <WCTableViewMultiSelectionSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCells:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
- (id)init;
- (void)addSelectionCell:(id)arg1;

@end
