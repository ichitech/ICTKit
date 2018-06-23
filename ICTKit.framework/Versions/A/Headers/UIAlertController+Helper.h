/*!
 @header    UIAlertController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.15
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

void UIAlertControllerQuick(NSString *title, NSString *message, UIAlertAction *cancelAlertAction, UIAlertAction *doneAlertAction) NS_AVAILABLE_IOS(8_0);

typedef void(^UIAlertHandler)(UIAlertController *controller);

@interface UIAlertController (Helper)

/**
 *  Display UIAlerViewController from a viewcontroller with only 'CANCEL' button.
 *
 *  @param viewController ViewController will be displayed the alert view.
 *  @param title          The title of alert view.
 *  @param message        The message of alert view.
 *  @param cancelTitle    The title of 'CANCEL' button.
 *  @param handler        The completion will be called when tapped the 'CANCEL' button.
 */
+ (void) alertControllerFromViewController:(id)viewController
                                     title:(NSString *)title
                                   message:(NSString *)message
                     onlyCancelButtonTitle:(NSString *)cancelTitle
                          cancelCompletion:(nullable UIAlertHandler)handler NS_AVAILABLE_IOS(8_0);


/**
 *  Display UIAlerViewController from a viewcontroller with 2 custom buttons.
 *
 *  @param viewController ViewController will be displayed the alert view.
 *  @param title          The title of alert view.
 *  @param message        The message of alert view.
 *  @param cancelTitle    The title of LEFT button in alert view.
 *  @param otherTitle     The title of RIGHT button in alert view.
 *  @param cancelHandler  The completion will be called when tapped the LEFT button.
 *  @param otherHandler   The completion will be called when tapped the RIGHT button.
 */
+ (void) alertControllerFromViewController:(id)viewController
                                     title:(NSString *)title
                                   message:(NSString *)message
                         cancelButtonTitle:(NSString *)cancelTitle
                          otherButtonTitle:(NSString *)otherTitle
                          cancelCompletion:(nullable UIAlertHandler)cancelHandler
                           otherCompletion:(nullable UIAlertHandler)otherHandler NS_AVAILABLE_IOS(8_0);

/**
 *  Display UIAlerViewController from the current visible viewcontroller.
 *
 *  @param title          The title of alert view.
 *  @param message        The message of alert view.
 *  @param buttonTitle    The title of button
 *  @param handler        The completion will be called when tapped the button.
 */
+ (void) alertControllerWithTitle:(NSString *)title
                          message:(NSString *)message
                    titleOfButton:(NSString *)buttonTitle
                       completion:(nullable UIAlertHandler)handler NS_AVAILABLE_IOS(8_0);

/**
 *  Display UIAlerViewController from the current visible viewcontroller.
 *
 *  @param title          The title of alert view.
 *  @param message        The message of alert view.
 *  @param cancelTitle    The title of LEFT button in alert view.
 *  @param otherTitle     The title of RIGHT button in alert view.
 *  @param cancelHandler  The completion will be called when tapped the LEFT button.
 *  @param otherHandler   The completion will be called when tapped the RIGHT button.
 */
+ (void) alertControllerWithTitle:(NSString *)title
                          message:(NSString *)message
                cancelButtonTitle:(NSString *)cancelTitle
                 otherButtonTitle:(NSString *)otherTitle
                 cancelCompletion:(nullable UIAlertHandler)cancelHandler
                  otherCompletion:(nullable UIAlertHandler)otherHandler NS_AVAILABLE_IOS(8_0);

@end

NS_ASSUME_NONNULL_END
