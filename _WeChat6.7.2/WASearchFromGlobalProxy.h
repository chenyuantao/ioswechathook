//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IWSViewControllerLifeCycleExt.h"
#import "UIScrollViewDelegate.h"
#import "WAAppCanvasWrapperViewDelegate.h"
#import "WASearchActionDelegate.h"
#import "WAWidgetJSEventHandlerDelegate.h"

@class MMUIViewController, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, WASearchResultLogic;

@interface WASearchFromGlobalProxy : NSObject <WASearchActionDelegate, UIScrollViewDelegate, WAAppCanvasWrapperViewDelegate, IWSViewControllerLifeCycleExt, WAWidgetJSEventHandlerDelegate>
{
    NSDictionary *_initParams;
    MMUIViewController *_containerController;
    int _webviewCount;
    _Bool _webViewDidRegisterScrollNotify;
    double _webViewScrollNotifyDiffHeight;
    double _lastOffsetY;
    id <WASearchFromGlobalProxyDelegate> _delegate;
    WASearchResultLogic *_searchResultLogic;
    NSMutableDictionary *_widgetViewCache;
    NSMutableArray *_eventHandlerList;
}

@property(retain, nonatomic) NSMutableArray *eventHandlerList; // @synthesize eventHandlerList=_eventHandlerList;
@property(retain, nonatomic) NSMutableDictionary *widgetViewCache; // @synthesize widgetViewCache=_widgetViewCache;
@property(retain, nonatomic) WASearchResultLogic *searchResultLogic; // @synthesize searchResultLogic=_searchResultLogic;
@property(nonatomic) __weak id <WASearchFromGlobalProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onWAWidgetJSEventHandler:(id)arg1 wrapperView:(id)arg2 endWithResult:(id)arg3;
- (void)onWrapperView:(id)arg1 showDatePickerView:(id)arg2;
- (void)onWrapperView:(id)arg1 showPickerView:(id)arg2;
- (void)onWrapperView:(id)arg1 dataUpdated:(id)arg2;
- (void)onWrapperView:(id)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onWrapperView:(id)arg1 authorizeSuccess:(id)arg2;
- (void)onWrapperView:(id)arg1 openApp:(id)arg2;
- (void)onWrapperView:(id)arg1 updateHeight:(double)arg2;
- (void)onWidgetClearCrashProtectCount:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onCGISearchWithParams:(id)arg1;
- (void)onLaunchBrandProfile:(id)arg1;
- (void)onLaunchWebView:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onRegisterWebViewDidScroll:(id)arg1;
- (void)onOpenWAServiceComponent:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)sendSearchJSEvent:(id)arg1;
- (void)safeSendQueryChangedJSEvent:(id)arg1;
- (void)webSearchVC:(id)arg1 willDisappear:(_Bool)arg2;
- (void)webSearchVC:(id)arg1 willAppear:(_Bool)arg2;
- (void)beginVerticalSearch;
- (void)beginSearch;
- (void)initViewVerticaled:(_Bool)arg1;
- (void)initResultLogic;
- (void)prepareVerticalWebSearch;
- (void)prepareWebSearch;
- (_Bool)hasValidWebView;
- (void)didPopToView:(id)arg1;
- (void)stopResultView;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

