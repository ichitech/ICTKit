/*!
 @header    UIActionSheet+Helpers.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.3
 */

#import <UIKit/UIKit.h>
#import "UIActionButtonItem.h"

@interface UIActionSheet (Helper) <UIActionSheetDelegate>

- (instancetype)initWithTitle:(NSString *)inTitle
             cancelButtonItem:(UIActionButtonItem *)inCancelButtonItem
        destructiveButtonItem:(UIActionButtonItem *)inDestructiveItem
             otherButtonItems:(UIActionButtonItem *)inOtherButtonItems, ... NS_REQUIRES_NIL_TERMINATION NS_DEPRECATED_IOS(2_0, 8_3, "Use UIAlertController with a preferredStyle of UIAlertControllerStyleActionSheet instead.") ;

- (NSInteger)addButtonItem:(UIActionButtonItem *)item NS_DEPRECATED_IOS(2_0, 8_3, "Use UIAlertController with a preferredStyle of UIAlertControllerStyleActionSheet instead.") ;

/*!
 *@abstract  This block is called when the action sheet is dismssed for any reason.
 */
@property (copy, nonatomic) dispatch_block_t dismissalAction NS_DEPRECATED_IOS(2_0, 8_3, "Use UIAlertController with a preferredStyle of UIAlertControllerStyleActionSheet instead.") ;

@end
