//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTBaseItemCellViewModel.h"

@class NSMutableArray, NSString, ReaderWrap, UIFont;

@interface BTReaderItemCellViewModel : BTBaseItemCellViewModel
{
    ReaderWrap *_readerWrap;
    unsigned int _itemIndex;
    struct CGSize _titleSize;
    NSMutableArray *_titleLabelStyles;
    struct CGSize _digestSize;
    NSMutableArray *_digestLabelStyles;
    unsigned long long _position;
    id <BTReaderItemCellViewModelDelegate> _delegate;
    NSString *_readerUrlMd5;
    UIFont *_titleFont;
}

+ (id)createModelWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5;
+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
@property(nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *readerUrlMd5; // @synthesize readerUrlMd5=_readerUrlMd5;
@property(nonatomic) __weak id <BTReaderItemCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ReaderWrap *readerWrap; // @synthesize readerWrap=_readerWrap;
@property(readonly, nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) double normalCoverBottomMargin;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (_Bool)isNormalItemTitleSingleLine;
- (double)itemViewHeightForNormalItem;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) struct CGSize titleSize;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) unsigned long long titleLineNumber;
@property(readonly, nonatomic) double labelMaxWidth;
@property(readonly, nonatomic) _Bool isShowLargeCover;
- (_Bool)isTitleSingleLine;
@property(readonly, nonatomic) _Bool hasLandingPage;
@property(readonly, nonatomic) unsigned int friendsReadCount;
@property(readonly, nonatomic) UIFont *friendsReadFont;
@property(readonly, nonatomic) unsigned long long position;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) NSString *coverImgURL;
- (double)viewHeight;
- (void)clearCache;
- (void)updateWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5;
- (id)initWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5;
- (id)itemViewClassName;

@end

