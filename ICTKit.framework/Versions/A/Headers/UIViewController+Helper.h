/*!
 @header    UIViewController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.6
 */


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^UIViewControllerSegueBlock) (UIStoryboardSegue *segue, id _Nullable sender)  NS_AVAILABLE_IOS(6_0);

@interface UIViewController (BlockSegue)

- (void)configureSegue:(NSString *)identifier withBlock:(UIViewControllerSegueBlock _Nullable)block NS_AVAILABLE_IOS(6_0);

/**
 Method which allows to use a block to prepare segue instead of ugly -prepareForSegue method.

 @param identifier The identify is defined in the storyboard.
 @param sender The sender object
 @param completion_t The completion block should be called.
 @note  if you override -prepareForSegue:sender: method, BlockSegue won't be performed in these UIViewController.
 */
- (void)performSegueWithIdentifier:(NSString *)identifier sender:(nullable id)sender completion:(nullable UIViewControllerSegueBlock)completion_t NS_AVAILABLE_IOS(8_0);
- (void)performSegueWithIdentifier:(NSString *)identifier sender:(id _Nullable)sender withBlock:(UIViewControllerSegueBlock _Nullable)block NS_DEPRECATED_IOS(6_0, 10_0, "Use -performSegueWithIdentifier:sender:completion: instead.");

@end

@interface UIViewController (Visible)
 
- (BOOL) isVisible NS_AVAILABLE_IOS(6_0);

@end

@interface UIViewController (Modal)

- (BOOL) isModal NS_DEPRECATED_IOS(2_0, 8_4, "Use -isModalViewController instead.");

- (BOOL) isModalViewController NS_AVAILABLE_IOS(8_0);

@end

NS_ASSUME_NONNULL_END
