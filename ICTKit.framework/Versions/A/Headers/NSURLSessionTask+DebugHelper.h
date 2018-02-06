/*!
 @header    NSURLSessionTask+DebugHelper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.6
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURLSessionTask (DebugHelper)

- (NSDictionary *)currentSession;

- (NSDictionary *)currentSessionWithAdditionalSender:(nullable id)sender;

@end

NS_ASSUME_NONNULL_END
