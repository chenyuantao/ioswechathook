//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, WCDataItem, WCUserComment;

@protocol WCTimeLineCommentCellViewDelegate <NSObject>
- (void)onRestoreCommentView:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onReloadCommentView:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2;
- (void)onReplyComment:(WCUserComment *)arg1 ofDataItem:(WCDataItem *)arg2 ofTouchedView:(UIView *)arg3;
@end

