/*!
 @header    NSArray+NewCategory.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.3
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
- (nullable id) randomObject NS_SWIFT_NAME(random()) NS_AVAILABLE_IOS(7_0);

@end

@interface NSArray (ForcedUTF8)

- (nullable NSString *) forcedUTF8String NS_AVAILABLE_IOS(7_0);

@end

@interface NSMutableArray (Swifter)

/**
 * @note
 * [2, 3, 4, 5].prepend(1) -> [1, 2, 3, 4, 5]
 * ["e", "l", "l", "o"].prepend:("h") -> ["h", "e", "l", "l", "o"]
 *
 * @param object object to insert.
 */
- (void) prepend:(nonnull id)object;


@end

@interface NSArray (Swifter)

/**
 * @return NSArray reverted
 */
- (nonnull NSArray*) reverse;

/**
 * @abstract NSArray with only the elements that pass the truth test
 *
 */
- (nullable NSArray*) filter:(BOOL (^)(_Nonnull id object))condition NS_SWIFT_NAME(filter(where:)) API_AVAILABLE(ios(9.0));

/**
 * @return id first object that passes the truth test or `nil` if any
 *
 */
- (nullable id) firstWhere:(BOOL (^)(_Nonnull id object))condition NS_SWIFT_NAME(first(where:)) API_AVAILABLE(ios(9.0));

/**
 * @return Int first index of object that passes the truth test or `nil` if any
 *
 */
- (NSInteger) firstIndexWhere:(BOOL (^)(_Nonnull id object))condition NS_SWIFT_NAME(firstIndex(where:)) API_AVAILABLE(ios(9.0));

/**
 * @return id last object that passes the truth test or `nil` if any
 *
 */
- (nullable id) lastWhere:(BOOL (^)(_Nonnull id object))condition NS_SWIFT_NAME(last(where:)) API_AVAILABLE(ios(9.0));

/**
 * @return Int first index of object that passes the truth test or `nil` if any
 *
 */
- (NSInteger) lastIndexWhere:(BOOL (^)(_Nonnull id object))condition NS_SWIFT_NAME(lastIndex(where:)) API_AVAILABLE(ios(9.0));

/**
 * performs the operation to each element
 */
- (void) each:(void(^)(_Nonnull id object))operation API_AVAILABLE(ios(9.0));

/**
 * performs the operation to each element
 */
- (void) eachWithIndex:(void(^)(_Nonnull id object, int index, BOOL *stop))operation NS_SWIFT_NAME(each(index:)) API_AVAILABLE(ios(9.0));

/**
 * @return new NSArray from the result of the block performed to each element
 */
- (NSArray*) map:(id (^)(_Nonnull id obj, NSUInteger index))block API_AVAILABLE(ios(9.0));

/**
 * @return new NSArray by flatting it and performing a map to each element
 */
- (NSArray*) flatMap:(id (^)(_Nonnull id obj, NSUInteger index))block API_AVAILABLE(ios(9.0));

/**
 * @return BOOL if any object passes the truth test
 */
- (BOOL) containsWhere:(BOOL (^)(_Nonnull id object))checker NS_SWIFT_NAME(contains(where:)) API_AVAILABLE(ios(9.0));

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
