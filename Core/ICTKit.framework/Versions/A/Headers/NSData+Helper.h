//
//  NSData+Helper.h
//  HarryFramework
//
//  Created by HarryTran on 11/10/13.
//  Copyright (c) 2013 Harry Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Helper)

/*!
 * @abstract Encodes the given data with base64.
 */
+ (NSData *) dataFromBase64Data:(NSData*)base64Data;

/*!
 * @abstract Decode the given data with base64 string.
 */
+ (NSData *) base64DataFromString: (NSString *)string  NS_DEPRECATED_IOS(2_0, 6_0, "base64DataFromString: has been replaced by dataWithBase64EncodedString");

@end


/** Category that serializes and deserializes an NSData to/from a base64 encoded string.
 */
@interface NSData (Base64)
/// Convert a base64 encoded string to an NSData object.
+ (NSData *) dataWithBase64EncodedString:(NSString *)string NS_AVAILABLE_IOS(6_1)  ;  //  Padding '=' characters are optional. Whitespace is ignored.
/// Convert self to a base64 encoded string.
- (NSString *) base64Encodings NS_AVAILABLE_IOS(7_1);

@end
