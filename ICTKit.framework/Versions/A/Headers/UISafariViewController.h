/*!
 @header    UISafariViewController
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@class UISafariViewController;

//UISafariViewControllerShowComposer
typedef void(^UISafariViewControllerShowComposer)(UISafariViewController *navigationController);

//UISafariViewControllerShowCompletion
typedef void(^UISafariViewControllerShowCompletion)(UISafariViewController *navigationController, BOOL success);

//UISafariViewControllerDidLoadingFinish
typedef void(^UISafariViewControllerDidLoadingFinish)(UIWebView *webView);

//UISafariViewControllerDidLoadingFail
typedef void(^UISafariViewControllerDidLoadingFail)(UIWebView *webView, NSError *error);

//UISafariViewControllerDidCancel
typedef void(^UISafariViewControllerDidCancel)(UISafariViewController *navigationController);

@interface UISafariViewController : UINavigationController
{
    
}
@property (nonatomic, strong, readonly, nonnull) UIViewController       *viewController;
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *leftBarButtonItem;
@property (nonatomic, strong, readonly, nonnull) UIWebView              *webView;
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *actionButton;
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *refreshButton;
@property (nonatomic, strong, readonly, nonnull) UIActivityIndicatorView*activityIndicator;
@property (nonatomic, strong, readonly, nonnull) UINavigationBar        *currentNavigationBar;

- (instancetype) init NS_UNAVAILABLE;
- (instancetype) new NS_UNAVAILABLE;
- (instancetype) initWithRootViewController:(UIViewController *)rootViewController NS_UNAVAILABLE ;
- (instancetype) initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype) initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;

+ (void) showSafariViewControllerWithURL:(NSURL *)URL
                                composer:(nullable UISafariViewControllerShowComposer)composer_t
                       completionHandler:(nullable UISafariViewControllerShowCompletion)completion_t
                           didFinishLoad:(nullable UISafariViewControllerDidLoadingFinish)finishLoad_t
                             didFailLoad:(nullable UISafariViewControllerDidLoadingFail)failLoad_t
                               didCancel:(nullable UISafariViewControllerDidCancel)cancel_t;


@end

NS_ASSUME_NONNULL_END