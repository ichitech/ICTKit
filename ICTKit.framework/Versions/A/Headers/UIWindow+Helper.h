/*!
 @header    UIWindow+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.2
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"
#define WINDOW Window()
UIWindow *WIN_DOW() NS_DEPRECATED_IOS(4_0, 8_0, "Use +currentWindow instead.");
UIWindow *Window()  NS_DEPRECATED_IOS(4_0, 11_0, "Use +currentWindow instead.");
#pragma clang diagnostic pop

@interface UIWindow (Helper)

+ (instancetype) currentWindow API_AVAILABLE(ios(9.0));

@end

@interface UIWindow (UIWindowVisible)

/**
 *  Get current the visible view controller. Default is nil.
 */
@property(nullable, nonatomic, strong, readonly) __kindof UIViewController *visibleViewController API_AVAILABLE(ios(2.0));

@end

NS_ASSUME_NONNULL_END
