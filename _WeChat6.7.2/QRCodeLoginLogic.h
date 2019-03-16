//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CheckQRCodeLoginDelegate.h"
#import "GetQRCodeLoginDelegate.h"

@class CheckQRCodeLoginCGI, GetQRCodeLoginCGI, NSString;

@interface QRCodeLoginLogic : NSObject <GetQRCodeLoginDelegate, CheckQRCodeLoginDelegate>
{
    GetQRCodeLoginCGI *m_getQRCodeLoginCGI;
    CheckQRCodeLoginCGI *m_checkQRCodeLoginCGI;
}

@property(retain, nonatomic) CheckQRCodeLoginCGI *m_checkQRCodeLoginCGI; // @synthesize m_checkQRCodeLoginCGI;
@property(retain, nonatomic) GetQRCodeLoginCGI *m_getQRCodeLoginCGI; // @synthesize m_getQRCodeLoginCGI;
- (void).cxx_destruct;
- (void)OnCheckQRCodeLoginCancel;
- (void)OnCheckQRCodeLoginExpried;
- (void)OnCheckQRCodeLoginConfirmedWithUserName:(id)arg1 pwd:(id)arg2 nickName:(id)arg3 headImageURL:(id)arg4;
- (void)OnCheckQRCodeLoginScaned:(id)arg1 nickName:(id)arg2;
- (void)OnCheckQRCodeLoginFail;
- (void)OnCheckQRCodeLoginUUIDExpired;
- (void)OnGetQRCodeLoginSuccuss:(id)arg1;
- (void)OnGetQRCodeLoginFail;
- (void)StopQRCodeLogin;
- (void)StartQRCodeLogin;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

