//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, NSString;

@interface WeAppSearchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int cliVersion; // @dynamic cliVersion;
@property(nonatomic) unsigned int displayPattern; // @dynamic displayPattern;
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(retain, nonatomic) NSString *keywordId; // @dynamic keywordId;
@property(nonatomic) double locationX; // @dynamic locationX;
@property(nonatomic) double locationY; // @dynamic locationY;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *suggestionBuf; // @dynamic suggestionBuf;
@property(retain, nonatomic) NSString *suggestionId; // @dynamic suggestionId;
@property(nonatomic) unsigned int suggestionPos; // @dynamic suggestionPos;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *wordingId; // @dynamic wordingId;

@end

