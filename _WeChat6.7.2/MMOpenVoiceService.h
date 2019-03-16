//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ISysCallCheckExt.h"
#import "MMService.h"

@class IRegisterableCallbackHolder, MMOpenVoiceAudioMgr, MMOpenVoiceJoinRoomCGIImp, MMOpenVoiceMemberMgr, MMOpenVoiceNativeCallbackMgr, MMOpenVoiceNetworkMgr, MMOpenVoiceSessionMgr, NSObject<OS_dispatch_queue>, NSString;

@interface MMOpenVoiceService : MMService <ISysCallCheckExt, MMService>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    MMOpenVoiceSessionMgr *_sessionMgr;
    MMOpenVoiceNativeCallbackMgr *_nativeCallbackMgr;
    MMOpenVoiceMemberMgr *_memberMgr;
    MMOpenVoiceAudioMgr *_audioMgr;
    MMOpenVoiceNetworkMgr *_networkMgr;
    MMOpenVoiceJoinRoomCGIImp *_joinRoomImp;
    IRegisterableCallbackHolder *joinSucc;
    IRegisterableCallbackHolder *joinFail;
    IRegisterableCallbackHolder *talkSucc;
    IRegisterableCallbackHolder *talkFail;
    IRegisterableCallbackHolder *callBroken;
    IRegisterableCallbackHolder *callExit;
    IRegisterableCallbackHolder *sessionExpiredCallback;
    IRegisterableCallbackHolder *memberChange;
    CDUnknownBlockType _currentInterruptedCallback;
    CDUnknownBlockType _currentMemberChangeCallback;
    CDUnknownBlockType _currentSpeakerChangedCallback;
    int _currentStatus;
    NSString *_currentAppId;
    NSString *_busiAppId;
    int _exitReason;
    _Bool _isJoiningRoom;
    _Bool _isInit;
    _Bool _isSyncJoinDone;
    _Bool _isCallbackJoinDone;
    _Bool _isCallbackTalkDone;
}

- (void).cxx_destruct;
- (int)resetSync:(_Bool)arg1;
- (void)mayRelease;
- (void)setMutePlay:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setMuteRecord:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)cleanUpLongTermCallbacks;
- (int)exitConferenceSyncWithReason:(int)arg1;
- (int)convertReason:(int)arg1;
- (void)exitConference:(CDUnknownBlockType)arg1;
- (void)callbackJoinConference:(CDUnknownBlockType)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (int)initWithSession:(id)arg1;
- (void)stopListenNetworkChange;
- (void)startListenNetworkChange;
- (void)cleanUpJoinStatus;
- (void)tryTriggerSucc:(CDUnknownBlockType)arg1;
- (void)setUpLongTermCallbackAfterJoin;
- (void)furtherJoinCheck:(long long)arg1 IOpenVoiceCallback:(CDUnknownBlockType)arg2;
- (void)joinRoomImp:(id)arg1 groupId:(id)arg2 nonceStr:(id)arg3 timeStamp:(int)arg4 joinRoomCallback:(CDUnknownBlockType)arg5;
- (void)onWAAppnterBackground:(id)arg1;
- (void)joinConferenceSync:(id)arg1 businessAppId:(id)arg2 signature:(id)arg3 groupId:(id)arg4 timeStamp:(int)arg5 nonceStr:(id)arg6 joinCallback:(CDUnknownBlockType)arg7 interruptedCallback:(CDUnknownBlockType)arg8 memberChangeCallback:(CDUnknownBlockType)arg9 speakerChangeCallback:(CDUnknownBlockType)arg10;
- (void)joinConference:(id)arg1 businessAppId:(id)arg2 signature:(id)arg3 groupId:(id)arg4 timeStamp:(int)arg5 nonceStr:(id)arg6 joinCallback:(CDUnknownBlockType)arg7 interruptedCallback:(CDUnknownBlockType)arg8 memberChangeCallback:(CDUnknownBlockType)arg9 speakerChangeCallback:(CDUnknownBlockType)arg10;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)BeginInterruption;
- (id)init;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

