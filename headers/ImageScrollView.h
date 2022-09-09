//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "FullScreenGestureDelegate-Protocol.h"
#import "MMImageScrollViewHelperDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMImageScrollViewHelper, MMUIActivityIndicatorView, NSArray, NSString, UIImageView, WXFullScreenGestureRecognizer;
@protocol ImageScrollViewDelegate;

@interface ImageScrollView : MMUIScrollView <FullScreenGestureDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    UIImageView *imageView;
    MMUIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    _Bool m_bIsLongPressHandled;
    _Bool disableDragToResize;
    WXFullScreenGestureRecognizer *m_gesture;
    struct CGSize m_originSize;
    _Bool _useWindowFrame;
    id <ImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useWindowFrame; // @synthesize useWindowFrame=_useWindowFrame;
@property __weak id <ImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)shouldPreventDragDownCloseGesture;
- (double)screenHeight;
- (double)screenWidth;
- (id)getImageView;
- (id)getImage;
- (void)updateImage:(id)arg1;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)dealloc;
- (void)updateScrollable;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2 CornerRadius:(double)arg3;
- (void)reloadView:(id)arg1 FullScreen:(_Bool)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)getScrollView;
- (id)viewForZooming;
- (struct CGPoint)gestureBeginPoint;
- (void)disableScrollViewDragToResize;
@property(nonatomic) _Bool enableDragToClose;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)setOriginSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) double zoomScale;

@end

