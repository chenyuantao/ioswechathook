//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WARedEnvelopesMakeViewControllerDelegate.h"

@class NSString;

@interface WAJSEventHandler_sendRedPacket : WAJSEventHandler_BaseEvent <WARedEnvelopesMakeViewControllerDelegate>
{
}

- (void)onWARedEnvelopesMakeViewControllerError:(id)arg1 errCode:(long long)arg2;
- (void)onWARedEnvelopesMakeViewControllerComplete:(id)arg1;
- (void)onWARedEnvelopesMakeViewControllerBack;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

