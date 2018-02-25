/*!
 @header    Kit.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
  @version   8.13
 */

// UKit
#import <ICTKit/UIApplication+Helper.h>
#import <ICTKit/UIColor+Helper.h>
#import <ICTKit/UITabBarController+Helper.h>
#import <ICTKit/UIAlertView+Helper.h>
#import <ICTKit/UIActionSheet+Helpers.h>
#import <ICTKit/UIActionButtonItem.h>
#import <ICTKit/UINavigationController+Helper.h>
#import <ICTKit/UISearchBar+Helper.h>
#import <ICTKit/UISideBarViewController.h>
#import <ICTKit/UIImage+ImageWithUIView.h>
#import <ICTKit/UITextField+Helper.h>
#import <ICTKit/UITextViewCustom.h>
#import <ICTKit/UIView+Helpers.h>
#import <ICTKit/UINavigationItem+Additions.h>
#import <ICTKit/UITableView+Helper.h>
#import <ICTKit/UIDevice+Helper.h>
#import <ICTKit/UIViewController+Helper.h>
#import <ICTKit/UIWindow+Helper.h>
#import <ICTKit/UIAlertController+Helper.h>
#import <ICTKit/UITextView+Helper.h>
#import <ICTKit/UIImageView+Helper.h>

//Foundation
#import <ICTKit/NSJSONSerialization+XMLConverter.h>
#import <ICTKit/NSXMLSerialization.h>
#import <ICTKit/NSData+Helper.h>
#import <ICTKit/NSArray+NewCategory.h>
#import <ICTKit/NSFileManager+Helper.h>
#import <ICTKit/NSDictionary+Helper.h>
#import <ICTKit/NSString+Helper.h>
#import <ICTKit/NSDate+Helper.h>
#import <ICTKit/NSObject+Validate.h>
#import <ICTKit/NSBundle+Helper.h>
#import <ICTKit/NSTimer+Blocks.h>
#import <ICTKit/NSNumber+Helper.h>
#import <ICTKit/NSURLSessionTask+DebugHelper.h>

//IBInspectableClass
#import <ICTKit/ICTIBInspectableClass.h>

//custom
#import <ICTKit/NSDebug.h>
#import <ICTKit/NSGeneralTest.h>
#import <ICTKit/NSLocalizedStringCustom.h>
#import <ICTKit/NSMethod.h>
#import <ICTKit/UIPickerSheet.h>
#import <ICTKit/UIDatePickerSheet.h>
#import <ICTKit/UIValidate.h>
#import <ICTKit/UICountryPickerViewController.h>
#import <ICTKit/UISafariViewController.h>

#if __has_include(<UIView+TouchHighlighting/MTCompoundButton.h>)
#import <UIView+TouchHighlighting/MTCompoundButton.h>
#endif

#if __has_include(<KLCPopup/KLCPopup.h>)
#import <KLCPopup/KLCPopup.h>
#endif

#if __has_include(<SDWebImage/UIImageView+WebCache.h>)
#import <SDWebImage/UIImageView+WebCache.h>
#endif

#if __has_include(<MBProgressHUD/MBProgressHUD.h>)
#import <MBProgressHUD/MBProgressHUD.h>
#endif

#if __has_include(<AFNetworking/AFNetworking.h>)
#import <AFNetworking/AFNetworking.h>
#endif

#if __has_include(<Firebase/Firebase.h>)
#import <ICTKit/ICTFirebaseAnalytics.h>
#import <Firebase/Firebase.h>
#endif
