/*!
 @header    UINavigationItem+Additions.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.5
 */

#import <UIKit/UIKit.h>

// UINavigationItem+Additions.h
@interface UINavigationItem (Additions)

- (void)addLeftBarButtonItem:(nullable UIBarButtonItem *)leftBarButtonItem  NS_AVAILABLE_IOS(7_0);
- (void)addRightBarButtonItem:(nullable UIBarButtonItem *)rightBarButtonItem  NS_AVAILABLE_IOS(7_0);

@end
