/*!
 @header    NSXMLSerialization.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.15
 */

#import <Foundation/Foundation.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wobjc-missing-property-synthesis"


typedef NS_ENUM(NSInteger, NSXMLDictionaryAttributesMode)
{
    NSXMLDictionaryAttributesModePrefixed = 0, //default
    NSXMLDictionaryAttributesModeDictionary,
    NSXMLDictionaryAttributesModeUnprefixed,
    NSXMLDictionaryAttributesModeDiscard
}API_AVAILABLE(ios(8.0));


typedef NS_ENUM(NSInteger, NSXMLDictionaryNodeNameMode)
{
    NSXMLDictionaryNodeNameModeRootOnly = 0, //default
    NSXMLDictionaryNodeNameModeAlways,
    NSXMLDictionaryNodeNameModeNever
}API_AVAILABLE(ios(8.0));


static NSString *const NSXMLDictionaryAttributesKey   = @"__attributes";
static NSString *const NSXMLDictionaryCommentsKey     = @"__comments";
static NSString *const NSXMLDictionaryTextKey         = @"__text";
static NSString *const NSXMLDictionaryNodeNameKey     = @"__name";
static NSString *const NSXMLDictionaryAttributePrefix = @"_";

NS_SWIFT_NAME(XMLSerialization)
@interface NSXMLSerialization : NSObject <NSCopying>

+ (NSXMLSerialization *)sharedInstance API_AVAILABLE(ios(8.0));

@property (nonatomic, assign) BOOL collapseTextNodes API_AVAILABLE(ios(8.0)); // defaults to YES
@property (nonatomic, assign) BOOL stripEmptyNodes API_AVAILABLE(ios(8.0));   // defaults to YES
@property (nonatomic, assign) BOOL trimWhiteSpace API_AVAILABLE(ios(8.0));    // defaults to YES
@property (nonatomic, assign) BOOL alwaysUseArrays API_AVAILABLE(ios(8.0));   // defaults to NO
@property (nonatomic, assign) BOOL preserveComments API_AVAILABLE(ios(8.0));  // defaults to NO
@property (nonatomic, assign) BOOL wrapRootNode;      // defaults to NO

@property (nonatomic, assign) NSXMLDictionaryAttributesMode attributesMode API_AVAILABLE(ios(8.0));
@property (nonatomic, assign) NSXMLDictionaryNodeNameMode nodeNameMode API_AVAILABLE(ios(8.0));

- (NSDictionary *)dictionaryWithParser:(NSXMLParser *)parser API_AVAILABLE(ios(8.0));
- (NSDictionary *)dictionaryWithData:(NSData *)data API_AVAILABLE(ios(8.0));
- (NSDictionary *)dictionaryWithString:(NSString *)string API_AVAILABLE(ios(8.0));
- (NSDictionary *)dictionaryWithFile:(NSString *)path API_AVAILABLE(ios(8.0));

@end


@interface NSDictionary (NSXMLDictionary)

+ (NSDictionary *)dictionaryWithXMLParser:(NSXMLParser *)parser API_AVAILABLE(ios(8.0));
+ (NSDictionary *)dictionaryWithXMLData:(NSData *)data API_AVAILABLE(ios(8.0));
+ (NSDictionary *)dictionaryWithXMLString:(NSString *)string API_AVAILABLE(ios(8.0));
+ (NSDictionary *)dictionaryWithXMLFile:(NSString *)path API_AVAILABLE(ios(8.0));

- (NSDictionary *)attributes API_AVAILABLE(ios(8.0));
- (NSDictionary *)childNodes API_AVAILABLE(ios(8.0));
- (NSArray *)comments API_AVAILABLE(ios(8.0));
- (NSString *)nodeName API_AVAILABLE(ios(8.0));
- (NSString *)innerText API_AVAILABLE(ios(8.0));
- (NSString *)innerXML API_AVAILABLE(ios(8.0));
- (NSString *)XMLString API_AVAILABLE(ios(8.0));

- (NSArray *)arrayValueForKeyPath:(NSString *)keyPath API_AVAILABLE(ios(8.0));
- (NSString *)stringValueForKeyPath:(NSString *)keyPath API_AVAILABLE(ios(8.0));
- (NSDictionary *)dictionaryValueForKeyPath:(NSString *)keyPath API_AVAILABLE(ios(8.0));

@end


@interface NSString (NSXMLDictionary)

- (NSString *)XMLEncodedString API_AVAILABLE(ios(8.0));

@end


#pragma GCC diagnostic pop
