/*!
 @header    UIImage+ImageWithUIView.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT UIImage *UIImageExportFromView(UIView * view, CGFloat scale) NS_AVAILABLE_IOS(7_0);

@interface UIImage (ImageWithUIView)

/*!
 * @abstract Take screenshot of view.
 * @param view View will be taken screenshot.
 * @param scale The scale of new image.
 */
+ (UIImage *)imageFromUIView:(UIView *)view scale:(CGFloat)scale NS_AVAILABLE_IOS(7_1);//default is 1
+ (UIImage *)imageWithUIView:(UIView *)view NS_DEPRECATED_IOS(2_0, 7_1, "imageWithUIView: has been replaced by imageFromUIView:scale:");

/*!
 * @abstract Change size of image.
 * @param image The image will be use to change size.
 * @param newSize The size of new image.
 */
+ (UIImage *)imageWithImage:(UIImage*)image scaledToSize:(CGSize)newSize NS_DEPRECATED_IOS(2_0, 7_1, "imageWithImage:scaledToSize: has been replaced by resizedImageToSize:");


/**
 Create an image from UIColor

 @param color The background color of new image.
 @param size The size of new image
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size NS_AVAILABLE_IOS(7_0);

@end

@interface UIImage (Overlay)

/*!
 * @abstract Change overlay of image.
 * @param color New color of image.
 */
- (UIImage *)imageWithColor:(nonnull UIColor *)color;

@end

@interface UIImage(ResizeCategory)

-(UIImage*)resizedImageFixSize:(CGSize)dstSize;

-(UIImage*)resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;

-(UIImage*)resizedImageToSize:(CGSize)newSize;

@end

NS_ASSUME_NONNULL_END
