//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "PrivateCommonApiHandlerDelegate.h"

@class NSString;

@interface WebviewJSEventHandler_privateCommonApi : WebviewJSEventHandlerBase <PrivateCommonApiHandlerDelegate>
{
    id <PrivateCommonApiHandler> _handler;
}

- (void).cxx_destruct;
- (id)getHandlers;
- (id)getViewController;
- (void)handleCommonApiWithResult:(unsigned long long)arg1 params:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

