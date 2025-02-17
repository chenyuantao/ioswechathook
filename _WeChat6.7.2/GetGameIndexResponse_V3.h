//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class AppStoreControl, BaseResponse, DownloadGuidance, FeedBackEntrance, GameManagementEntrance, GameRecommend, IndexGift, IndexTheme, Installed, LibraryEntrance, NSString, NewHot, RecentPlayInfo, TopRecommendBanner;

@interface GetGameIndexResponse_V3 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AppStoreControl *appStoreControl; // @dynamic appStoreControl;
@property(retain, nonatomic) NSString *appstoreGoodsId; // @dynamic appstoreGoodsId;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *classifyUrl; // @dynamic classifyUrl;
@property(retain, nonatomic) FeedBackEntrance *feedBackEntrance; // @dynamic feedBackEntrance;
@property(nonatomic) unsigned int gameDetailJumpType; // @dynamic gameDetailJumpType;
@property(retain, nonatomic) NSString *gameDetailUrl; // @dynamic gameDetailUrl;
@property(retain, nonatomic) GameManagementEntrance *gameManagement; // @dynamic gameManagement;
@property(retain, nonatomic) DownloadGuidance *googlePlayTips; // @dynamic googlePlayTips;
@property(retain, nonatomic) NewHot *hot; // @dynamic hot;
@property(retain, nonatomic) IndexGift *indexGift; // @dynamic indexGift;
@property(retain, nonatomic) Installed *installed; // @dynamic installed;
@property(retain, nonatomic) LibraryEntrance *libraryEntrance; // @dynamic libraryEntrance;
@property(retain, nonatomic) IndexGift *msgCenter; // @dynamic msgCenter;
@property(retain, nonatomic) IndexGift *myProfile; // @dynamic myProfile;
@property(retain, nonatomic) RecentPlayInfo *recentPlayInfo; // @dynamic recentPlayInfo;
@property(retain, nonatomic) NSString *searchPlaceHolder; // @dynamic searchPlaceHolder;
@property(retain, nonatomic) IndexTheme *theme; // @dynamic theme;
@property(retain, nonatomic) GameRecommend *todayGameRecommend; // @dynamic todayGameRecommend;
@property(retain, nonatomic) TopRecommendBanner *topRecommendBanner; // @dynamic topRecommendBanner;

@end

