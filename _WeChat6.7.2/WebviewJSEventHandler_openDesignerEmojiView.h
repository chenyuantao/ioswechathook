//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IStoreEmotionDesignerInfoMgrExt.h"

@class JSEvent, NSString, UINavigationController;

@interface WebviewJSEventHandler_openDesignerEmojiView : WebviewJSEventHandlerBase <IStoreEmotionDesignerInfoMgrExt>
{
    JSEvent *m_event;
    NSString *m_designerId;
    UINavigationController *m_navigationController;
}

+ (id)dictionForBannerSet:(id)arg1;
- (void).cxx_destruct;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)openDesignerEmojiViewControllerWithDesignerUin:(unsigned int)arg1;
- (void)openDesignerEmojiViewControllerWithDesignerId;
- (void)endWithFail;
- (void)endWithOk;
- (long long)checkPageTypeForParams:(id)arg1;
- (id)viewControllerWithParams:(id)arg1 PageType:(unsigned int)arg2;
- (id)viewControllerWithParams:(id)arg1;
- (_Bool)handleWithParams:(id)arg1 AndNavigationController:(id)arg2 isHandleImmediately:(_Bool)arg3;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (_Bool)handleWithParams:(id)arg1 AndViewController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

