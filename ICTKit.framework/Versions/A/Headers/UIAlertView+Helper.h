/*!
 @header    UIAlertView+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  6.0
 */

#import <UIKit/UIKit.h>
#import "UIActionButtonItem.h"

void UIAlertViewQuick(NSString* title,
                      NSString* message,
                      id<UIAlertViewDelegate> delegate,
                      NSString* dismissButtonTitle) NS_AVAILABLE_IOS(2_0);

@interface UIAlertView (Helper)

@property (nonatomic,copy) id sender;  

/*!
 * @abstract Show alertView quickly.
 *
 * @discussion This is used as native iOS UIAlertView with more buttons.
 */
+ (void) alertViewWithTitle:(NSString *)title
                    message:(NSString *)message
                   delegate:(id <UIAlertViewDelegate>)delegate
                        tag:(NSInteger)tag
          cancelButtonTitle:(NSString *)cancelButtonTitle
          otherButtonTitles:(NSString *)otherButtonTitles NS_AVAILABLE_IOS(2_0);

/*!
 * @abstract Show alertView quickly.
 *
 * @discussion This is used as native iOS UIAlertView with only "Cancel" button.
 */
+ (void) alertViewWithTitle:(NSString *)title
                    message:(NSString *)message
                   delegate:(id <UIAlertViewDelegate>)delegate
                        tag:(NSInteger)tag
      onlyCancelButtonTitle:(NSString *)cancel  NS_AVAILABLE_IOS(2_0) ;

/*!
 * @abstract Show alertView quickly.
 *
 * @discussion This is used as native iOS UIAlertView with sender data.
 */
+ (void) alertViewWithTitle:(NSString *)title
                    message:(NSString *)message
                   delegate:(id <UIAlertViewDelegate>)delegate
                        tag:(NSInteger)tag
          cancelButtonTitle:(NSString *)cancelButtonTitle
          otherButtonTitles:(NSString *)otherButtonTitles
                     sender:(id)sender NS_AVAILABLE_IOS(7_0) ;

@end

void UIAlertViewBlockQuick(NSString* title, NSString* message, UIActionButtonItem* cancelButton) NS_AVAILABLE_IOS(2_0);

@interface UIAlertView (Blocks)

-(id)initWithTitle:(NSString *)inTitle
           message:(NSString *)inMessage
  cancelButtonItem:(UIActionButtonItem *)inCancelButtonItem
  otherButtonItems:(UIActionButtonItem *)inOtherButtonItems, ... NS_REQUIRES_NIL_TERMINATION NS_AVAILABLE_IOS(2_0);

- (NSInteger)addButtonItem:(UIActionButtonItem *)item NS_AVAILABLE_IOS(2_0);

@end

