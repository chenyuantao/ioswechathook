//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSMutableArray, NSString, PreDownloadInfo, SKBuiltinBuffer_t, SnsRedEnvelops, SnsWeAppInfo;

@interface SnsObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *blackList; // @dynamic blackList;
@property(nonatomic) unsigned int blackListCount; // @dynamic blackListCount;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(retain, nonatomic) NSMutableArray *commentUserList; // @dynamic commentUserList;
@property(nonatomic) unsigned int commentUserListCount; // @dynamic commentUserListCount;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(nonatomic) unsigned int deleteFlag; // @dynamic deleteFlag;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(nonatomic) unsigned int groupCount; // @dynamic groupCount;
@property(retain, nonatomic) NSMutableArray *groupList; // @dynamic groupList;
@property(retain, nonatomic) NSMutableArray *groupUser; // @dynamic groupUser;
@property(nonatomic) unsigned int groupUserCount; // @dynamic groupUserCount;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) unsigned int isNotRichText; // @dynamic isNotRichText;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(retain, nonatomic) NSMutableArray *likeUserList; // @dynamic likeUserList;
@property(nonatomic) unsigned int likeUserListCount; // @dynamic likeUserListCount;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned int noChange; // @dynamic noChange;
@property(retain, nonatomic) SKBuiltinBuffer_t *objectDesc; // @dynamic objectDesc;
@property(retain, nonatomic) SKBuiltinBuffer_t *objectOperations; // @dynamic objectOperations;
@property(retain, nonatomic) PreDownloadInfo *preDownloadInfo; // @dynamic preDownloadInfo;
@property(nonatomic) unsigned long long referId; // @dynamic referId;
@property(retain, nonatomic) NSString *referUsername; // @dynamic referUsername;
@property(retain, nonatomic) SnsRedEnvelops *snsRedEnvelops; // @dynamic snsRedEnvelops;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) SnsWeAppInfo *weAppInfo; // @dynamic weAppInfo;
@property(nonatomic) unsigned int withUserCount; // @dynamic withUserCount;
@property(retain, nonatomic) NSMutableArray *withUserList; // @dynamic withUserList;
@property(nonatomic) unsigned int withUserListCount; // @dynamic withUserListCount;

@end

