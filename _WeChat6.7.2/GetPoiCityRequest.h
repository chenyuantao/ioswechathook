//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, LbsLocation, NSString;

@interface GetPoiCityRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *administrativeAreaLevel1; // @dynamic administrativeAreaLevel1;
@property(retain, nonatomic) NSString *administrativeAreaLevel2; // @dynamic administrativeAreaLevel2;
@property(retain, nonatomic) NSString *administrativeAreaLevel3; // @dynamic administrativeAreaLevel3;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) LbsLocation *loc; // @dynamic loc;
@property(retain, nonatomic) NSString *locality; // @dynamic locality;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *srcCity; // @dynamic srcCity;
@property(retain, nonatomic) NSString *sublocality; // @dynamic sublocality;

@end

