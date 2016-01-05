//
//  NSObject+Validate.h
//  HarryFramework
//
//  Created by HarryTran on 4/14/14.
//  Copyright (c) 2014 Harry Tran. All rights reserved.
//

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