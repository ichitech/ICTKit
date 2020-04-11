/*!
 @header    NSObject+Validate.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.0
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (Validate)

/*!
 * @abstract Validate Object
 */
- (void) validateWithClass:(Class)cls
                completion:(nullable dispatch_block_t)block
                   failure:(nullable dispatch_block_t)failure NS_DEPRECATED_IOS(2_0, 12_0,"Stop supporting on iOS 12.0 or upper.");

/*!
 * @abstract Check object is NULL
 */
- (BOOL) isNull API_AVAILABLE(ios(6.0));

/*!
 * @abstract Check object is NULL or NIL
 */
- (BOOL) isset API_AVAILABLE(ios(6.0));

@end

@interface NSObject (SenderData)

@property (nonatomic, strong, nullable) id senderObject API_AVAILABLE(ios(6.0));

@end

NS_ASSUME_NONNULL_END
