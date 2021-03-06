#import <Foundation/Foundation.h>

/**
 
 Simple, generic iOS keychain wrapper that encapsulates CRUD operations.
 
 **/

@interface IOBSimpleKeychain : NSObject

/*
 Initializes a IOBSimpleKeychain with a serviceName that represents your organization or your application.
 */
- (instancetype)initWithServiceName:(NSString *)serviceName;

/*
 Initializes a IOBSimpleKeychain with a serviceName that represents your organization and the sharedKeyChainAccessGroup defined in your project's
 Xcode -> Capabilities -> Keychain Sharing -> group identifier
 */
- (instancetype)initWithServiceName:(NSString *)serviceName
          sharedKeychainAccessGroup:(NSString *)sharedKeychainAccessGroup;

- (NSMutableString *)stringForKey:(NSString *)key;
- (BOOL)putString:(NSString *)string atKey:(NSString *)key;

- (NSMutableData *)dataForKey:(NSString *)key;
- (BOOL)putData:(NSData *)data atKey:(NSString *)key;

- (BOOL)removeItemForKey:(NSString *)key;

@end