/*!
 @header    NSArray+NewCategory.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.2
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Random)

/**
 * @abstract Return new array with random objects.
 *
 * @param count The count of new array.
 */
- (nonnull NSArray *) arrayByRandomCount:(NSInteger)count NS_AVAILABLE_IOS(7_0);

/**
 * @abstract Get a random object from array.
 * @return Random Object.
 */
- (nullable id) randomObject NS_AVAILABLE_IOS(7_0);

@end

@interface NSArray (ForcedUTF8)

- (nullable NSString *) forcedUTF8String NS_AVAILABLE_IOS(7_0);

@end

@interface NSMutableArray (Swifter)

/**
 * [2, 3, 4, 5].prepend(1) -> [1, 2, 3, 4, 5]
 * ["e", "l", "l", "o"].prepend:("h") -> ["h", "e", "l", "l", "o"]
 *
 * - Parameter object: object to insert.
 */
- (void) prepend:(nonnull id)object;

@end

@interface NSArray (NSLog)

- (nullable NSString *) descriptionWithIndent:(NSUInteger)level  NS_AVAILABLE_IOS(10_0);

@end

@interface NSArray (DEPRECATED)

/*!
 * @abstract Return new array with random objects.
 *
 * @param array It's kind of NSArray. It will be use to create new array.
 * @param count It's knid of NSInteger. Count of new array will be return. It must be less
 * than count of older array.
 */
+ (nonnull NSArray *) arrayRandomFromArray:(NSArray * _Nonnull)array limit:(NSInteger)count  NS_DEPRECATED_IOS(2_0, 6_1, "Use -arrayByRandomCount: instead.");

@end

NS_ASSUME_NONNULL_END
