/*!
 @header    UIViewController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^UIViewControllerSegueBlock) (UIStoryboardSegue *segue, id _Nullable sender)  NS_AVAILABLE_IOS(6_0);

@interface UIViewController (BlockSegue)

- (void)configureSegue:(NSString *)identifier withBlock:(UIViewControllerSegueBlock _Nullable)block NS_AVAILABLE_IOS(6_0);

- (void)performSegueWithIdentifier:(NSString *)identifier
                            sender:(id _Nullable)sender
                         withBlock:(UIViewControllerSegueBlock _Nullable)block NS_AVAILABLE_IOS(6_0);

@end

@interface UIViewController (Visible)
 
- (BOOL) isVisible NS_AVAILABLE_IOS(6_0);

@end

@interface UIViewController (Modal)

- (BOOL) isModal NS_DEPRECATED_IOS(2_0, 8_4, "isModal has been replaced by isModalViewController");

- (BOOL) isModalViewController NS_AVAILABLE_IOS(8_0);

@end

NS_ASSUME_NONNULL_END
