//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseResponse, CardsHomePageList, NSString, SecEntranceCardList;

@interface GetCardsLayoutResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CardsHomePageList *cardsHomePageList; // @dynamic cardsHomePageList;
@property(nonatomic) unsigned int homePageCardNum; // @dynamic homePageCardNum;
@property(retain, nonatomic) NSString *jsonRet; // @dynamic jsonRet;
@property(retain, nonatomic) NSString *layoutBuff; // @dynamic layoutBuff;
@property(retain, nonatomic) SecEntranceCardList *secEntranceCardList; // @dynamic secEntranceCardList;

@end

