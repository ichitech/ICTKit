/*!
 @header    UITextView+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.1
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextView (Helper)

@property (nonatomic, readonly) UILabel *placeholderLabel API_AVAILABLE(ios(8.0));
@property (nonatomic, strong, nullable) NSAttributedString *attributedPlaceholder API_AVAILABLE(ios(8.0));
@property (nonatomic, strong) IBInspectable NSString *placeholder API_AVAILABLE(ios(8.0));
@property (nonatomic, strong) IBInspectable UIColor  *placeholderColor API_AVAILABLE(ios(8.0));


/**
 Get the default color of text view.
 @return UIColor object.
 */
+ (UIColor *)defaultPlaceholderColor API_AVAILABLE(ios(2.0));

@end

NS_ASSUME_NONNULL_END
