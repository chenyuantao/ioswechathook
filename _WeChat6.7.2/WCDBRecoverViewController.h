//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMDBRestore.h"
#import "UIAlertViewDelegate.h"
#import "WCDBRecoverDelegate.h"

@class MMLoadingView, MMTableViewInfo, NSArray, NSString, WCDBRecoverInfo;

@interface WCDBRecoverViewController : MMUIViewController <WCDBRecoverDelegate, UIAlertViewDelegate, MMDBRestore>
{
    NSArray *_infos;
    WCDBRecoverInfo *_selected;
    MMTableViewInfo *m_tableViewInfo;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)onRestoreProgressUpdate:(float)arg1;
- (void)onProgressUpdate:(double)arg1 withIncrement:(double)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doRecover;
- (void)updateProgress:(double)arg1;
- (void)askForConfirm;
- (void)selectCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)adjustTableViewRect;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (void)popBack;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)markAsUnselected;
- (void)markAsSelected:(id)arg1;
- (id)initWithInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

