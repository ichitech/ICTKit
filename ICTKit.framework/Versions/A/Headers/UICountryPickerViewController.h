/*!
 @header    UICountryPickerViewController.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <UIKit/UIKit.h>

@class UICountryPickerViewController,NSCountryItem;

NS_ASSUME_NONNULL_BEGIN

//setting
typedef void(^CountryPickerViewControllerComposer)(UICountryPickerViewController *picker);
//compose
typedef void(^CountryPickerViewControllerCompletion)(BOOL success, UICountryPickerViewController *picker, NSCountryItem *info);

@protocol UICountryPickerViewControllerDelegate<NSObject>
@optional
// The picker does not dismiss itself; the client dismisses it in these callbacks.
// The delegate will receive one or the other, but not both, depending whether the user
// confirms or cancels.
- (void)countryPickerController:(UICountryPickerViewController *)picker didFinishPickingCountryWithInfo:(NSCountryItem *)info;
- (void)countryPickerControllerDidCancel:(UICountryPickerViewController *)picker;

@end

@interface UICountryPickerViewController : UINavigationController
{
    
}

- (instancetype) new NS_UNAVAILABLE;
- (instancetype) init NS_UNAVAILABLE;
- (instancetype) initWithRootViewController:(UIViewController *)rootViewController NS_UNAVAILABLE ;
- (instancetype) initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype) initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;

@property (nonatomic, strong, readonly)         NSArray *countries;
@property (nonatomic, getter=isPhoneCodeHidden) BOOL phoneCodeHidden; // Defaults to NO, i.e. no hidden.
@property (nonatomic, strong, readonly)         UIBarButtonItem *leftBarButtonItem;

- (void) setBarTitle:(nullable NSString *)title;

+ (void) showCountryPickerFromViewController:(id)viewController
                                    composer:(nullable CountryPickerViewControllerComposer)composer
                           completionHandler:(nullable CountryPickerViewControllerCompletion)completion;

@end

@interface NSCountryItem : NSObject

- (instancetype) init NS_UNAVAILABLE;
- (instancetype) initWithISOcountryCode:(NSString *)ISOcountryCode;

@property (nonatomic, strong, readonly) NSString    *ISOcountryCode;
@property (nonatomic, strong, readonly) NSString    *country;
@property (nonatomic, strong, readonly) NSString    *phoneCode;
@property (nonatomic, strong, readonly) UIImage     *flagImage;
@property (nonatomic, strong, readonly) NSDictionary*userInfo;

@end

NS_ASSUME_NONNULL_END