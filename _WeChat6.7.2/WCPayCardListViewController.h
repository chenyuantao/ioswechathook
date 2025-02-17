//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "HoneyPayReceiverCardDetailControlLogicDelegate.h"
#import "HoneyPayReceiverCardViewDelegate.h"
#import "ILinkEventExt.h"
#import "MMWebViewDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayNoticeBannerDelegate.h"
#import "WCPayPrivacyViewControllerDelegate.h"

@class NSDictionary, NSMutableArray, NSString, UIButton;

@interface WCPayCardListViewController : WCPayBaseViewController <WCPayPrivacyViewControllerDelegate, WCPayNoticeBannerDelegate, HoneyPayReceiverCardViewDelegate, HoneyPayReceiverCardDetailControlLogicDelegate, WCPayLogicMgrExt, ILinkEventExt, MMWebViewDelegate>
{
    NSMutableArray *m_arrPayCardDetailView;
    unsigned int totalHeight;
    UIButton *qaButton;
    NSDictionary *m_dicBanners;
    UIButton *m_applyCardButton;
    id <WCPayCardListViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WCPayCardListViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)OnResetPasswordCancel:(id)arg1;
- (void)honeyPayReceiverCardDetailLogicDidUnbindCard:(id)arg1;
- (void)honeyPayCardViewDidBeClicked:(id)arg1;
- (void)onWCPayPrivacyViewControllerClickAgree:(_Bool)arg1;
- (id)getNoticeBanner;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)onQAButtonClick;
- (void)webViewReturn:(id)arg1;
- (void)gotoLoanMoney;
- (void)didReceiveMemoryWarning;
- (void)onClickCard:(id)arg1;
- (void)onClickBalanceView:(id)arg1;
- (void)onClickWXBorrowMoneyItemView:(id)arg1;
- (void)onClickWXBorrowMoneyItem:(id)arg1;
- (void)onClickVirtualCardAndChecking:(id)arg1;
- (void)onClickVirtualCard:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)openTinyAppWithUsername:(id)arg1 path:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)didShowApplyNewCard;
- (void)didShowAddCard;
- (void)willShowAddCard;
- (void)showOfflinePay;
- (void)makeLoanMoneyCell:(id)arg1;
- (void)makeApplyNewCardCell:(id)arg1;
- (void)makeAddCardCell:(id)arg1;
- (void)makeVirtualCardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeWXBorrowMoneyItemCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBaseExtentionCell:(id)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)reloadNavigationItem;
- (void)viewDidLoad;
- (void)onLeftBarButtonDone;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

