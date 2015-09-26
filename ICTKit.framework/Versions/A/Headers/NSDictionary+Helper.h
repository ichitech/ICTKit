/*!
 @header    NSDate+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   6.0
 */


#import <Foundation/Foundation.h>

@interface NSDictionary (QueryString)

/*!
 * Initializes a new dictionary containing the keys and values from the
 * specified query string.
 *
 * @param queryString The query parameters to parse
 *
 * @returns A new dictionary containing the specified query parameters.
 *
**/
+ (nullable NSDictionary *)dictionaryWithQueryString:(nonnull NSString *)queryString NS_AVAILABLE_IOS(6_0) ;

/*!
 *
 * Returns the dictionary as a query string.
 *
**/
- (nullable NSString *)queryStringValue NS_AVAILABLE_IOS(6_0) ;;

@end
