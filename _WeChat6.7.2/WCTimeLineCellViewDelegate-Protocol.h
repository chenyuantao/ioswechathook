//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView, WCContentItemBaseView, WCDataItem;

@protocol WCTimeLineCellViewDelegate <NSObject>

@optional
- (void)cacheMediaCellView:(WCContentItemBaseView *)arg1 forData:(WCDataItem *)arg2;
- (WCContentItemBaseView *)getCachedMediaCellViewForData:(WCDataItem *)arg1;
- (void)onActionAtAd:(WCDataItem *)arg1;
- (UIView *)getView;
- (void)onShowDetailChanged:(WCDataItem *)arg1 bShowDetailBeforeChange:(_Bool)arg2;
- (void)onActionAdPOI:(WCDataItem *)arg1;
- (void)onRestoreTimeLineCellView:(WCDataItem *)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(WCDataItem *)arg1;
- (void)onActionLocation:(WCDataItem *)arg1;
- (void)onTimeLineCellMoreMenu:(WCDataItem *)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineCellMoreMenu:(WCDataItem *)arg1;
- (void)onShowDetailViewForDataItem:(WCDataItem *)arg1;
- (void)onEditBlackList:(WCDataItem *)arg1;
- (void)onUpdateDataItem:(WCDataItem *)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onDeleteDataItem:(WCDataItem *)arg1;
- (void)onAdvertiseAction:(WCDataItem *)arg1 point:(struct CGPoint)arg2;
- (void)onCommentDataItem:(WCDataItem *)arg1 point:(struct CGPoint)arg2;
- (void)onLinkClickedItem:(WCDataItem *)arg1 url:(NSString *)arg2 backupUrl:(NSString *)arg3 withRect:(struct CGRect)arg4;
@end

