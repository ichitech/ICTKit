/*!
 @header    UIView+Border.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>

@interface UIView (Border)

- (void) addBorderWithColor:(UIColor *)color
                   andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addBottomBorderWithColor:(UIColor *)color
                         andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addLeftBorderWithColor:(UIColor *)color
                       andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addRightBorderWithColor:(UIColor *)color
                        andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addTopBorderWithColor:(UIColor *)color
                      andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

@end
