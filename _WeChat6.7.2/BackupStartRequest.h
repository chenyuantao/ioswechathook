//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BackupStartGeneralInfo, NSString;

@interface BackupStartRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long bigDataSize; // @dynamic bigDataSize;
@property(nonatomic) unsigned long long dataSize; // @dynamic dataSize;
@property(retain, nonatomic) BackupStartGeneralInfo *generalInfo; // @dynamic generalInfo;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned long long msgCount; // @dynamic msgCount;
@property(nonatomic) unsigned long long sessionCount; // @dynamic sessionCount;
@property(nonatomic) int transferType; // @dynamic transferType;

@end

