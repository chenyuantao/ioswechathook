//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WAAppTaskMgrExt.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WAFileStorageMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableDictionary *_dicFileStorageInfo;
}

- (void).cxx_destruct;
- (void)onAppTaskLaunch:(id)arg1;
- (_Bool)haveFreeSpace:(id)arg1 writeSize:(unsigned long long)arg2;
- (void)workThread_unzipWithAppID:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)workthread_writeFileDataWithAppID:(id)arg1 localID:(id)arg2 isAppend:(_Bool)arg3 data:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)workthread_readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)workthread_writeFileFromBase64WithAppID:(id)arg1 localID:(id)arg2 base64:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)workthread_readFileToBase64WithAppID:(id)arg1 localID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)getFileStorageInfoWithAppID:(id)arg1;
- (void)workThread_updateFileStorageConfigWithAppID:(id)arg1;
- (void)workThread_getFileInfoWithAppID:(id)arg1 localID:(id)arg2 digestAlgorithm:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)workThread_getSavedFileInfoWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_getSavedFileListWithAppID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)workThread_removeSavedFileWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)workThread_saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 usrPath:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)unzipWithAppID:(id)arg1 localID:(id)arg2 targetDirectory:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)writeFileDataWithAppID:(id)arg1 localID:(id)arg2 isAppend:(_Bool)arg3 data:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)readFileDataWithAppID:(id)arg1 localID:(id)arg2 fromPosition:(unsigned long long)arg3 length:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (void)writeFileFromBase64WithAppID:(id)arg1 localID:(id)arg2 base64:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)readFileToBase64WithAppID:(id)arg1 localID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getFileInfoWithAppID:(id)arg1 localID:(id)arg2 digestAlgorithm:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)getSavedFileInfoWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)getSavedFileListWithAppID:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeSavedFileWithAppID:(id)arg1 storeLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveFileWithAppID:(id)arg1 tempLocalID:(id)arg2 usrPath:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)usrRealPath:(id)arg1 appID:(id)arg2 error:(id *)arg3;
- (id)getQueue;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

