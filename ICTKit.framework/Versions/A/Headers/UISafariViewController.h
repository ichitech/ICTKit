/*!
 @header    UISafariViewController
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <UIKit/UIKit.h>

enum UISafariViewComposeResult {
    UISafariViewComposeResultCancelled,
    UISafariViewComposeResultSuccessfullyLoaded,
    UISafariViewComposeResultFailureLoaded,
    UISafariViewComposeResultSuccessfullyOpened,
    UISafariViewComposeResultInProcessOpening
};
typedef enum UISafariViewComposeResult UISafariViewComposeResult;


NS_ASSUME_NONNULL_BEGIN

@class UISafariViewController;

typedef void(^UISafariViewControllerCompletion)(UISafariViewController *safariViewController,
                                                UISafariViewComposeResult result,
                                                NSError  * _Nullable error) NS_AVAILABLE_IOS(7_0);

@interface UISafariViewController : UINavigationController
{
    
}
@property (nonatomic, strong, readonly, nonnull) UIViewController       *viewController  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *leftBarButtonItem  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIWebView              *webView  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *actionButton  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIBarButtonItem        *refreshButton  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UIActivityIndicatorView*activityIndicator  NS_AVAILABLE_IOS(7_0);
@property (nonatomic, strong, readonly, nonnull) UINavigationBar        *currentNavigationBar  NS_AVAILABLE_IOS(7_0);

- (instancetype) init NS_UNAVAILABLE;
- (instancetype) new NS_UNAVAILABLE;
- (instancetype) initWithRootViewController:(UIViewController *)rootViewController NS_UNAVAILABLE ;
- (instancetype) initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype) initWithNibName:(nullable NSString *)nibNameOrNil bundle:(nullable NSBundle *)nibBundleOrNil NS_UNAVAILABLE;

+ (void) openWithURL:(NSURL *)URL completion:(UISafariViewControllerCompletion)completion_t;

@end

NS_ASSUME_NONNULL_END

