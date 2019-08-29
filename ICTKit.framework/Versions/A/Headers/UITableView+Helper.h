/*!
 @header    UITableView+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.3
 */

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT NSIndexPath *__nullable NSIndexPathFromString(NSString *__nonnull string) API_AVAILABLE(ios(7.0));
FOUNDATION_EXPORT NSString    *__nullable NSStringFromNSIndexPath(NSIndexPath *__nonnull indexPath) API_AVAILABLE(ios(7.0));

@interface UITableView (Helper)

- (nullable NSIndexPath *)indexPathForRowWithEvent:(UIEvent *__nonnull)event API_AVAILABLE(ios(5.0));

- (BOOL)isLastIndexPath:(NSIndexPath *__nonnull)currentIndexPath API_AVAILABLE(ios(5.0));

@end
