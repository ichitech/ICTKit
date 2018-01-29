/*!
 @header    NSURLSessionDataTask+DebugHelper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.2
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURLSessionDataTask (DebugHelper)

- (NSDictionary *)currentSession;

- (NSDictionary *)currentSessionWithAdditionalSender:(nullable id)sender;

@end

NS_ASSUME_NONNULL_END
