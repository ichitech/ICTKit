/*!
 @header    UIImage+ImageWithUIView.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  6.0
 */

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

FOUNDATION_EXPORT UIImage *UIImageExportFromView(UIView *view, CGFloat scale) NS_AVAILABLE_IOS(7_0);

@interface UIImage (ImageWithUIView)

/*!
 * @abstract Take screenshot of device.
 * @param <view> It's kind of UIView. View will be taken photo.
 *
 */
+ (UIImage *) imageWithUIView:(UIView *)view NS_DEPRECATED_IOS(2_0, 7_1, "imageWithUIView: has been replaced by imageFromUIView:scale:");
+ (UIImage *) imageFromUIView:(UIView *)view scale:(CGFloat)scale NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Change size of image.
 * @param <image> It's a kind of UIImage. It will be use to change size.
 * @param <newSize> It's a kind of CGSize. Size of new image.
 */
+ (UIImage *) imageWithImage:(UIImage*)image scaledToSize:(CGSize)newSize NS_DEPRECATED_IOS(2_0, 7_1, "imageWithImage:scaledToSize: has been replaced by resizedImageToSize:");

@end

@interface UIImage (Overlay)

/*!
 * @abstract Change overlay of image.
 * @param <color> It's a kind of UIClor. New color of image.
 */
- (UIImage *)imageWithColor:(UIColor *)color;

@end

@interface UIImage(ResizeCategory)

-(UIImage*) resizedImageFixSize:(CGSize)dstSize;

-(UIImage*) resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;

-(UIImage*) resizedImageToSize:(CGSize)newSize;

@end