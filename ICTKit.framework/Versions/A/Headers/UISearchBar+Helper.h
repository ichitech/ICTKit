/*!
 @header    UISearchBar+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UISearchBar (Helper)

/*!
 * @abstract Custom Cancel button.
 */
- (void) setCancelButton:(UIButton *)cancelButton NS_DEPRECATED_IOS(2_0, 6_0);

/*!
 * @abstract Custom SegmentedControl.
 */
- (void) setSegmentedControl:(UISegmentedControl *)segmented NS_DEPRECATED_IOS(2_0, 6_0);

/*!
 * @abstract Custom background image.
 */
- (void) setBackgroundImage:(UIImage *)backgroundImage;

/*!
 * @abstract Custom TextField.
 */
- (void) setSearchField:(UITextField *)textField NS_DEPRECATED_IOS(2_0, 6_0);

/*!
 * @abstract Get text current textField
 */
@property (nonatomic, strong, readonly, nonnull) UITextField *currentTextField  NS_AVAILABLE_IOS(7_1);


@end

NS_ASSUME_NONNULL_END