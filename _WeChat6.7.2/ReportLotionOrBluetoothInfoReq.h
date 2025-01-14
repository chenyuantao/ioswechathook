//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSData, NSString;

@interface ReportLotionOrBluetoothInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool authorizeLocation; // @dynamic authorizeLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) NSData *customManuFacturerData; // @dynamic customManuFacturerData;
@property(nonatomic) _Bool hasTurnedOnBluetooth; // @dynamic hasTurnedOnBluetooth;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) float rssi; // @dynamic rssi;

@end

