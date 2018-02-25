/*!
 @header    UITextViewCustom.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
  @version   8.13
 @deprecated Stop supporting on iOS 10.0 or upper.
 */

#import <UIKit/UIKit.h>

NS_CLASS_DEPRECATED_IOS(2_0, 10_0, "Stop supporting on iOS 10.0 or upper.")
@interface UITextViewCustom : UITextView 

@property (nonatomic, strong, nullable) NSString *placeholder NS_DEPRECATED_IOS(2_0, 10_0,"Use @property -placeholder of UITextView instead.");
@property (nonatomic, strong, nullable) UIColor  *placeholderColor NS_DEPRECATED_IOS(2_0, 10_0,"Use @property -placeholderColor of UITextView instead.");

@end
