//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt.h"
#import "MMService.h"

@class FavCdnTaskInfo, NSMutableArray, NSMutableSet, NSString;

@interface FavCdnDownloadMgr : MMService <ICdnComMgrExt, MMService>
{
    NSMutableArray *m_queue;
    _Bool m_downloading;
    int m_downloadingCount;
    NSMutableSet *m_set;
    FavCdnTaskInfo *current_taskInfo;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)tryNext;
- (void)StartDownloadFavMedia:(id)arg1 prior:(_Bool)arg2;
- (void)StartDownloadFavMedia:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

