//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class BaseRequest, SKBuiltinBuffer_t;

@interface BizScanImageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int clientScanId; // @dynamic clientScanId;
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(retain, nonatomic) SKBuiltinBuffer_t *imageBuffer; // @dynamic imageBuffer;
@property(nonatomic) unsigned int imageType; // @dynamic imageType;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int totalLength; // @dynamic totalLength;

@end

