/*!
 @header    UIColor+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>

#define UIColorWithHexCode(hexString,opacti) [UIColor colorWithHexCodes:hexString alpha:opacti]
#define NSStringFromColor(color) [UIColor hexValuesFromUIColor:color]

FOUNDATION_EXPORT UIColor   *__nonnull UIColorFromString(NSString *__nonnull hexCode, CGFloat opacti) NS_AVAILABLE_IOS(7_0);
FOUNDATION_EXPORT NSString  *__nonnull NSStringFromUIColor(UIColor *__nonnull color) NS_AVAILABLE_IOS(7_0);

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Helper)

/*!
 * @abstract Creating random color.
 */
+ (UIColor *) colorWithRandomColor NS_DEPRECATED_IOS(2_0, 5_1, "colorWithRandomColor has been replaced by randomColor");
+ (UIColor *) randomColor NS_AVAILABLE_IOS(6_0);

/*!
 * @abstract Converting from hex values to UIColor
 *
 * @param <HexString> It's a kind of NSString. HEX values are specified as 3 pairs of two-digit numbers, starting with a # sign (# can be NULL). 
 * @param <alpha> It's a Float value. A value between 0 and 1.
 *        A value of 0 means that the pixel does not have any coverage information and is transparent; i.e. there was no color contribution from any geometry because the geometry did not overlap this pixel.
 *        A value of 1 means that the pixel is opaque because the geometry completely overlapped the pixel.
 */
+ (UIColor *) colorWithHexValue:(NSString *)hexString alpha:(CGFloat)alpha NS_AVAILABLE_IOS(7_0);
+ (UIColor *) colorWithHexCodes:(NSString *)hexString alpha:(CGFloat)alpha NS_DEPRECATED_IOS(2_0, 7_1, "colorWithHexCodes:alpha: has been replaced by colorWithHexValue:alpha:");


/*!
 * @abstract Converting from UIColor to hex values
 *
 * @param <color> It's a Color object. If color is nil, retutn NIL.
 */
+ (NSString *) hexValuesFromUIColor:(UIColor *)color NS_AVAILABLE_IOS(2_0);

@end

NS_ASSUME_NONNULL_END