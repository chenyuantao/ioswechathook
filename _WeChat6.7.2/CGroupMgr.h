//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "NotifyFromEventDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CGroupDB, CGroupOpLog, NSMutableArray, NSString;

@interface CGroupMgr : MMService <MMService, NotifyFromEventDelegate, PBMessageObserverDelegate, IMsgExt>
{
    CGroupDB *m_oGroupDB;
    CGroupOpLog *m_oGroupOpLog;
    NSMutableArray *m_gettingMemberDetailQueue;
    NSMutableArray *m_gettingInfoQueue;
}

+ (_Bool)isSupportOpenIMGroup;
+ (id)getGruopTipWithSupportAdminOrNO:(id)arg1 tipKey:(id)arg2;
+ (_Bool)isSupportOpenGroupAdmin:(id)arg1;
+ (_Bool)IsReservedGroupTopic:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnOplogResp:(id)arg1;
- (void)OnOplogRespForChangeChatRoomAccessType:(id)arg1 Resp:(id)arg2;
- (void)OnOplogRespForModTopic:(id)arg1 Resp:(id)arg2;
- (void)OnSetChatRoomDescResp:(id)arg1;
- (_Bool)p_SetChatRoomDesc:(id)arg1 Desc:(id)arg2 Flag:(unsigned int)arg3;
- (_Bool)SetChatRoomDesc:(id)arg1 Desc:(id)arg2 Flag:(unsigned int)arg3;
- (void)OnGetChatRoomInfoResp:(id)arg1;
- (void)OnDeleteGroupAdmin:(id)arg1;
- (_Bool)DeleteGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (void)OnAddGroupAdmin:(id)arg1;
- (_Bool)AddGroupAdmin:(id)arg1 withAdminList:(id)arg2;
- (void)OnApproveGroupMember:(id)arg1;
- (_Bool)ApproveGroupMember:(id)arg1 withInviterName:(id)arg2 withInviteeList:(id)arg3 withTicket:(id)arg4 withUserData:(id)arg5 withApproveMsgid:(unsigned long long)arg6;
- (_Bool)ChangeChatRoomAccessType:(id)arg1 type:(unsigned int)arg2;
- (void)OnChangeChatRoomOwnerResp:(id)arg1;
- (unsigned int)p_SetChatRoomSelfDisplayName:(id)arg1 DisplayName:(id)arg2;
- (unsigned int)SetChatRoomSelfDisplayName:(id)arg1 DisplayName:(id)arg2;
- (_Bool)ChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2;
- (void)OnInviteChatRoomMemberResp:(id)arg1;
- (_Bool)p_InviteGroupMember:(id)arg1 withMemberList:(id)arg2 withInviterScene:(unsigned int)arg3 withTicket:(id)arg4 withUserData:(id)arg5;
- (_Bool)InviteGroupMember:(id)arg1 withMemberList:(id)arg2 withInviterScene:(unsigned int)arg3 withTicket:(id)arg4 withUserData:(id)arg5;
- (_Bool)InviteGroupMember:(id)arg1 withMemberList:(id)arg2;
- (int)CanDonateChatRoom;
- (int)CanUpgradeChatRoom;
- (_Bool)UpgradeChatRoom:(id)arg1;
- (_Bool)GetChatRoomUpgradeStatus:(id)arg1;
- (_Bool)ForceUpdateChatRoomContact:(id)arg1;
- (_Bool)p_GetChatRoomInfo:(id)arg1;
- (_Bool)GetChatRoomInfo:(id)arg1;
- (_Bool)GetEntireChatRoomMemberDetail:(id)arg1;
- (_Bool)p_GetChatRoomMemberDetail:(id)arg1;
- (_Bool)GetChatRoomMemberDetail:(id)arg1;
- (unsigned int)createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3 eventHandler:(Class)arg4;
- (unsigned int)createProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3;
- (void)onGetChatRoomUpgradeStatus:(id)arg1;
- (void)OnUpdateContact:(id)arg1;
- (void)OnGetChatRoomMemberDetail:(id)arg1;
- (void)OnUpgradeChatRoom:(id)arg1;
- (int)OnCreateChatRoom:(id)arg1;
- (id)HandleCreateChatRoomOK:(id)arg1;
- (void)addCreateMsg:(id)arg1 ContactList:(id)arg2;
- (void)OnDeleteChatRoomMemberResponse:(id)arg1;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)OnAddChatRoomMember:(id)arg1;
- (id)genContactFromMemberResp:(id)arg1;
- (void)addReceiveVerifyMsgSystemMsg:(id)arg1 Msg:(id)arg2;
- (id)genVerifyMsgDesc:(id)arg1;
- (void)addChatMemberNeedVerifyMsg:(id)arg1 ContactList:(id)arg2;
- (_Bool)UnShowInContactBook:(id)arg1 sync:(_Bool)arg2;
- (_Bool)ShowInContactBook:(id)arg1 sync:(_Bool)arg2;
- (_Bool)IsUsrInChatRoom:(id)arg1 Usr:(id)arg2;
- (id)GetGroupMemberWithOutMyself:(id)arg1;
- (id)GetGroupAdminUserList:(id)arg1 chatRoomAdminList:(id)arg2;
- (id)GetGroupMemberUserList:(id)arg1 chatRoomMemList:(id)arg2;
- (id)GetGroupMember:(id)arg1;
- (id)GetGroupAdminUserName:(id)arg1;
- (id)GetGroupAdmin:(id)arg1;
- (_Bool)p_QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)p_SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (_Bool)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (_Bool)SetUndeliverCountOpen:(_Bool)arg1 forGroup:(id)arg2;
- (_Bool)p_SetShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (_Bool)SetShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (_Bool)p_DeleteGroupMember:(id)arg1 withMemberList:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)p_AddGroupMember:(id)arg1 withMemberList:(id)arg2 withDesp:(id)arg3;
- (_Bool)AddGroupMember:(id)arg1 withMemberList:(id)arg2 withDesp:(id)arg3;
- (_Bool)p_CreateGroup:(id)arg1 withMemberList:(id)arg2;
- (_Bool)CreateGroup:(id)arg1 withMemberList:(id)arg2;
- (void)initDB:(id)arg1 withLock:(id)arg2;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)disableChatRoomAccessVerifyWithSystemMsgWrap:(id)arg1 andNsUsrName:(id)arg2;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (void)processNewXMLInApproveScene:(id)arg1;
- (_Bool)p_addOplogType:(unsigned int)arg1 buffer:(id)arg2 needSync:(_Bool)arg3;
- (unsigned int)p_startOplogType:(unsigned int)arg1 buffer:(id)arg2 isSelfHandle:(_Bool)arg3;
- (unsigned int)p_createOpenIMProtoBufEvent:(id)arg1 forCgi:(unsigned int)arg2 andUserData:(id)arg3 eventHandler:(Class)arg4;
- (id)p_genContactFromMemberResp:(id)arg1;
- (id)p_handleMemContact:(id)arg1;
- (void)OpenIMMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnOpenIMOplogResp:(id)arg1;
- (void)OnOpenIMOplogRespForModTopic:(id)arg1 Resp:(id)arg2;
- (void)OnOpenIMOplogRespForSetChatRoomAnnouncement:(id)arg1 Resp:(id)arg2;
- (_Bool)setOpenImChatRoom:(id)arg1 mute:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setOpenImChatRoom:(id)arg1 top:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)setOpenImChatRoom:(id)arg1 inContactBook:(_Bool)arg2 sync:(_Bool)arg3;
- (_Bool)SetOpenIMGroupShowDislayName:(_Bool)arg1 forGroup:(id)arg2 sync:(_Bool)arg3;
- (unsigned int)SetOpenIMGroupSelfDisplayName:(id)arg1 DisplayName:(id)arg2;
- (_Bool)SetOpenIMChatRoomAnnouncement:(id)arg1 Announcement:(id)arg2;
- (_Bool)QuitOpenIMGroup:(id)arg1 withUsrName:(id)arg2;
- (_Bool)SetOpenIMGroupTopic:(id)arg1 withTopic:(id)arg2;
- (void)OnOpenIMGetChatRoomMemberDetail:(id)arg1;
- (_Bool)GetOpenIMChatRoomMemberDetail:(id)arg1;
- (void)OnGetOpenIMChatRoomInfoResp:(id)arg1;
- (_Bool)GetOpenIMChatRoomInfo:(id)arg1;
- (void)OnInviteOpenIMChatRoomMemberResp:(id)arg1;
- (_Bool)InviteOpenIMGroupMember:(id)arg1 withMemberList:(id)arg2 withUserData:(id)arg3;
- (void)OnDeleteOpenIMChatRoomMemberResponse:(id)arg1;
- (_Bool)DeleteOpenIMGroupMember:(id)arg1 withMemberList:(id)arg2;
- (void)OnAddOpenIMChatRoomMember:(id)arg1;
- (_Bool)AddOpenIMGroupMember:(id)arg1 withMemberList:(id)arg2;
- (id)HandleCreateOpenIMChatRoomOK:(id)arg1;
- (int)OnOpenIMCreateChatRoom:(id)arg1;
- (_Bool)CreateOpenIMGroupWithMemberList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

