/*!
 @header    UIImage+ImageWithUIView.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.4
 */

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT UIImage *UIImageExportFromView(UIView * view, CGFloat scale) API_AVAILABLE(ios(7.0));
FOUNDATION_EXPORT UIImage *UIImageWithColor(UIColor * color, CGSize size) API_AVAILABLE(ios(7.0));
FOUNDATION_EXPORT UIImage *UIImageWithNamed(NSString * name, UIColor * _Nullable color) API_AVAILABLE(ios(7.0));

@interface UIImage (ImageWithUIView)

/*!
 * @abstract Take screenshot of view.
 * @param view View will be taken screenshot.
 * @param scale The scale of new image. Default is 1.
 */
+ (UIImage *)imageFromUIView:(UIView *)view scale:(CGFloat)scale API_AVAILABLE(ios(7.0));
+ (UIImage *)imageWithUIView:(UIView *)view NS_DEPRECATED_IOS(2_0, 7_1, "Use +imageFromUIView:scale: instead.");

/*!
 * @abstract Change size of image.
 * @param image The image will be use to change size.
 * @param size The size of new image.
 */
+ (UIImage *)imageWithImage:(UIImage*)image scaledToSize:(CGSize)size NS_DEPRECATED_IOS(2_0, 7_1, "Use +resizedImageToSize: instead.");


/*!
 *@abstract Create an image from UIColor with customized size.
 *@param color The background color of new image.
 *@param size The size of new image.
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size API_AVAILABLE(ios(7.0));

@end

@interface UIImage (Overlay)

/*!
 * @abstract Change overlay of image.
 * @param color New color of image.
 */
- (UIImage *)copyImageWithTintColor:(nonnull UIColor *)color API_AVAILABLE(ios(7.0));
- (UIImage *)imageWithColor:(nonnull UIColor *)color NS_DEPRECATED_IOS(2_0, 9_0, "Use -copyImageWithTintColor: instead.");

/**
 Load an image from main bundle with custom overlay color.
 @param name The name of image.
 @param color Overlay color.
 @return UIImage object.
 */
+ (nullable UIImage *)imageNamed:(NSString *)name overlayColor:(nullable UIColor *)color API_AVAILABLE(ios(7.0));

@end

@interface UIImage(ResizeCategory)

- (UIImage *)resizedImageFixSize:(CGSize)dstSize API_AVAILABLE(ios(7.0));

- (UIImage *)resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale API_AVAILABLE(ios(7.0));

- (UIImage *)resizedImageToSize:(CGSize)newSize API_AVAILABLE(ios(7.0));

@end

NS_ASSUME_NONNULL_END
