/*!
 @header    UISafariViewController.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   14.0.1
 */

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

typedef NS_ENUM(NSInteger, UISafariViewComposeResult) {
    UISafariViewComposeResultCancelled,
    UISafariViewComposeResultPreparing NS_ENUM_AVAILABLE_IOS(8_0),
    UISafariViewComposeResultOpened NS_ENUM_AVAILABLE_IOS(8_0),
    UISafariViewComposeResultLoaded NS_ENUM_AVAILABLE_IOS(8_0),
    UISafariViewComposeResultFailed NS_ENUM_AVAILABLE_IOS(8_0),
    
    UISafariViewComposeResultFailureLoaded NS_ENUM_DEPRECATED_IOS(2_0, 8_0, "Use UISafariViewComposeResultFailed instead.") = UISafariViewComposeResultFailed,
    UISafariViewComposeResultSuccessfullyOpened NS_ENUM_DEPRECATED_IOS(2_0, 8_0, "Use UISafariViewComposeResultOpened instead.") = UISafariViewComposeResultOpened ,
    UISafariViewComposeResultInProcessOpening NS_ENUM_DEPRECATED_IOS(2_0, 8_0, "Use UISafariViewComposeResultPreparing instead.")  = UISafariViewComposeResultPreparing,
    UISafariViewComposeResultSuccessfullyLoaded NS_ENUM_DEPRECATED_IOS(2_0, 8_0, "Use UISafariViewComposeResultLoaded instead.") = UISafariViewComposeResultLoaded
} NS_SWIFT_NAME(SafariComposeResult) API_AVAILABLE(ios(7.0));

NS_ASSUME_NONNULL_BEGIN

@class UISafariViewController;

typedef void(^UISafariViewControllerCompletion)(UISafariViewController *safariViewController,
                                                UISafariViewComposeResult result,
                                                NSError  * _Nullable error) NS_SWIFT_NAME(SafariViewControllerCompletion) NS_AVAILABLE_IOS(7_0);

NS_SWIFT_NAME(SafariViewController)
@interface UISafariViewController : UINavigationController

@property (nonatomic, assign, readwrite)          BOOL                   hidesToolBar NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull)  UIViewController       *viewController  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull)  UIBarButtonItem        *leftBarButtonItem  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull)  UIBarButtonItem        *actionButton  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull)  UIBarButtonItem        *refreshButton  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull)  UIActivityIndicatorView*activityIndicator  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull)  UINavigationBar        *currentNavigationBar  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nullable) WKWebView              *wkWebView  NS_AVAILABLE_IOS(8_0);

- (instancetype) new NS_UNAVAILABLE;
- (instancetype) initWithRootViewController:(UIViewController *)rootViewController NS_UNAVAILABLE ;
- (instancetype) initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype) initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;

/**
 *  Create the viewcontroller.
 *
 *  @return UISafariViewController
 */
+ (instancetype) shareInstance NS_SWIFT_NAME(shared()) NS_AVAILABLE_IOS(8_0);

/**
 *  Show the viewcontroler with the URL and the completion handler.
 *
 *  @param URL          URL need to be loaded.
 *  @param completion_t Completion block.
 */
- (void) showWithURL:(NSURL *)URL completion:(UISafariViewControllerCompletion)completion_t NS_SWIFT_NAME(show(url:_:)) NS_AVAILABLE_IOS(8_0);
- (void) showWithHTML:(NSString *)html completion:(UISafariViewControllerCompletion)completion_t NS_SWIFT_NAME(show(html:_:)) NS_AVAILABLE_IOS(8_0);
+ (void) openWithURL:(NSURL *)URL completion:(UISafariViewControllerCompletion)completion_t  NS_DEPRECATED_IOS(6_0, 9_0, "Use -showWithURL:completion: instead.");

@end

NS_ASSUME_NONNULL_END

