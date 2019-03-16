//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

#import "CAAnimationDelegate.h"
#import "MMDropDelegate.h"

@class MMDropManager, NSArray, NSIndexPath, NSMutableArray, NSString, UIColor, UIGestureRecognizer, UIImageView, UIView;

@interface MMMultiMenuTableViewCell : MMTableViewCell <CAAnimationDelegate, MMDropDelegate>
{
    UIView *_menuContentView;
    UIView *_actualContentView;
    UIGestureRecognizer *_panGestureRecognizer;
    _Bool _shouldDisplayContextMenuView;
    _Bool _contextMenuHidden;
    UIImageView *_copyedBackgroundView;
    _Bool m_bIsNeedUpdateMenu;
    _Bool m_bUseDynamicSize;
    MMDropManager *m_dropManager;
    double _initialTouchPositionX;
    double _lastTouchPositionX;
    double _initialContentViewX;
    _Bool bNotAddDeleteBtn;
    NSArray *_currentMenuItems;
    _Bool _inHideAnimation;
    _Bool _panGestureHasBegin;
    int _animationCounter;
    _Bool _contextMenuEnabled;
    _Bool _disablePanOnHideAnimated;
    _Bool _bNeedCopyBackgroundView;
    _Bool _keepSwipeStateOnResue;
    NSIndexPath *_indexPath;
    NSMutableArray *_arrMenuItems;
    UIColor *_menuBackgroundColor;
    double _fCardRightMargin;
    UIView *_rootContentView;
}

@property(retain, nonatomic) UIView *rootContentView; // @synthesize rootContentView=_rootContentView;
@property(nonatomic) _Bool keepSwipeStateOnResue; // @synthesize keepSwipeStateOnResue=_keepSwipeStateOnResue;
@property(nonatomic) double fCardRightMargin; // @synthesize fCardRightMargin=_fCardRightMargin;
@property(nonatomic) _Bool bNeedCopyBackgroundView; // @synthesize bNeedCopyBackgroundView=_bNeedCopyBackgroundView;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
@property(nonatomic) _Bool disablePanOnHideAnimated; // @synthesize disablePanOnHideAnimated=_disablePanOnHideAnimated;
@property(nonatomic) _Bool contextMenuEnabled; // @synthesize contextMenuEnabled=_contextMenuEnabled;
@property(retain, nonatomic) NSMutableArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (double)getCurrentWidth;
- (void)setMenuOptionsViewHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)onClearBackgroundView;
- (id)contentView;
- (void)hideMenuOptionsAnimated:(_Bool)arg1;
- (void)forceHideMenuOptionsAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceHideMenuOptionsAnimated:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)onMenuOperated:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (_Bool)onActionOperated:(id)arg1;
- (void)showMenuText:(id)arg1 menuItem:(id)arg2;
- (void)updateMenuViewForConfirm:(id)arg1;
- (void)updateMenuView:(_Bool)arg1;
- (void)updateMenuView;
- (id)FindTableView:(id)arg1;
- (void)updateAction;
- (void)setMenuItemsWithDefaultDeleteBtn:(id)arg1;
- (void)setMenuItemsWithNoDeleteBtn:(id)arg1;
- (void)checkAndAddDeleteItem;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isMenuHidden;
- (_Bool)isPointInMenu:(struct CGPoint)arg1;
- (void)dropSessionDidExit;
- (void)dropSessionDidEnter;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

