//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILinkEventExt.h"

@class BrandProfileCacheItem, CContact, NSString, RichTextView, UIActivityIndicatorView;

@interface BrandProfileFooterView : UIView <ILinkEventExt>
{
    RichTextView *_tipsLabel;
    UIActivityIndicatorView *_indicatorView;
    _Bool _isFetching;
    id <BrandProfileFooterViewDelegate> _delegate;
    CContact *_brandContact;
    BrandProfileCacheItem *_cacheItem;
}

@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) BrandProfileCacheItem *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) __weak id <BrandProfileFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)isContactExpired;
- (_Bool)hasLoadingView;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

