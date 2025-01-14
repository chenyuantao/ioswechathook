//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseMessageCellView.h"

@class NSString, WCPayC2CMessageViewModel;

@interface WCPayC2CMessageCellView : WCPayBaseMessageCellView
{
    NSString *_bgImageName;
    NSString *_bgHighlightImageName;
    NSString *_maskImageName;
    NSString *_maskHighlightImageName;
}

@property(retain, nonatomic) NSString *maskHighlightImageName; // @synthesize maskHighlightImageName=_maskHighlightImageName;
@property(retain, nonatomic) NSString *maskImageName; // @synthesize maskImageName=_maskImageName;
@property(retain, nonatomic) NSString *bgHighlightImageName; // @synthesize bgHighlightImageName=_bgHighlightImageName;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (void).cxx_destruct;
- (id)operationMenuItems;
- (void)updateBgImageView;
- (void)updateStatus;

// Remaining properties
@property(readonly, nonatomic) WCPayC2CMessageViewModel *viewModel; // @dynamic viewModel;

@end

