/*!
 @header    NSString+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  6.0
 */

#import <Foundation/Foundation.h>

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

@end

@interface NSString(Validate)

/*!
 * @abstract Validate Email.
 *
 * @example expamle@mail.com
 */
- (BOOL) isEmail  NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Return YES if string contain at least 1 character (MUST BE NOT SPACE CHARACTER).
 *
 */
- (BOOL) isset NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Validate URL.
 *
 * @example http://example.com or https://expamle.com .
 */
- (BOOL) isURL NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Validate Numric.
 *
 */
- (BOOL) isNumric NS_AVAILABLE_IOS(7_0);

/*!
 * @abstract Validate Special Character.
 *
 */
- (BOOL) isContainSpecialCharacter  NS_DEPRECATED_IOS(2_0, 8_0, "isContainSpecialCharacter: has been replaced by isContainSpecialCharacterWithAllowSysbols:") ;

/*!
 * @abstract Validate Special Character.
 *
 * @param All your symbols you want to allow
 */
- (BOOL) isContainSpecialCharacterWithAllowSymbols:(NSArray *)symAllows NS_AVAILABLE_IOS(7_0);

@end

@interface NSString (URLEnDeCode)

- (NSString *) stringByURLDecoding NS_AVAILABLE_IOS(6_0) ;

- (NSString *) stringByURLEncoding NS_AVAILABLE_IOS(6_0) ;

- (NSString *) stringURLAddQueryWithDictionary:(NSDictionary *)dictionary NS_AVAILABLE_IOS(6_0) ;

- (NSDictionary *) dictionaryQuery NS_AVAILABLE_IOS(6_0) ;

@end

@interface NSString (ASCIIHelper)

- (NSDictionary *) convertToASCII;

- (NSInteger ) asciiCode;

+ (NSString *) stringByASCIICode:(unichar )asciiCode;

@end

@interface NSString (SubStringHelper)

//Extract text substring from NSString at given index 
- (NSString *) extractTextToIndex:(NSInteger)index NS_AVAILABLE_IOS(7_0);

//Specify exactly only word characters from NSString at given index
- (NSString *) extractWordAtIndex:(NSInteger) index NS_AVAILABLE_IOS(7_0);

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
- (NSString *)stringByStrippingTags __attribute__((deprecated));

@end
