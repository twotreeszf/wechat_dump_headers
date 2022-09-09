//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "GameVideoAlbumControllerDelegate-Protocol.h"
#import "IWebviewResourceManagerExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"

@class NSMutableArray, NSString, UINavigationController;

@interface WebviewJSEventHandler_chooseHaowanMedia : WebviewJSEventHandlerBase <MMImagePickerManagerDelegate, GameVideoAlbumControllerDelegate, IWebviewResourceManagerExt>
{
    NSMutableArray *_localIds;
    unsigned long long _totalCount;
    UINavigationController *_startViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *startViewController; // @synthesize startViewController=_startViewController;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (void)trackEventChooseMediaCancel;
- (void)trackEventChooseMediaExplosure;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)handlePickingImageWithInfo:(id)arg1;
- (void)callbackWithVideoInfo:(id)arg1 extra:(id)arg2;
- (void)callbackCanceled;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)showImageAndVideoEditor:(unsigned long long)arg1;
- (void)showVideoEditor;
- (void)showImageEditor:(unsigned long long)arg1;
- (void)showAssetPicker:(id)arg1;
- (void)videoAlbumControllerDidExit:(id)arg1;
- (void)showGameVideoAlbum:(long long)arg1 params:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

