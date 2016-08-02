//
//  UIAlertController+Helper.h
//  HarryFramework
//
//  Created by Harry Tran on 5/11/16.
//  Copyright © 2016 Harry Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^UIAlertHandler)(UIAlertController *controller);

@interface UIAlertController (Helper)

+ (void) alertControllerFromViewController:(id)viewController
                                     title:(NSString *)title
                                   message:(NSString *)message
                     onlyCancelButtonTitle:(NSString *)cancelTitle
                          cancelCompletion:(nullable UIAlertHandler)handler NS_AVAILABLE_IOS(8_0);

+ (void) alertControllerFromViewController:(id)viewController
                                     title:(NSString *)title
                                   message:(NSString *)message
                         cancelButtonTitle:(NSString *)cancelTitle
                          otherButtonTitle:(NSString *)otherTitle
                          cancelCompletion:(nullable UIAlertHandler)cancelHandler
                           otherCompletion:(nullable UIAlertHandler)otherHandler NS_AVAILABLE_IOS(8_0);

+ (void) alertControllerWithTitle:(NSString *)title
                          message:(NSString *)message
            onlyCancelButtonTitle:(NSString *)cancelTitle
                 cancelCompletion:(nullable UIAlertHandler)handler NS_AVAILABLE_IOS(8_0);

+ (void) alertControllerWithTitle:(NSString *)title
                          message:(NSString *)message
                cancelButtonTitle:(NSString *)cancelTitle
                 otherButtonTitle:(NSString *)otherTitle
                 cancelCompletion:(nullable UIAlertHandler)cancelHandler
                  otherCompletion:(nullable UIAlertHandler)otherHandler NS_AVAILABLE_IOS(8_0);

@end

NS_ASSUME_NONNULL_END