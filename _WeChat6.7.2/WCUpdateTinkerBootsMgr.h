//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "IMsgExt.h"
#import "INewSyncExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString, WCTinkerBootsInfo;

@interface WCUpdateTinkerBootsMgr : MMService <MMKernelExt, PBMessageObserverDelegate, ICdnComMgrExt, INewSyncExt, IMsgExt, MMService>
{
    NSMutableDictionary *_dicDownloadingItem;
    NSString *_baseID;
    WCTinkerBootsInfo *_curPatchInfo;
}

- (void).cxx_destruct;
- (void)cleanPatch;
- (void)cleanOldOne;
- (void)handleXmlMsg:(id)arg1;
- (_Bool)verifyPatchData:(id)arg1 withPatchInfo:(id)arg2;
- (_Bool)startDownloadPatch:(id)arg1;
- (void)checkBootsPatchUpdateWithCondition:(id)arg1 forceWithoutLogin:(_Bool)arg2;
- (id)getDefaultConditions;
- (id)getPatchID;
- (id)getBaseID;
- (void)onAuthOKWithPlistVesionChangeFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onNewSyncIPXX:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onServiceInit;
- (void)dealloc;
- (void)checkBootsPatchUpdateWithXmlKey:(id)arg1;
- (void)checkBootsPatchUpdate;
- (void)forceUpdate:(_Bool)arg1;
- (id)getBootsPatchData:(unsigned long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

