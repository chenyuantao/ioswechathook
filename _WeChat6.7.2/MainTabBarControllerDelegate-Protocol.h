//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITabBarController, UIViewController;

@protocol MainTabBarControllerDelegate <NSObject>
- (void)mainTabBarController:(UITabBarController *)arg1 didSelectViewController:(UIViewController *)arg2;
- (_Bool)mainTabBarController:(UITabBarController *)arg1 shouldSelectViewController:(UIViewController *)arg2;
- (void)onMainTabBarMainFrameDoubleClicked:(id)arg1;
@end

