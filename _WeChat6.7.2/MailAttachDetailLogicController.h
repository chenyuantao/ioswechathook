//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FileDetailLogicController.h"

#import "ForwardMessageLogicDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CAttach, ForwardMessageLogicController, MMUIViewController, NSString;

@interface MailAttachDetailLogicController : FileDetailLogicController <PBMessageObserverDelegate, ForwardMessageLogicDelegate>
{
    CAttach *m_oAttach;
    unsigned int m_uiStartPos;
    unsigned int m_uiDataLen;
    unsigned int m_uiEventID;
    ForwardMessageLogicController *m_forwardLogic;
    MMUIViewController *m_fileDetailViewController;
    _Bool m_bDownloading;
    NSString *m_nsMailID;
    id <MailAttachDelegate> m_delegate;
}

@property(nonatomic) __weak id <MailAttachDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsMailID; // @synthesize m_nsMailID;
@property(retain, nonatomic) CAttach *m_oAttach; // @synthesize m_oAttach;
- (void).cxx_destruct;
- (id)getCurrentViewController;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)GetFileName;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned long long)GetTempSize;
- (unsigned long long)GetFileSize;
- (unsigned int)GetPreviewType;
- (_Bool)canAddToFavorites;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (void)OnAddToFavorites;
- (void)OnForwordWithViewController:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)checkIsFileExistInSvr;
- (void)stopDownload;
- (void)startDownload;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

