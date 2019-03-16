
#ifndef __COMMAND_HANDLER_H__
#define __COMMAND_HANDLER_H__

struct AutoBuffer {
    char *_field1;
    long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

@interface DoMsg : NSObject 
+ (void) PostUrl:(NSDictionary *)body;
+ (void) PostNats:(NSDictionary *)body;
@end

@interface QBRSA : NSObject
+ (id)dataToHexString:(id)arg1;
+ (id)encryptOAEPData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 padding:(unsigned int)arg2 publicKey:(id)arg3;
@end

@interface QBBeaconUtil : NSObject
+ (id)getIDFA;
+ (id)getIDFV;
@end


#endif