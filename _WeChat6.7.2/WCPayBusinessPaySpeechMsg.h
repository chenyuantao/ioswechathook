//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPaySynthesizeSpeechMsg.h"

@interface WCPayBusinessPaySpeechMsg : WCPaySynthesizeSpeechMsg
{
}

- (void)reportKVPlayPrefixSound;
- (void)reportCgiCostTime:(unsigned int)arg1;
- (void)reportKVPlaySoundFail:(unsigned int)arg1 retCode:(long long)arg2;
- (void)reportKVPlaySoundFail:(unsigned int)arg1;
- (void)reportKVPushSuccess;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyGetVoiceReq;
- (id)soundNameOfSwitchClose;
- (id)soundNameOfSwitchOpen;
- (id)frontPartSoundPath;
- (_Bool)isSwitchOpen;
- (unsigned int)getCgiCmd;
- (_Bool)setVoiceResponse:(id)arg1;
- (id)getVoiceRequest;

@end
