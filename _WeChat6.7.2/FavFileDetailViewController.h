//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "IFavoritesExt.h"
#import "INetworkStatusMgrExt.h"
#import "ImageScrollViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WKNavigationDelegate.h"

@class FavDataItemWrap, FavForwardLogicController, FavoritesBrowseDetailReportData, FavoritesItem, FavoritesItemDataField, ImageScrollView, MMProgressView, NSString, UIButton, UIDocumentInteractionController, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface FavFileDetailViewController : FavMMUIViewController <WKNavigationDelegate, UIAlertViewDelegate, INetworkStatusMgrExt, IFavoritesExt, ImageScrollViewDelegate, FavForwardLogicDelegate, WCActionSheetDelegate, UIScrollViewDelegate, UIDocumentInteractionControllerDelegate>
{
    FavoritesItem *m_favItem;
    FavDataItemWrap *m_favDataWrap;
    FavoritesItemDataField *m_favData;
    UIImageView *m_imageView;
    UILabel *m_labFileName;
    MMProgressView *m_progressBar;
    UILabel *m_labProgress;
    UIButton *m_btnFileOpen;
    UIButton *m_btnOpenByApp;
    UILabel *m_labelSyncTip;
    UIButton *m_labelSync;
    ImageScrollView *m_imgPreview;
    UIDocumentInteractionController *m_vcDocument;
    int syncStautus;
    _Bool m_bIsUnkownType;
    NSString *m_nsDataPath;
    NSString *m_nsFileName;
    unsigned int m_uiFileSize;
    unsigned int m_uiFileType;
    _Bool m_bFileExit;
    _Bool m_bIsNaviBarHide;
    _Bool m_bIsDisableTapRec;
    struct CGPoint m_lastContentOffset;
    UITapGestureRecognizer *m_singleTapRec;
    UITapGestureRecognizer *m_doubleTabRec;
    UIView *vPreview;
    FavForwardLogicController *m_favForwardController;
    id <FavFileDetailDelegate> m_delegate;
    NSString *m_tmpFilePath;
    FavoritesBrowseDetailReportData *_reportData;
}

@property(retain, nonatomic) FavoritesBrowseDetailReportData *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) __weak id <FavFileDetailDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)sessionId;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)getFavForawrdViewController;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)updateRightBtn;
- (void)onFavTagEditBegin:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAction:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)OnFavoritesItemStartAsyncUpload:(id)arg1;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)OnUploadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)OnFavoritesItemDownloadFinished:(id)arg1 ErrCode:(int)arg2;
- (void)OnDownloadFavoritesItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)SetProgress:(double)arg1 TotalSize:(double)arg2;
- (void)StopSync;
- (void)StartSync;
- (void)OpenByApp;
- (void)OpenFile;
- (void)showSyncComplete;
- (void)showDownloading;
- (void)showUploading;
- (void)showNeedDownload;
- (void)showNeedUpload;
- (void)showIllegal;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)resetPdfViewFrame;
- (_Bool)hasPdfView;
- (void)setNaviBarHide:(_Bool)arg1 animation:(_Bool)arg2;
- (void)updateBtns;
- (void)updateStatus;
- (void)initView;
- (void)updateData;
- (void)updateWebScrollViewInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)SafeDeleteDocument;
- (void)dealloc;
- (id)initWithFavDataWrap:(id)arg1;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

