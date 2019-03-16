//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, UIImageView, UILabel, WAHeaderStackDisplayView;

@interface BrandProfileWeappCell : UITableViewCell
{
    UILabel *_titleLabel;
    WAHeaderStackDisplayView *_headerStackView;
    UIImageView *_arrowView;
    NSArray *_iconList;
}

+ (void)adjustTitleLabel:(id)arg1 titleString:(id)arg2 maxWidth:(double)arg3;
+ (double)calLeftHeightForWeappList:(double)arg1;
+ (double)cellHeight:(double)arg1;
+ (double)calRightHeight;
@property(retain, nonatomic) NSArray *iconList; // @synthesize iconList=_iconList;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
