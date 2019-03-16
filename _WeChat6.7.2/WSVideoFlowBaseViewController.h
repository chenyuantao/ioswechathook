//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CMobileSIMTypeExt.h"
#import "CNetworkStatusExt.h"
#import "ForwardMessageLogicDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommitViewResultDelegate.h"
#import "WSVideoFlowFeedBackDelegate.h"

@class CMessageWrap, FTSWebSearchMgr, ForwardMessageLogicController, NSString, UITapGestureRecognizer, WCDataItem, WSVideoFlowDataLogic, WSVideoFlowFeedBackViewController, WSVideoModel;

@interface WSVideoFlowBaseViewController : MMUIViewController <WCActionSheetDelegate, WCCommitViewResultDelegate, ForwardMessageLogicDelegate, WSVideoFlowFeedBackDelegate, CNetworkStatusExt, CMobileSIMTypeExt>
{
    FTSWebSearchMgr *_webSearchMgr;
    WSVideoFlowDataLogic *_dataLogic;
    WSVideoFlowFeedBackViewController *_feedBackPopupController;
    _Bool _isMuted;
    WSVideoModel *_sharingVideoModel;
    ForwardMessageLogicController *_forwardMsgLogic;
    UITapGestureRecognizer *_navTapGesture;
    _Bool _bForbidSeekTolerance;
    WCDataItem *_srcSnsItem;
    CMessageWrap *_srcMsgWrap;
    NSString *_contentTitle;
}

+ (id)GenerateVideoFlowWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) _Bool bForbidSeekTolerance; // @synthesize bForbidSeekTolerance=_bForbidSeekTolerance;
@property(readonly, nonatomic) WSVideoFlowFeedBackViewController *feedBackPopupController; // @synthesize feedBackPopupController=_feedBackPopupController;
@property(readonly, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(readonly, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(readonly, nonatomic) WSVideoFlowDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(retain, nonatomic) CMessageWrap *srcMsgWrap; // @synthesize srcMsgWrap=_srcMsgWrap;
@property(retain, nonatomic) WCDataItem *srcSnsItem; // @synthesize srcSnsItem=_srcSnsItem;
- (void).cxx_destruct;
- (_Bool)isSupportVideoInsert;
- (void)judgeWKToastSameDayLogic;
- (void)judgeWKLogic;
- (void)didWKTypeChangeTo:(int)arg1 reason:(int)arg2;
- (_Bool)isOnDawangEnv;
- (void)onSystemVolumeChanged:(id)arg1;
- (void)onSystemTerminate;
- (void)onSystemEnterForeground;
- (void)onSystemEnterBackground;
- (void)MobileWKTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)MobileSIMTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)launchTagVideoFlow:(id)arg1 withTagInfo:(id)arg2;
- (void)launchWebView:(id)arg1;
- (void)onWSVideoFeedBackConfirm:(id)arg1 reasons:(id)arg2;
- (void)onWSVideoFeedBackClose;
- (void)handleFeedbackClick:(id)arg1 refFrame:(struct CGRect)arg2;
- (void)handleTitleClick:(id)arg1;
- (void)handleTagClick:(id)arg1 videoModel:(id)arg2;
- (void)handleLikeClick:(id)arg1 isLike:(_Bool)arg2;
- (void)handleSourceClick:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (id)genUploadTask:(id)arg1;
- (void)shareToTimeline;
- (void)shareToFriend;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleShare:(id)arg1;
- (_Bool)isFromShare;
- (void)configRigthBarButton;
- (void)updateMuteBtn;
- (void)onNavigationMuteSwitch:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onTapNavItem:(id)arg1;
- (void)configNavigationBarItem;
- (void)showToast:(id)arg1;
- (void)closePopup;
- (void)setMuted:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillPush:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)doReportVideoClickWithRealSharer:(id)arg1 andTarget:(id)arg2 andScene:(unsigned int)arg3;
- (void)reportVideoExpose;
- (void)finishVideoPlayReport;
- (void)switchToWangka:(_Bool)arg1;
- (void)showWangkaToast;
- (void)didSimTypeChangeToDaWangKaForReason:(int)arg1;
- (void)didSimTypeChangeTo:(int)arg1 reason:(int)arg2;
- (void)breakDeepPlayingVideoMode;
- (void)tapNavigationTitle;
- (void)didVideoFeedBackConfirmWithReasons:(id)arg1;
- (void)notifyVideoPlayMuteChange;
- (void)resetCurrentVideo;
- (void)resumeCurrentVideo;
- (void)pauseCurrentVideo;
- (void)didNetworkChange;
- (id)getThumbData:(id)arg1;
- (_Bool)isVideoPlaying;
- (id)currentVideoModel;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

