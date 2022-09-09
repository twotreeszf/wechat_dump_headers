//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAJSContextPlugin_NativeViewsRootViewProtocol-Protocol.h"

@class NSString, UIToolbar, WAJSContextPlugin_NativeViewsComponent;

@interface WANativeKeyboardAccessoryView : UIView <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    WAJSContextPlugin_NativeViewsComponent *_component;
    UIToolbar *_toolbar;
}

- (void).cxx_destruct;
- (void)addToolbarToView:(id)arg1;
- (void)removeToolBarFromView;
- (void)setToolBar:(id)arg1;
- (id)component;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (void)changetoHeight:(double)arg1;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

