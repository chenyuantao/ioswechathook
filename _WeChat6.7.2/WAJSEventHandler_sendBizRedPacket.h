//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCRedEnvWeAppDelegate.h"

@class NSDictionary, NSString;

@interface WAJSEventHandler_sendBizRedPacket : WAJSEventHandler_BaseEvent <WCRedEnvWeAppDelegate>
{
    NSDictionary *_dicParam;
}

@property(retain, nonatomic) NSDictionary *dicParam; // @synthesize dicParam=_dicParam;
- (void).cxx_destruct;
- (void)onRedEnvFail:(id)arg1;
- (void)onRedEnvCancel;
- (void)onRedEnvSuccess:(id)arg1;
- (id)getRedEnvParam;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

