//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MMUILabel, NSString, UIColor, UIImage, UIImageView, UIView;

@interface WSVideoOperateButton : UIButton
{
    _Bool _needOperateAnimation;
    _Bool _needLeftDivLine;
    _Bool _needRightDivLine;
    int _eLayout;
    UIImageView *_icon;
    MMUILabel *_label;
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIColor *_normalTitleColor;
    UIColor *_selectedTitleColor;
    NSString *_normalAccessibilityLabel;
    NSString *_selectedAccessibilityLabel;
    UIView *_leftDivLine;
    UIView *_rightDivLine;
}

@property(retain, nonatomic) UIView *rightDivLine; // @synthesize rightDivLine=_rightDivLine;
@property(retain, nonatomic) UIView *leftDivLine; // @synthesize leftDivLine=_leftDivLine;
@property(nonatomic) _Bool needRightDivLine; // @synthesize needRightDivLine=_needRightDivLine;
@property(nonatomic) _Bool needLeftDivLine; // @synthesize needLeftDivLine=_needLeftDivLine;
@property(nonatomic) _Bool needOperateAnimation; // @synthesize needOperateAnimation=_needOperateAnimation;
@property(nonatomic) int eLayout; // @synthesize eLayout=_eLayout;
@property(retain, nonatomic) NSString *selectedAccessibilityLabel; // @synthesize selectedAccessibilityLabel=_selectedAccessibilityLabel;
@property(retain, nonatomic) NSString *normalAccessibilityLabel; // @synthesize normalAccessibilityLabel=_normalAccessibilityLabel;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *normalTitleColor; // @synthesize normalTitleColor=_normalTitleColor;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(readonly, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlightedStatus;
- (void)setNormalStatus;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)internalLayout;
- (void)layoutSubviews;
- (void)doLayoutSize;
- (void)addRightLine;
- (void)addLeftLine;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

