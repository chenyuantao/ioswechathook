//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIColor;

@interface EditImageTextBgView : UIView
{
    double _maxWidth;
    NSMutableArray *_backgroundRects;
    UIColor *_textBgColor;
    double _scale;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIColor *textBgColor; // @synthesize textBgColor=_textBgColor;
@property(retain, nonatomic) NSMutableArray *backgroundRects; // @synthesize backgroundRects=_backgroundRects;
- (void).cxx_destruct;
- (void)getMaxBgRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

