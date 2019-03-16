//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WSVideoFlowBaseViewController.h"

#import "ICdnComMgrExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WSVideoFlowDataDelegate.h"
#import "WSVideoPagingPlayerViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, MMUILabel, NSString, UIView, WCPlayerInfo, WCPlayerView, WCTimeLineFooterView, WSVideoFlowFeedBackViewController, WSVideoModel, WSVideoPagingPlayerView, WSVideoTagInfo;

@interface WSVideoFlowPagingViewController : WSVideoFlowBaseViewController <UITableViewDelegate, UITableViewDataSource, tableViewDelegate, WSVideoFlowDataDelegate, MMRefreshTableFooterDelegate, WSVideoPagingPlayerViewDelegate, ICdnComMgrExt>
{
    UIView *_navBarBkg;
    MMTableView *_tableView;
    MMUILabel *_mainTagTitle;
    WSVideoModel *_initVideoModel;
    WCTimeLineFooterView *_footerView;
    _Bool _startCustomMgrRetreiveLocation;
    _Bool _canAutoPlay;
    _Bool _bDisplayNoDefaultVideo;
    _Bool _hasLoadFirstPage;
    _Bool _hasDidBePushed;
    _Bool _isSingleVideoPlay;
    WSVideoTagInfo *_initTagInfo;
    double _lastScrollTime;
    struct CGPoint _lastScrollOffset;
    double _titleViewPosY;
    int _cgiStatus;
    WSVideoFlowFeedBackViewController *_feedBackPopupController;
    long long _curVideoIndex;
    WCPlayerView *_playerView;
    WSVideoPagingPlayerView *_controlView;
    WCPlayerInfo *_playerInfo;
}

@property(retain, nonatomic) WCPlayerInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) WSVideoPagingPlayerView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) WCPlayerView *playerView; // @synthesize playerView=_playerView;
- (void).cxx_destruct;
- (_Bool)isCurrentCdnTaskId:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)resetVideoPlay;
- (void)playCurrentVideo;
- (void)refreshVideoPlay:(_Bool)arg1;
- (void)refreshVideoPlay;
- (void)configurePlayerView;
- (id)getPagingControlView;
- (void)notifyVideoPlayMuteChange;
- (void)didVideoFeedBackConfirmWithReasons:(id)arg1;
- (void)onClickFeedBackButton:(id)arg1 sender:(id)arg2;
- (void)onClickLike:(_Bool)arg1 sender:(id)arg2;
- (void)onClickSource:(id)arg1;
- (void)onClickShare:(id)arg1;
- (void)onClickTag:(id)arg1 sender:(id)arg2;
- (void)onClickTitle:(id)arg1;
- (void)tapNavigationTitle;
- (void)didNetworkChange;
- (void)resetCurrentVideo;
- (void)resumeCurrentVideo;
- (void)pauseCurrentVideo;
- (_Bool)isVideoPlaying;
- (id)currentVideoModel;
- (void)breakDeepPlayingVideoMode;
- (void)deepShowPlayingVideo;
- (void)delayToShowDeepPlayingMode:(double)arg1;
- (void)delayToShowDeepPlayingMode;
- (void)onPlayerViewResetAndPlay;
- (_Bool)canPlayNextVideo;
- (void)onPlayerViewReplayForUpdatedUrl;
- (_Bool)onPlayerViewUpdateVideoUrl:(id)arg1;
- (void)onPlayerViewPlayToEnd:(id)arg1;
- (void)onVideoPanGestureEndOrCancel:(id)arg1;
- (void)onVideoPanGestureBeginDrag:(id)arg1;
- (void)onPlayerViewClickToPlay;
- (void)onClickMaskViewPlayButton;
- (_Bool)canBeginPlayVideoUnderMobileNetwork;
- (void)onHideControlViews;
- (void)onShowControlViews;
- (void)onUpdatePrefetchFlag:(_Bool)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onTryResumeExpiredPlayer;
- (_Bool)onCheckCurrentVideoHandlingExpired;
- (void)onDefaultVideoUpdated;
- (void)onReturnFromWebRecommendVideo:(int)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)switchToWangka:(_Bool)arg1;
- (void)showWangkaToast;
- (_Bool)canPlayDefaultVideo;
- (void)viewDidLayoutSubviews;
- (id)getNormalTitle;
- (void)initNavigateItem;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGRect)getTitleFrame;
- (void)initView;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)fetchNextPage;
- (void)checkAndFetch;
- (_Bool)useTransparentNavibar;
- (void)initDataLogic:(id)arg1;
- (void)initCustomWebSearchMgr;
- (void)dealloc;
- (id)initWithVideoInfo:(id)arg1 webSearchMgr:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

