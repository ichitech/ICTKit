/*!
 @header    UIApplication+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define APP_DELEGATE    APPDELEGATE()
id APPDELEGATE() NS_DEPRECATED_IOS(4_0, 8_0, "APP_DELEGATE() has been replaced by UIMainAppDelegate()");
id UIMainAppDelegate() NS_AVAILABLE_IOS(7_0);

@interface UIApplication (Helper)

+ (NSString * _Nonnull) appVersion NS_AVAILABLE_IOS(2_0);
+ (NSString * _Nonnull) build NS_AVAILABLE_IOS(2_0);
+ (NSString * _Nonnull) versionBuild NS_AVAILABLE_IOS(2_0);

@end

@interface UIApplication (ApplicationSize)

- (NSString * _Nonnull) applicationSize;

@end

@interface UIApplication (NetworkActivityIndicator)
/*
 This category will automatically keep track of concurrent network activity and display the network activity indicator accordingly.
 */

/// Tell the application that network activity has begun. The network activity indicator will then be shown.
/// Display the network activity indicator to provide feedback when your application accesses the network for more than a couple of seconds. If the operation finishes sooner than that, you don’t have to show the network activity indicator, because the indicator would be likely to disappear before users notice its presence.
- (void) beganNetworkActivity;

/// Tell the application that a session of network activity has begun. The network activity indicator will remain showing or hide automatically depending the presence of other ongoing network activity in the app.
- (void) endedNetworkActivity;

@end

@interface UIApplication (KeyboardFrame)

- (CGRect)keyboardFrame;

@end

NS_ASSUME_NONNULL_END
