/*!
 @header    UIActionSheet+Helpers.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <UIKit/UIKit.h>
#import "UIActionButtonItem.h"

@interface UIActionSheet (Helper) <UIActionSheetDelegate>

- (instancetype)initWithTitle:(NSString *)inTitle
             cancelButtonItem:(UIActionButtonItem *)inCancelButtonItem
        destructiveButtonItem:(UIActionButtonItem *)inDestructiveItem
             otherButtonItems:(UIActionButtonItem *)inOtherButtonItems, ... NS_REQUIRES_NIL_TERMINATION NS_AVAILABLE_IOS(2_0);

- (NSInteger)addButtonItem:(UIActionButtonItem *)item NS_AVAILABLE_IOS(2_0);

/*!
 *@abstract  This block is called when the action sheet is dismssed for any reason.
 */
@property (copy, nonatomic) void(^dismissalAction)() NS_AVAILABLE_IOS(2_0);

@end
