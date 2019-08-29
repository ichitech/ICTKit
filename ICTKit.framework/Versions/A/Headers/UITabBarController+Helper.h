/*!
 @header    UITabBarController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.3
 */


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, UITabbarImageOptions) {
    UITabbarImageIphonePortrait = 1,
    UITabbarImageIphoneLandscape = 2,
    UITabbarImageIpadPortrait = 3,
    UITabbarImageIpadLandscape = 4,
} NS_CLASS_AVAILABLE_IOS(5_0);

#define UITabbarImageDeviceIsPortrait(option)  ((option) == UITabbarImageIphonePortrait || (option) == UITabbarImageIpadPortrait)
#define UITabbarImageDeviceIsLandscape(option) ((option) == UITabbarImageIpadPortrait || (option) == UITabbarImageIphoneLandscape)

@interface UITabBarController (TabbarCustom)

/**
 @abstract Hide or show the tabbar at the bottom of the screen.
 @param hidden Set hide or show the tabbar.
 @param animated If animated, it will transition vertically using UIViewAnimation.
 */
- (void) setTabbarHidden:(BOOL)hidden animated:(BOOL)animated NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Set background color for UITabbar.
 *
 * @param color The color of tabbar view.
 */
- (void) setBackgroundColor:(UIColor *)color NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Set background image for UITabbar.
 *
 * @param image The image with size 320x49.
 */
- (void) setBackgroundImage:(UIImage *)image NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Set background image for indicator of UITabbar.
 *
 * @param image The indicator image.
 */
- (void) setSelectionIndicatorImage:(UIImage *)image NS_AVAILABLE_IOS(5_0);

@end

NS_ASSUME_NONNULL_END
