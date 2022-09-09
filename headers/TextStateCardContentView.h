//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TextStateDetailContentViewDelegate-Protocol.h"

@class CContact, NSString, TextStateDetailContentView, TextStateMediaView;
@protocol TextStateCardContentViewDelegate;

@interface TextStateCardContentView : UIView <TextStateDetailContentViewDelegate>
{
    id <TextStateCardContentViewDelegate> _delegate;
    CContact *_contact;
    TextStateMediaView *_backgroundMediaView;
    TextStateDetailContentView *_textStateDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TextStateDetailContentView *textStateDetailView; // @synthesize textStateDetailView=_textStateDetailView;
@property(retain, nonatomic) TextStateMediaView *backgroundMediaView; // @synthesize backgroundMediaView=_backgroundMediaView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak id <TextStateCardContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectAtTextDetailView:(id)arg1;
- (void)didSelectSourceButton:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeToFitWidth:(double)arg1;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

