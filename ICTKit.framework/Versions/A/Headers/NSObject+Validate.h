/*!
 @header    NSObject+Validate.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.6
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Validate)

/*!
 * @abstract Validate Object
 */
- (void) validateWithClass:(Class)cls
                completion:(nullable dispatch_block_t)block
                   failure:(nullable dispatch_block_t)failure NS_AVAILABLE_IOS(6_0);

/*!
 * @abstract Check object is NULL
 */
- (BOOL) isNull;

/*!
 * @abstract Check object is NULL or NIL
 */
- (BOOL) isset;

@end

@interface NSObject (SenderData)

@property (nonatomic, strong, nullable) id senderObject NS_AVAILABLE_IOS(6_0);

@end

NS_ASSUME_NONNULL_END
