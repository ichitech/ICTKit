/*!
 @header    UIViewController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^UIViewControllerSegueBlock) (UIStoryboardSegue *segue, id _Nullable sender);

@interface UIViewController (BlockSegue)

- (void)configureSegue:(NSString *)identifier withBlock:(UIViewControllerSegueBlock _Nullable)block;
- (void)performSegueWithIdentifier:(NSString *)identifier sender:(id _Nullable)sender withBlock:(UIViewControllerSegueBlock _Nullable)block;

@end

@interface UIViewController (Visible)

- (BOOL)isVisible;

@end

@interface UIViewController (Modal)

- (BOOL) isModal;

@end

NS_ASSUME_NONNULL_END
