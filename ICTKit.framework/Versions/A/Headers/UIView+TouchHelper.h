/*!
 @header    UIView+TouchHelper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.2
 */

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, TouchStyle) {
    TouchStyleNone = 0,
    TouchStyleTransparentMask = 1,
    TouchStyleLightBackground = 2,
    TouchStyleSolidDarkOverlay = 3,
    TouchStyleHollowDarkOverlay = 4,
};

@interface UIView (TouchHelper)

@property (nonatomic, assign) TouchStyle touchStyle API_AVAILABLE(ios(9.0));

@end
