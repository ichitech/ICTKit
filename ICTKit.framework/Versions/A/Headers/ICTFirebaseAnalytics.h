/*!
 @header    ICTFirebaseAnalytics.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.2
 */

#import <Foundation/Foundation.h>

#if __has_include(<Firebase/Firebase.h>)
#import <Firebase/Firebase.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  Register the ViewController need to be tracked.
 *
 *  @param viewController It must be type of class UIViewController.
 *
 *  @return Return the status of registration.
 */
BOOL ICTFirebaseTrackingViewController(__kindof UIViewController * viewController);

@interface ICTFirebaseAnalytics : NSObject

+ (BOOL)trackingViewController:(__kindof UIViewController *)viewController;

+ (void)logEventWithName:(NSString *)name parameters:(nullable NSDictionary<NSString *, id> *)parameters;

@end

NS_ASSUME_NONNULL_END
#endif

