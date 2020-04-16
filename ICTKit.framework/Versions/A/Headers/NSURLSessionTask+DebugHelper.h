/*!
 @header    NSURLSessionTask+DebugHelper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.1
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURLSessionTask (DebugHelper)

- (NSDictionary *)currentSession API_AVAILABLE(ios(8.0));

- (NSDictionary *)currentSessionWithAdditionalSender:(nullable id)sender API_AVAILABLE(ios(8.0));

@end

NS_ASSUME_NONNULL_END
