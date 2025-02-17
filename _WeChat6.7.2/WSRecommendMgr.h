//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFunctionMsgExt.h"
#import "MMService.h"
#import "WSLocalWebViewControllerDelegate.h"

@class MMTimer, NSMutableDictionary, NSString, WSLocalWebViewController, WSRecommendSetting;

@interface WSRecommendMgr : MMService <WSLocalWebViewControllerDelegate, IFunctionMsgExt, MMService>
{
    _Bool _isVisitingWebPage;
    WSLocalWebViewController *_sharedPage;
    WSRecommendSetting *_setting;
    MMTimer *_timer;
    NSMutableDictionary *_dicWrdCache;
}

+ (_Bool)IsSupportTopStoryPlugin;
@property(retain, nonatomic) NSMutableDictionary *dicWrdCache; // @synthesize dicWrdCache=_dicWrdCache;
@property(nonatomic) _Bool isVisitingWebPage; // @synthesize isVisitingWebPage=_isVisitingWebPage;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) WSRecommendSetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) WSLocalWebViewController *sharedPage; // @synthesize sharedPage=_sharedPage;
- (void).cxx_destruct;
- (_Bool)confirmFullDragTips;
- (_Bool)updateWSCacheByAddFilterId:(id)arg1 category:(unsigned int)arg2;
- (_Bool)removeFirstPageCacheForCategory:(unsigned int)arg1;
- (void)updateFirstPageCache:(id)arg1 directShowInterval:(unsigned int)arg2 autoRefreshInterval:(unsigned int)arg3 category:(unsigned int)arg4 docList:(id)arg5;
- (id)getValidFirstPageCacheForCategory:(unsigned int)arg1;
- (id)getValidMainTimeLineFirstPageCache;
- (_Bool)isSupportFirstPageCache;
- (void)logCacheInfo;
- (int)getHitTypeWhenEnterWithVCType:(int)arg1;
- (void)reportPreviewWebviewAction:(id)arg1;
- (void)onForbidCacheWSLocalWebView;
- (void)onWSLocalWebViewReturn:(id)arg1 cache:(_Bool)arg2;
- (_Bool)isPluginNotify;
- (_Bool)isPluginInstall;
- (void)onFunctionMsgResponse:(id)arg1 bussinessId:(id)arg2 functionMsgId:(id)arg3;
- (void)onFunctionMsgRequest:(id)arg1 bussinessId:(id)arg2 functionMsgId:(id)arg3;
- (id)generatePluginMsgRequestBuffer:(id)arg1;
- (_Bool)preloadSharedPageWebViewIfNeeded:(int)arg1;
- (void)onCloseSharedPageForTimeout;
- (void)beginLimitCacheSharePage;
- (void)unregisterSharedPage;
- (void)registerSharedPage:(id)arg1;
- (id)generatePushingSharedPage:(int)arg1 reddotId:(id)arg2 useLocalCache:(_Bool *)arg3 useParallel:(_Bool *)arg4;
- (id)generatePushingSharedPage:(int)arg1 useParallel:(_Bool *)arg2;
- (id)generateBaseSharedPage:(int)arg1;
- (void)cleanService;
- (_Bool)saveSetting;
- (_Bool)saveCache;
- (void)loadCache;
- (id)filePath;
- (id)settingPath;
- (id)fileDir;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

