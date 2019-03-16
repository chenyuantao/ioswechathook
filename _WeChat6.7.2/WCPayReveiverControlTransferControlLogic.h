//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCPayTransferMoneyStatusViewControllerDelegate.h"

@class NSString, WCPayJumpRemindControlLogic;

@interface WCPayReveiverControlTransferControlLogic : WCPayControlLogic <IWCPayControlLogicExt, WCPayTransferMoneyStatusViewControllerDelegate>
{
    WCPayJumpRemindControlLogic *_m_jumpRemindControlLogic;
}

@property(retain, nonatomic) WCPayJumpRemindControlLogic *m_jumpRemindControlLogic; // @synthesize m_jumpRemindControlLogic=_m_jumpRemindControlLogic;
- (void).cxx_destruct;
- (void)OnGetHistoryOrderDetailInfo:(id)arg1 Error:(id)arg2;
- (void)OnRefuseTransferMoney:(id)arg1 Error:(id)arg2;
- (void)checkMoneyStatusAfterConfirm:(id)arg1;
- (void)OnConfirmTransferMoney:(id)arg1 Error:(id)arg2;
- (void)OnCheckTransferMoneyStatus:(id)arg1 Error:(id)arg2;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchLQT;
- (void)ToRefusedMoney;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)stopLogic;
- (void)startLogic;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

