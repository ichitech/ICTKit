/*!
 @header    UINavigationController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.2
 */

#import <UIKit/UIKit.h>

@interface UINavigationController (Helper)

/*!
 * @abstract Set background for Navigation.
 *
 * @param <image> It's a kind of UIImage. This image will be use to set background for navigation.
 */
+ (void) setBackgroundImage:(UIImage *)image NS_DEPRECATED_IOS(2_0, 6_0);

@end
