/*!
 @header    NSJSONSerialization+XMLConverter.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.1
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Tme block called when XML-data convert finished
 * @param success YES - when XML-data convert successful, otherwise - NO.
 * @param JSONObject Contains convert XML-data when success, otherwise - nil.
 * @param error Contains error of processing XML-data if exist, otherwise - nil.
 */
typedef void (^NSJSONSerializationCompletion)(BOOL success,  NSDictionary * _Nullable JSONObject, NSError * _Nullable error) API_AVAILABLE(ios(8.0));

@interface NSJSONSerialization (XMLConverter)

/**
 *Convert XML data containing in input NSString object .
 *@param string Contains an NSString object with XML-data in the string format.
 *@param completion A block of code will be executed when the processing of XML-data is completed.
 *This parameter must not be NULL.
 */
+ (void)convertXMLString:(NSString *)string completion:(_Nullable NSJSONSerializationCompletion)completion API_AVAILABLE(ios(8.0));

/**
 *Convert XML data containing in input file.
 *@param filePath Contains an NSString object with absolute path to file with XML-data.
 *@param completion A block of code will be executed when the processing of XML-data is completed.
 *This parameter must not be NULL.
 */
+ (void)convertXMLFile:(NSString *)filePath completion:(_Nullable NSJSONSerializationCompletion)completion API_AVAILABLE(ios(8.0));

/**
 *Convert XML data containing in input NSData object.
 *@param data Contains NSData object with encapsulated XML contents.
 *@param completion A block of code will be executed when the processing of XML-data is completed.
 *This parameter must not be NULL.
 */
+ (void)convertXMLData:(NSData *)data completion:(_Nullable NSJSONSerializationCompletion)completion API_AVAILABLE(ios(8.0));

/**
 *Convert XML content referenced by the given URL.
 *@param url Contains an NSURL object specifying a URL.
 *@param completion A block of code will be executed when the processing of XML-data is completed.
 *This parameter must not be NULL.
 */
+ (void)convertXMLURL:(NSURL *)url completion:(_Nullable NSJSONSerializationCompletion)completion API_AVAILABLE(ios(8.0));

/**
 *Convert XML content from the specified stream.
 *@param stream Contains the specified input stream in NSInputStream object.
 *@param completion A block of code will be executed when the processing of XML-data is completed.
 *This parameter must not be NULL.
 */
+ (void)convertXMLStream:(NSInputStream *)stream completion:(_Nullable NSJSONSerializationCompletion)completion API_AVAILABLE(ios(8.0));

@end

NS_ASSUME_NONNULL_END
