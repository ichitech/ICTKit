/*!
 @header    NSData+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
  @version   8.13
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (Helper)

/*!
 * @abstract Encodes the given data with base64.
 */
+ (NSData *) dataFromBase64Data:(NSData*)base64Data API_AVAILABLE(ios(8.0));

/*!
 * @abstract Decode the given data with base64 string.
 */
+ (NSData *) base64DataFromString: (NSString *)string  NS_DEPRECATED_IOS(2_0, 6_0, "Use +dataWithBase64EncodedString instead.");

@end


/*
 * Category that serializes and deserializes an NSData to/from a base64 encoded string.
 */
@interface NSData (Base64)
/// Convert a base64 encoded string to an NSData object.
+ (NSData *) dataWithBase64EncodedString:(NSString *)string API_AVAILABLE(ios(6.1))  ;  //  Padding '=' characters are optional. Whitespace is ignored.
/// Convert self to a base64 encoded string.
- (nullable NSString *) base64Encodings API_AVAILABLE(ios(7.1));

@end

NS_ASSUME_NONNULL_END
