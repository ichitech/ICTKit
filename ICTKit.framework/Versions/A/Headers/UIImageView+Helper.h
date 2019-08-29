/*!
 @header    UIImageView+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.4
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (Helper)

/**
 Set the tintcolor of image.
 */
- (void )changeImageTintColor:(nonnull UIColor *)color NS_SWIFT_NAME(change(tintColor:)) API_AVAILABLE(ios(7.0));

@end

NS_ASSUME_NONNULL_END
