/*!
 @header    UIValidate.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.3
 @deprecated Stop supporting on iOS 7.1 or upper.
 */

#import <Foundation/Foundation.h>

NS_CLASS_DEPRECATED_IOS(2_0, 7_1, "UIValidate has been replaced by NSString(Validate)")
@interface UIValidate : NSObject

/*!
 * @abstract Validate Email.
 *
 * @param email It's a kind of NSString. Input email that will be checked.
 *
 * @example expamle@mail.com
 */
+ (BOOL) validateEmail:(NSString *)email  NS_DEPRECATED_IOS(2_0, 7_1, "validateEmail: has been replaced by (NSString) isEmail");

/*!
 * @abstract Validate string limit minimum length.
 *
 * @param string It's a kind of NSString. Input string that will be checked.
 *
 * @param length It's a kind of integerValue. Minimum length.
 */
+ (BOOL) validateText:(NSString *)string withMinimumLength:(int)length NS_DEPRECATED_IOS(2_0, 7_1);

/*!
 * @abstract Validate string limit maximum length.
 *
 * @param string It's a kind of NSString. Input string that will be checked.
 *
 * @param length It's a kind of integerValue. Maximum length.
 */
+ (BOOL) validateText:(NSString *)string withMaximumLength:(int)length NS_DEPRECATED_IOS(2_0, 7_1);

/*!
 * @abstract Validate URL.
 *
 * @param candidate It's a kind of NSString. Input string that will be checked.
 *
 * @example http://example.com or https://expamle.com .
 */
+ (BOOL) validateURL:(NSString *)candidate NS_DEPRECATED_IOS(2_0, 7_1, "validateURL: has been replaced by (NSString) isURL");

/*!
 * @abstract Validate Numric.
 *
 * @param input It's a kind of NSString. Input string that will be checked.
 *
 */
+ (BOOL) validateNumric:(NSString*)input NS_DEPRECATED_IOS(2_0, 7_1, "validateNumric: has been replaced by (NSString) isNumric");

/*!
 * @abstract Validate Special Character.
 *
 * @param string It's a kind of NSString. Input string that will be checked.
 *
 */
+ (BOOL) validateSpecialCharacter:(NSString *)string NS_DEPRECATED_IOS(2_0, 7_1, "validateSpecialCharacter: has been replaced by (NSString) isContainSpecialCharacter");


@end
