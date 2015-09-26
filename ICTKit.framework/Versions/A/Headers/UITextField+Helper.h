/*!
 @header    UITextField+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>

@interface UITextField (Helper)

/*!
 * @abstract SET maximum length of input text. TextField will not appear if user continue to enter from keyboard.
 */
@property (nonatomic)   NSInteger   maximumLength NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract GET maximum length of input text.
 */
- (NSInteger) maximumLength NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract SET place holder color of UITextFiled.
 */
@property (nonatomic)  UIColor *placeholderColor NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract GET place holder color of UITextFiled.
 */
- (UIColor *) placeholderColor NS_AVAILABLE_IOS(5_0);


@end
