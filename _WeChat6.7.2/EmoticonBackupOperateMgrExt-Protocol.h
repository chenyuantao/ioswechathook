//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmojiInfoObj, NSArray, NSString;

@protocol EmoticonBackupOperateMgrExt <NSObject>

@optional
- (void)onStickyBackupEmoticonFailed:(NSArray *)arg1;
- (void)onStickyBackupEmoticonOK:(NSArray *)arg1;
- (void)onAddBackupEmoticonFailed:(NSString *)arg1 reason:(unsigned long long)arg2;
- (void)onAddBackupEmoticonOK:(NSString *)arg1 emojiInfo:(EmojiInfoObj *)arg2;
- (void)onDeleteBackupEmoticonFailed:(NSArray *)arg1;
- (void)onDeleteBackupEmoticonOK:(NSArray *)arg1;
@end

