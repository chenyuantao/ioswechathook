//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ShakeMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface ShakeCombineListViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ShakeMgrExt>
{
    MMTableView *m_tableView;
    NSMutableDictionary *m_userHeaderImageCache;
    id <ShakeListDelegate> m_delegate;
    unsigned int m_shakeListViewType;
    NSMutableArray *m_tableRows;
    long long m_newCount;
    int _m_shakeListViewSubtype;
}

@property(nonatomic) int m_shakeListViewSubtype; // @synthesize m_shakeListViewSubtype=_m_shakeListViewSubtype;
@property(nonatomic) unsigned int m_shakeListViewType; // @synthesize m_shakeListViewType;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableDictionary *m_userHeaderImageCache; // @synthesize m_userHeaderImageCache;
- (void).cxx_destruct;
- (void)adjustSubviewRects;
- (void)adjustView;
- (void)willDisappear;
- (void)willAppear;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelectedContactInfo:(id)arg1;
- (_Bool)isInMyContactList:(id)arg1;
- (void)showPeopleInfoView:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)makeShakeTvCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakeBeaconCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakeMusicCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (id)makeShakePeopleCell:(id)arg1 Item:(id)arg2 IndexPath:(id)arg3;
- (void)makeMoreCell:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadDataFromStorage;
- (void)reloadTableViewData;
- (void)showNoResultTips:(id)arg1;
- (id)getCachedHeaderImageForUser:(id)arg1 imgUrl:(id)arg2;
- (void)viewDidLoad;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)onShowAll;
- (void)OnReturn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReturn;
- (void)onClickClearHistory;
- (void)clearListData;
- (id)initWithListType:(unsigned int)arg1;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

