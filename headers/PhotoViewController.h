//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "BaseScanLogicDelegate-Protocol.h"
#import "IHttpCacheExt-Protocol.h"
#import "MultiImageScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCImageTranslateDelegate-Protocol.h"

@class MMUILabel, MultiImageScrollView, NSMutableArray, NSMutableDictionary, NSSet, NSString, ScanQRCodeLogicController, WCActionSheetWithScanWXCode, WCImageTranslateLogic;
@protocol PhotoViewControllerDelegate;

@interface PhotoViewController : WCDragToCloseViewController <BaseScanLogicDelegate, WCImageTranslateDelegate, MultiImageScrollViewDelegate, IHttpCacheExt, WCActionSheetDelegate>
{
    MultiImageScrollView *pagingScrollView;
    NSMutableArray *m_arrayImageUrl;
    _Bool m_bAnimating;
    _Bool m_isFromWebview;
    double _oldNavigationBarAlpha;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheetWithScanWXCode *m_actionSheet;
    NSString *m_appID;
    MMUILabel *_title;
    NSString *m_referer;
    WCImageTranslateLogic *_imgTranslateLogic;
    _Bool m_isDelayShowLongPressActionSheet;
    _Bool _isForbidForward;
    _Bool _isFromWeApp;
    _Bool _isFromSafariOr3rdApp;
    _Bool _needDistinguishGif;
    _Bool _isBanMenu;
    _Bool _shouldTranslateImmediately;
    unsigned int _webViewA8KeyScene;
    int _presetIndex;
    NSString *_relativeUrl;
    id <PhotoViewControllerDelegate> _delegate;
    NSString *_firstUrlString;
    NSString *_webViewUrlString;
    NSString *_fromBizUser;
    NSSet *_setScanQRCodeResultType;
    NSMutableDictionary *_presetImages;
    struct CGRect _tappedPhotoInWebViewPosition;
}

+ (id)imageFromCacheWithUrl:(id)arg1;
+ (id)imageDataFromCacheWithUrl:(id)arg1;
+ (id)genKeyForUrl:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int presetIndex; // @synthesize presetIndex=_presetIndex;
@property(retain, nonatomic) NSMutableDictionary *presetImages; // @synthesize presetImages=_presetImages;
@property(retain, nonatomic) NSSet *setScanQRCodeResultType; // @synthesize setScanQRCodeResultType=_setScanQRCodeResultType;
@property(nonatomic) struct CGRect tappedPhotoInWebViewPosition; // @synthesize tappedPhotoInWebViewPosition=_tappedPhotoInWebViewPosition;
@property(retain, nonatomic) NSString *fromBizUser; // @synthesize fromBizUser=_fromBizUser;
@property(nonatomic) unsigned int webViewA8KeyScene; // @synthesize webViewA8KeyScene=_webViewA8KeyScene;
@property(retain, nonatomic) NSString *webViewUrlString; // @synthesize webViewUrlString=_webViewUrlString;
@property(retain, nonatomic) NSString *firstUrlString; // @synthesize firstUrlString=_firstUrlString;
@property(nonatomic) __weak id <PhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *relativeUrl; // @synthesize relativeUrl=_relativeUrl;
@property(nonatomic) _Bool shouldTranslateImmediately; // @synthesize shouldTranslateImmediately=_shouldTranslateImmediately;
@property(nonatomic) _Bool isBanMenu; // @synthesize isBanMenu=_isBanMenu;
@property(nonatomic) _Bool needDistinguishGif; // @synthesize needDistinguishGif=_needDistinguishGif;
@property(nonatomic) _Bool isFromSafariOr3rdApp; // @synthesize isFromSafariOr3rdApp=_isFromSafariOr3rdApp;
@property(nonatomic) _Bool isFromWeApp; // @synthesize isFromWeApp=_isFromWeApp;
@property(nonatomic) _Bool isForbidForward; // @synthesize isForbidForward=_isForbidForward;
@property(readonly, nonatomic) NSString *referer; // @synthesize referer=m_referer;
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=m_appID;
@property(nonatomic) _Bool isFromWebview; // @synthesize isFromWebview=m_isFromWebview;
- (void)multiImageScrollViewDidEndDecelerating;
- (void)translateImageImmediately;
- (void)showTranslateImg:(id)arg1;
- (void)translateWordInImage;
- (void)detectWordInImage;
- (void)onShowTranslateImage:(id)arg1;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (id)getTranslateImgIdentifier:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)setTitle:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)onScanEnds;
- (void)reportWebviewImageActionWithActionSheet:(id)arg1 itemType:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)PreScanQRCode;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)addToFavorites;
- (void)forwardMessage;
- (void)onOperate;
- (_Bool)canAddImageToForward;
- (_Bool)canAddImageToFavorite;
- (_Bool)canAddImageToAlbum;
- (_Bool)canOperateImage;
- (void)onSavedPhotosAlbum;
- (void)onAnimationDidStop;
- (void)showFullScreen;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)showFullScreenAnimated:(_Bool)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onFullScreenItemDragCancel;
- (void)onFullScreenItemDragToClose;
- (void)onSingleTap:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(_Bool)arg4;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)tryGetResource:(id)arg1;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 referer:(id)arg4;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)addPresetImageForCurrentIndex:(id)arg1;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)onChangePage;
- (id)imageAtPage:(unsigned int)arg1;
- (id)imageWithData:(id)arg1;
- (id)imageDataAtPage:(unsigned int)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (_Bool)useCustomNavibar;
- (void)dealloc;
- (void)enterForeground;
- (void)onMainWindowFrameChanged;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillBeInteractivePoped;
- (_Bool)shouldInteractivePop;
- (void)initScrollView;
- (void)initNavigationBar;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillBePresented:(_Bool)arg1;
- (_Bool)hidesStatusBar;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)handleViewWillBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)hideStatusBar;
- (void)showStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

