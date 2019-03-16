#include "define.h"
#import <Foundation/Foundation.h>
#import <UIKIT/UIKIT.h>
#import <objc/objc-runtime.h>
#import <Foundation/Foundation.h>
#include "_WeChat6.7.2/WXPBGeneratedMessage.h"
#include "_WeChat6.7.2/SKBuiltinBuffer_t.h"
#include "_WeChat6.7.2/SKBuiltinString_t.h"
#include "_WeChat6.7.2/BaseRequest.h"
#include "_WeChat6.7.2/CmdList.h"
#include "_WeChat6.7.2/CmdItem.h"
#include "_WeChat6.7.2/ECDHKey.h"
#include "_WeChat6.7.2/BaseAuthReqInfo.h"
#include "_WeChat6.7.2/WTLoginImgReqInfo.h"
#include "_WeChat6.7.2/WxVerifyCodeReqInfo.h"
#include "_WeChat6.7.2/NewSyncRequest.h"
#include "_WeChat6.7.2/NewSyncResponse.h"
#include "_WeChat6.7.2/ManualAuthAesReqData.h"
#include "_WeChat6.7.2/ManualAuthRsaReqData.h"
#include "_WeChat6.7.2/UnifyAuthResponse.h"
#include "_WeChat6.7.2/AuthSectResp.h"
#include "_WeChat6.7.2/WxVerifyCodeRespInfo.h"
#include "_WeChat6.7.2/NetworkSectResp.h"
#include "_WeChat6.7.2/BuiltinIPList.h"
#include "_WeChat6.7.2/BuiltinIP.h"
#include "_WeChat6.7.2/HostList.h"
#include "_WeChat6.7.2/Host.h"
#include "_WeChat6.7.2/NewInitRequest.h"
#include "_WeChat6.7.2/HeartBeatRequest.h"
#include "_WeChat6.7.2/NewInitResponse.h"
#include "_WeChat6.7.2/TenPayResponse.h"
#include "_WeChat6.7.2/DeepLinkBitSet.h"
#include "_WeChat6.7.2/GeneralControlBitSet.h"
#include "_WeChat6.7.2/JSAPIPermissionBitSet.h"
#include "_WeChat6.7.2/HttpHeader.h"
#include "_WeChat6.7.2/GetA8KeyReq.h"
#include "_WeChat6.7.2/GetA8KeyResp.h"
#include "_WeChat6.7.2/CheckTinkerUpdateResponse.h"
#include "_WeChat6.7.2/TinkerPatchRespNode.h"
#include "_WeChat6.7.2/ResourceMeta.h"
#include "_WeChat6.7.2/TenPayRequest.h"
#include "_WeChat6.7.2/ProtobufCGIWrap.h"
#include "_WeChat6.7.2/PayQueryUserRollResponse.h"
#include "_WeChat6.7.2/PaySimpleUserRoll.h"
#include "_WeChat6.7.2/AutoAuthRsaReqData.h"
#include "_WeChat6.7.2/AutoAuthAesReqData.h"
#include "_WeChat6.7.2/AutoAuthRequest.h"



%hook ProtobufCGIWrap
- (void)setM_nsUri:(NSString *)m_nsUri { %log; %orig; }
- (void)setM_nsCgiName:(NSString *)m_nsCgiName { %log; %orig; }
- (void)setM_uiScene:(unsigned int )m_uiScene { %log; %orig; }
- (void)setM_uiCgi:(unsigned int )m_uiCgi { %log; %orig; }
- (void)setM_pbResponse:(WXPBGeneratedMessage *)m_pbResponse { %log; %orig; }
- (void)setM_pbRespClass:(Class )m_pbRespClass { %log; %orig; }
- (void)setM_pbRequest:(WXPBGeneratedMessage *)m_pbRequest { %log; %orig; }
%end