//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WARemoteDebugChannel.h"

#import "SRWebSocketDelegate.h"

@class NSString, SRWebSocket;

@interface WARemoteDebugWANChannel : WARemoteDebugChannel <SRWebSocketDelegate>
{
    SRWebSocket *_webSocket;
}

+ (id)sharedQueue;
- (void).cxx_destruct;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)sendData:(id)arg1;
- (void)closeChannel;
- (void)openChannel;
- (_Bool)isConnected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

