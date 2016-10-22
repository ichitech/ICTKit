/*!
 @header    NSString+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString  *__nonnull NSStringFromObject(id __nonnull object) NS_AVAILABLE_IOS(7_0);

@interface NSString (Helper)

/*! 
 * @abstract  This function returns a string with whitespace stripped from the beginning and end of string.
 */

+ (NSString *)stringByTrimString:(NSString *)string NS_DEPRECATED_IOS(2_0, 7_1, "stringByTrimString: has been replaced by stringByTrimString");
- (NSString *)stringByTrimString;

/*!
 * @abstract Calculates the MD5 hash of str using the » RSA Data Security, Inc. MD5 Message-Digest Algorithm, and returns that hash.
 *
 * @see http://www.faqs.org/rfcs/rfc1321.html
 */
+ (NSString *) stringByMD5Decrypter:(NSString *)string NS_DEPRECATED_IOS(2_0, 7_1, "stringByMD5Decrypter: has been replaced by stringByMD5Decrypter");
- (NSString *) stringByMD5Decrypter;

/*!
 * @abstract Decodes a base64 encoded string.
 */
+ (NSString *)stringFromBase64String:(NSString *)string NS_DEPRECATED_IOS(2_0, 7_1);

/*!
 * @abstract Encodes the given string data with base64.
 */
+ (NSString *)base64StringFromString:(NSString*)string NS_DEPRECATED_IOS(2_0, 7_1);

/*!
 * @abstract Decodes a base64 encoded data.
 */
+ (NSString *)base64DataFromData:(NSData *)data NS_DEPRECATED_IOS(2_0, 7_1);

/*!
 * @abstract Get the last character of string.
 */
- (NSString *)lastCharacter NS_DEPRECATED_IOS(2_0, 7_1);

/*!
 * @abstract Get the first character of string.
 */
- (NSString *)firstCharacter NS_DEPRECATED_IOS(2_0, 7_1);

@end

@interface NSString(Validate)

/*!
 * @abstract Validate Email.
 *
 * @example expamle@mail.com
 */
- (BOOL)isEmail  NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Return YES if string contain at least 1 character (MUST BE NOT SPACE CHARACTER).
 *
 */
- (BOOL)isset NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Validate URL.
 *
 * @example http://example.com or https://expamle.com .
 */
- (BOOL)isURL NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Validate Numric.
 *
 */
- (BOOL)isNumric NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Validate Special Character.
 *
 */
- (BOOL)isContainSpecialCharacter  NS_DEPRECATED_IOS(2_0, 8_0, "isContainSpecialCharacter: has been replaced by hasSpecialCharacterWithExceptionOfArray:") ;

/*!
 * @abstract Validate Special Character.
 *
 * @param All your symbols you want to allow
 */
- (BOOL)isContainSpecialCharacterWithAllowSymbols:(nullable NSArray<NSString *> *)symAllows NS_DEPRECATED_IOS(2_0, 8_4, "isContainSpecialCharacterWithAllowSymbols: has been replaced by hasSpecialCharacterWithExceptionOfArray:");

- (BOOL)hasSpecialCharacterWithExceptionOfArray:(nullable NSArray<NSString *> *)exceptions NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Validate string.
 *
 * @param All your characters you want to check
 */
- (BOOL)hasCharacterInArray:(nullable NSArray<NSString *> *)characters NS_AVAILABLE_IOS(7_1);

@end

@interface NSString (URLEnDeCode)

- (NSString *)stringURLByDecoding NS_AVAILABLE_IOS(8_0) ;

- (NSString *)stringURLByEncoding NS_AVAILABLE_IOS(8_0) ;

- (NSString *)stringURLByAddingQueryFromDictionary:(NSDictionary *)dictionary NS_AVAILABLE_IOS(8_0) ;

- (NSDictionary *)dictionaryQueries NS_AVAILABLE_IOS(8_0) ;

//Predicate Methods
- (NSString *)stringByURLDecoding NS_DEPRECATED_IOS(2_0, 9_0, "stringByURLDecoding has been replaced by stringURLByDecoding") ;

- (NSString *)stringByURLEncoding NS_DEPRECATED_IOS(2_0, 9_0, "stringByURLEncoding has been replaced by stringURLByEncoding") ;

- (NSString *)stringURLAddQueryWithDictionary:(NSDictionary *)dictionary NS_DEPRECATED_IOS(2_0, 9_0, "stringURLAddQueryWithDictionary: has been replaced by stringURLByAddingQueryFromDictionary:") ;

- (NSDictionary *)dictionaryQuery NS_DEPRECATED_IOS(2_0, 9_0, "dictionaryQuery: has been replaced by dictionaryQueries:") ;

@end

@interface NSString (ASCIIHelper)

- (NSDictionary *)convertToASCII;

- (NSInteger )asciiCode;

+ (NSString *)stringByASCIICode:(unichar)asciiCode;

@end

@interface NSString (SubStringHelper)

//Extract text substring from NSString at given index 
- (NSString *)extractTextToIndex:(NSInteger)index NS_AVAILABLE_IOS(7_0);

//Specify exactly only word characters from NSString at given index
- (NSString *)extractWordAtIndex:(NSInteger) index NS_AVAILABLE_IOS(7_0);

@end

@interface NSString (HTML)

// Strips HTML tags & comments, removes extra whitespace and decodes HTML character entities.
- (NSString *)stringByConvertingHTMLToPlainText;

// Decode all HTML entities using GTM.
- (NSString *)stringByDecodingHTMLEntities;

// Encode all HTML entities using GTM.
- (NSString *)stringByEncodingHTMLEntities;

// Minimal unicode encoding will only cover characters from table
// A.2.2 of http://www.w3.org/TR/xhtml1/dtds.html#a_dtd_Special_characters
// which is what you want for a unicode encoded webpage.
- (NSString *)stringByEncodingHTMLEntities:(BOOL)isUnicode;

// Replace newlines with <br /> tags.
- (NSString *)stringWithNewLinesAsBRs;

// Remove newlines and white space from string.
- (NSString *)stringByRemovingNewLinesAndWhitespace;

// Wrap plain URLs in <a href="..." class="linkified">...</a>
//  - Ignores URLs inside tags (any URL beginning with =")
//  - HTTP & HTTPS schemes only
//  - Only works in iOS 4+ as we use NSRegularExpression (returns self if not supported so be careful with NSMutableStrings)
//  - Expression: (?<!=")\b((http|https):\/\/[\w\-_]+(\.[\w\-_]+)+([\w\-\.,@?^=%&amp;:/~\+#]*[\w\-\@?^=%&amp;/~\+#])?)
//  - Adapted from http://regexlib.com/REDetails.aspx?regexp_id=96
- (NSString *)stringByLinkifyingURLs;

// DEPRECIATED - Please use NSString stringByConvertingHTMLToPlainText
- (NSString *)stringByStrippingTags NS_DEPRECATED_IOS(2_0, 7_0, "stringByStrippingTags has been replaced by stringByConvertingHTMLToPlainText");

@end

@interface NSString (ForcedUTF8)

- (nullable NSString *) forcedUTF8String NS_AVAILABLE_IOS(7_0);

@end

NS_ASSUME_NONNULL_END
