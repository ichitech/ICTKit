/*!
 @header    NSGeneralTest.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  6.0
 */

#import <Foundation/Foundation.h>
#import "NSDebug.h"

@interface NSDefinition : NSObject
{
    @private
    NSString *value;
    NSString *key;
    NSInteger maxlength;
    NSInteger minlength;
}

@property (atomic, readonly) NSString *value;
@property (atomic, readonly) NSString *key;
@property (atomic, readonly) NSInteger maxlength;
@property (atomic, readonly) NSInteger minlength;

/*!
 * @abstract Initialize NSDefinition.
 *
 * @return NSDefinition Object.
 *
 * @param <aKey>  It's a kind of NSString. It's key of object.
 * @param <length>  It's a kind of NSLength. It contain min length and max length of value.
 *
 * @example 
        NSLength length = NSMakeLength(10,30);
 
        NSString *key   = @"name";
 
        [NSDefinition definitionKey:name withLength:length];
 */
+ (instancetype) definitionKey:(NSString *)aKey withLength:(NSLength)length;

/*!
 * @abstract Initialize NSDefinition.
 *
 * @return NSDefinition Object.
 *
 * @param <aKey>  It's a kind of NSString. It's key of object.
 * @param <aValue>  It's a kind of NSString. It's value of object.
 *
 * @example
        NSString *key   = @"name";
 
        NSString *value   = @"Harry";
 
        [NSDefinition definitionKey:name withValue:value];
 */
+ (instancetype) definitionKey:(NSString *)aKey withValue:(NSString *)aValue;

@end

@interface NSGeneralTest : NSObject

/*!
 * @abstract Initialize NSGeneralTest.
 *
 * @return NSGeneralTest Object.
 */
+ (instancetype) general;

/*!
 * @abstract Clean data & release memory.
 */
+ (void) clean;

/*!
 * @abstract This method will return a random string with NSLength.
 *
 * @param <length> It's a kind of NSLength. It contain min length and max length of general string.
 * @example
        NSLength length = NSMakeLength(10,30);
 
        [[NSGeneralTest general] stringWithRandom:length];
 */
- (NSString *) stringWithRandom:(NSLength)length;

/*!
 * @abstract This method will return a random array which contain string object.
 *
 * @param <aLength> It's a kind of NSLength. It contain min length and max length of general array.
 * @param <sLength> It's a kind of NSLength. It contain min length and max length of general string that is object of array.
 * @example
        NSLength alength = NSMakeLength(10,30);
 
        NSLength slength = NSMakeLength(0,30);
 
        [[NSGeneralTest general] arrayContainStringWithRandom:alength containString:slength];
 */
- (NSArray *) arrayContainStringWithRandom:(NSLength)aLength containString:(NSLength)sLength;

/*!
 * @abstract This method will return a random array which contain string object.
 *
 * @param <aLength> It's a kind of NSLength. It contain min length and max length of general array.
 * @param <sLength> It's a kind of NSLength. It contain min length and max length of general string that is object of array.
 * @example
        NSLength alength = NSMakeLength(10,30);
 
        NSMutableArray *arrayDefinition = [NSMutableArray array];
 
        NSDefinition *def = [NSDefinition definitionKey:@"name" withLength:NSMakeLength(10,40)];
 
        [arrayDefinition addObject:def];
 
        ...
 
        [[NSGeneralTest general] arrayContainDictionaryWithRandom:aLength containDictionaryDefinition:arrayDefinition];
 */
- (NSArray *) arrayContainDictionaryWithRandom:(NSLength)aLength containDictionaryDefinition:(NSArray *)definitions;

@end
