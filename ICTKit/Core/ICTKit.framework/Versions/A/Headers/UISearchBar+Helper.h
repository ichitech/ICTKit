/*!
 @header    UISearchBar+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  6.0
 */

#import <UIKit/UIKit.h>

@interface UISearchBar (Helper)

/*!
 * @abstract Custom Cancel button.
 */
- (void) setCancelButton:(UIButton *)cancelButton NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Custom SegmentedControl.
 */
- (void) setSegmentedControl:(UISegmentedControl *)segmented NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Custom background image.
 */
- (void) setBackgroundImage:(UIImage *)backgroundImage NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Custom TextField.
 */
- (void) setSearchField:(UITextField *)textField NS_AVAILABLE_IOS(5_0);

@end
