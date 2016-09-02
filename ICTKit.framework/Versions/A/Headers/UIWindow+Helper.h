/*!
 @header    UIWindow+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define WINDOW      WIN_DOW()
UIWindow *WIN_DOW() NS_DEPRECATED_IOS(4_0, 8_0, "WIN_DOW() has been replaced by Window()");

UIWindow *Window()  NS_AVAILABLE_IOS(7_0);

@interface UIWindow (Helper)


@end

@interface UIWindow (UIWindowVisible)

/**
 *  Get current the visible view controller.
 *
 *  @return UIViewController
 */
- (nullable UIViewController *) visibleViewController;

@end

NS_ASSUME_NONNULL_END