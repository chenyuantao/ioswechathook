//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCrashBlockExtensionHandler : NSObject
{
}

+ (id)shareInstance;
- (void)decreaseExistWeAppCount;
- (void)setExistWeAppCount:(int)arg1;
- (id)getActiveWeAppScene;
- (void)setActiveWeAppSecne:(id)arg1;
- (void)setDumpType:(unsigned long long)arg1;
- (void)setLastScene:(id)arg1;
- (void)setBlockTime:(unsigned long long)arg1;
- (void)setCVersion:(unsigned int)arg1;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (void)setUsrName;
- (void)p_setCurrentUserName:(id)arg1;
- (void)addLogInfo:(struct XLoggerInfo_t)arg1 withMessage:(const char *)arg2;
- (void)resetSceneArray;
- (void)freeLastSceneArray;
- (void)resetLogCycleArray;
- (void)freeLogCycleArray;
- (void)renewHeavyUserInfo;
- (id)getUserInfoForCurrentAppWithDumpType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

