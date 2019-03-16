//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMCrashProtectedMgr : MMService <MMService>
{
    _Bool m_isDebuging;
    _Bool m_stopRemovingUnsedCPKey;
    _Bool m_isInBackground;
    _Bool m_isLastTimeCrashedBySpecialCharacter;
    NSMutableArray *m_currRunloopsCPKeys;
    NSMutableDictionary *m_currIncreaseCPKeys;
    NSMutableDictionary *m_chatRoomCrashCountDict;
    NSRecursiveLock *m_lock;
}

+ (void)clearFlag;
+ (_Bool)isCrashBySpecialCharacter;
+ (_Bool)isMemoryMappedKVValid;
- (void).cxx_destruct;
- (void)onSingalCrash:(struct __siginfo *)arg1;
- (id)lastCPKey:(unsigned long long)arg1;
- (void)removeInfoWithKey:(id)arg1 threadId:(unsigned long long)arg2;
- (void)stopCleaning;
- (void)doCleaningJob;
- (void)onExit;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)decreaseCurrIncreaseCPKeysWithout:(id)arg1;
- (void)clearCrashCountWithKey:(id)arg1;
- (void)decreaseCrashCountWithKey:(id)arg1;
- (void)increaseCrashCountWithKey:(id)arg1;
- (_Bool)isChatRoomUnsafe:(id)arg1;
- (_Bool)isUnsafeWithKey:(id)arg1;
- (void)checkHasCrashAndDoReportJob;
- (void)checkMayCrashAndMarkAsHasCrash;
- (void)checkDataValid;
- (id)reportedCPKeyMemoryMappedKV;
- (id)mayCrashMemoryMappedKV;
- (id)hasCrashMemoryMappedKV;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

