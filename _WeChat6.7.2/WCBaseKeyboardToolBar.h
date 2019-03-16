//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMTableViewInfoDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIBarButtonItem, UIScrollView, UIToolbar;

@interface WCBaseKeyboardToolBar : NSObject <UIGestureRecognizerDelegate, MMTableViewInfoDelegate>
{
    UIBarButtonItem *m_PreviousButtonItem;
    UIBarButtonItem *m_NextButtonItem;
    UIBarButtonItem *m_SpaceButtonItem;
    UIBarButtonItem *m_FinishButtonItem;
    UIToolbar *m_toolBar;
    UIScrollView *m_scrollView;
    double m_keyboardHeight;
    NSMutableArray *m_arrItem;
    long long m_uiCurrentItemIndex;
    _Bool m_bTouchHide;
    _Bool m_bNoAutoPostion;
    _Bool m_bScrollChangedResignFirstResponder;
    SEL m_scrollChangedAction;
    id m_scrollChangedTarget;
    _Bool _bNeedManualKeyboardFrameChange;
    SEL _manualSetAction;
    id _manualSetTarget;
}

@property(nonatomic) __weak id manualSetTarget; // @synthesize manualSetTarget=_manualSetTarget;
@property(nonatomic) SEL manualSetAction; // @synthesize manualSetAction=_manualSetAction;
@property(nonatomic) _Bool bNeedManualKeyboardFrameChange; // @synthesize bNeedManualKeyboardFrameChange=_bNeedManualKeyboardFrameChange;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)done;
- (void)OnNextItem;
- (void)OnPreviousItem;
- (void)UpdateBarButtonItem;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setNeedManualKeyboardFrameChange:(_Bool)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)positionWhenBecameFirstResponder:(id)arg1 withAnimated:(_Bool)arg2;
- (void)sizeWhenBecameFirstResponder;
- (void)changeKeyBoardSize:(id)arg1;
- (void)initNotification;
- (void)initBtnItem;
- (_Bool)setCurrentActiveItem:(id)arg1;
- (_Bool)findCurrentActiveItem;
- (void)setScrollViewSize:(struct CGSize)arg1;
- (void)setScrollView:(id)arg1;
- (void)addItem:(id)arg1;
- (void)removeAllItem;
- (id)getView;
- (void)initToolBar;
- (void)dealloc;
- (void)setNavigateBtnHidden:(_Bool)arg1;
- (void)setScrollChangedResignFirstResponder:(_Bool)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)setNoAutoPostion:(_Bool)arg1;
- (void)setTouchHide:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

