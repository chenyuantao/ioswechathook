//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSMutableArray, NSString;

@interface UploadDeviceStepReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bundleid; // @dynamic bundleid;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic) unsigned int fromTime; // @dynamic fromTime;
@property(nonatomic) unsigned int hkStepCount; // @dynamic hkStepCount;
@property(nonatomic) unsigned int m7StepCount; // @dynamic m7StepCount;
@property(retain, nonatomic) NSString *phoneModel; // @dynamic phoneModel;
@property(retain, nonatomic) NSMutableArray *sourceDevice; // @dynamic sourceDevice;
@property(nonatomic) unsigned int stepCount; // @dynamic stepCount;
@property(retain, nonatomic) NSString *systemZone; // @dynamic systemZone;
@property(nonatomic) unsigned int toTime; // @dynamic toTime;

@end

