//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "EnterpriseRoomContactSelectDelegate.h"
#import "IEnterpriseContactMgrExt.h"
#import "IEnterpriseGroupMgrExt.h"
#import "IEnterpriseMsgExt.h"
#import "MMWebViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMLoadingView, NSString;

@interface EnterpriseMsgContentLogicController : BaseMsgContentLogicController <MMWebViewDelegate, IEnterpriseMsgExt, IEnterpriseContactMgrExt, IEnterpriseGroupMgrExt, UIAlertViewDelegate, EnterpriseRoomContactSelectDelegate>
{
    _Bool m_bStartShowRoomContactSelector;
    _Bool m_bPresentRoomContactSelector;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(_Bool)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)onFinishSelectedLocation;
- (void)onWebViewWillClose:(id)arg1;
- (void)enterChat:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)OpenEmoticonToolView:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)isLastCharacterAlphaNumeric:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)CustomToolViewEX:(id)arg1;
- (void)SaveContentAndState;
- (id)getExtraInfo;
- (void)delChatroomMember:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)showRoomContactSelectorViewController;
- (void)clearAtMeCount;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)onInputTextDeleteAll;
- (void)AddAtUser:(id)arg1;
- (id)GetRightBarBtn;
- (id)GetRightBarButtonImageName;
- (id)onGetRightBarButton;
- (_Bool)canShowChatRoomInfo;
- (void)setNeedUpdateTitle:(_Bool *)arg1;
- (_Bool)ShouldShowMultiSelectMode;
- (_Bool)isShowHeadImage:(id)arg1;
- (_Bool)CanRemoteRecord;
- (_Bool)CanSendShareCard;
- (_Bool)CanSendMultiImage;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanShowLocation;
- (_Bool)CanShowFavorite;
- (_Bool)CanShowSight;
- (_Bool)CanShowBanner;
- (_Bool)CanOpenServiceAppList;
- (_Bool)CanSelectMyFavoritesItemForSendingMsg;
- (unsigned int)getSearchedMsgLocalID;
- (_Bool)ShouldShowSearchBar;
- (_Bool)shouldSearchedMsgHightlight;
- (_Bool)ShouldShowSearchedAnyMsg;
- (_Bool)CanRotateOrientation;
- (_Bool)CanWXTalk;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanAddApp;
- (_Bool)CanOpenCamera;
- (_Bool)CanLongPressHeadImage;
- (_Bool)CanSend3rdMsg;
- (_Bool)CanSendVoipMsg;
- (_Bool)CanOpenTrackRoom;
- (_Bool)CanSendLocationMsg;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendVoiceMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (_Bool)HasCustomToolBar;
- (id)canFavoritesItemBeForward:(id)arg1;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (id)FormLocationMsg:(id)arg1;
- (void)SendLocationMessageWithLocation:(id)arg1;
- (void)SetMsgPlayed:(id)arg1;
- (_Bool)IsRecording;
- (void)CancelRecording;
- (void)StopRecording;
- (void)StartRecording;
- (id)FormVoiceMsg:(id)arg1 withFilePath:(id)arg2;
- (id)formImageMsgByMMAsset:(id)arg1 toUserName:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (void)SendTextMessage:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)genMsgSource;
- (void)RevokeMsg:(id)arg1;
- (void)modMsgWithoutNotify:(id)arg1;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModImgStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetFirstUnReadMessage;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)getEnterpriseContact;
- (id)GetContactName;
- (void)setM_contact:(id)arg1;
- (void)updateTitleView;
- (id)GetTitleTailImage;
- (id)getTitleView:(id)arg1 withSubTitle:(id)arg2;
- (void)UnRegister;
- (void)Register;
- (void)onWillPushFromNavigationController;
- (void)onWillPopFromNavigationController;
- (void)DidEnterBackground:(id)arg1;
- (void)ViewDidInit;
- (void)initViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

