/*!
 @header    NSMethod.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.2
 */

#import <Foundation/Foundation.h>

#pragma mark - NSString
//trim — Strip whitespace (or other characters) from the beginning and end of a string.
NSString *trim (NSString *input);

//exportNull - Convert NSNull to an object. If inputClass is nil, default is NSString.
id exportNull (id input,Class inputClass);

//compare Class
BOOL ObjectClassIsKindOfClass(id object, Class inputClass);

#pragma mark - Network Manager
typedef NS_ENUM(NSUInteger, CFNetworManagerReachabilityType)
{
    CFNetworManagerReachabilityWifiConnection = 0,//wifi only
    CFNetworManagerReachabilityCellularConnection = 1,//may be 2G, 3G, 4G...
    CFNetworManagerReachabilityUnknow = 3,//not reachable
};

typedef void(^NetworkReachabilityCompletion)(BOOL isConnected, CFNetworManagerReachabilityType reachabilityType);

BOOL NetworkReachableManager(NetworkReachabilityCompletion completion_t);
