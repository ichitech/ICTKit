/*!
 @header    UITableView+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   6.0
 */

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSIndexPath *__nullable NSIndexPathFromString(NSString *__nonnull hexCode) NS_AVAILABLE_IOS(7_0);
FOUNDATION_EXPORT NSString    *__nullable NSStringFromNSIndexPath(NSIndexPath *__nonnull indexPath) NS_AVAILABLE_IOS(7_0);

@interface UITableView (Helper)

- (nullable NSIndexPath *) indexPathForRowWithEvent:(UIEvent *__nonnull)event NS_AVAILABLE_IOS(5_0);

@end
