/*!
 @header    UIApplication+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   9.0
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"
#define APP_DELEGATE    APPDELEGATE()
id APPDELEGATE() NS_DEPRECATED_IOS(4_0, 8_0, "Use UIMainAppDelegate() instead.");
id UIMainAppDelegate() NS_AVAILABLE_IOS(7_0);
#pragma clang diagnostic pop

@interface UIApplication (Helper)

@property (nonatomic, strong, readonly, nullable) UIView   *aplicationStatusBar API_AVAILABLE(ios(9.0));
@property (nonatomic, strong, readonly) NSString *appVersion API_AVAILABLE(ios(9.0));
@property (nonatomic, strong, readonly) NSString *build API_AVAILABLE(ios(9.0));
@property (nonatomic, strong, readonly) NSString *versionBuild API_AVAILABLE(ios(9.0));

+ (NSString * _Nonnull)appVersion NS_DEPRECATED_IOS(2_0, 9_0, "Use -appVersion instead.");
+ (NSString * _Nonnull)build NS_DEPRECATED_IOS(2_0, 9_0, "Use -build instead.");
+ (NSString * _Nonnull)versionBuild NS_DEPRECATED_IOS(2_0, 9_0, "Use -versionBuild instead.");
+ (UIView * _Nullable)statusBar NS_DEPRECATED_IOS(2_0, 9_0, "Use -aplicationStatusBar instead.");

@end

@interface UIApplication (ApplicationSize)

- (NSString * _Nonnull)applicationSize NS_AVAILABLE_IOS(7_0);

@end

@interface UIApplication (NetworkActivityIndicator)
/*
 This category will automatically keep track of concurrent network activity and display the network activity indicator accordingly.
 */

/// Tell the application that network activity has begun. The network activity indicator will then be shown.
/// Display the network activity indicator to provide feedback when your application accesses the network for more than a couple of seconds. If the operation finishes sooner than that, you don’t have to show the network activity indicator, because the indicator would be likely to disappear before users notice its presence.
- (void)beganNetworkActivity;

/// Tell the application that a session of network activity has begun. The network activity indicator will remain showing or hide automatically depending the presence of other ongoing network activity in the app.
- (void)endedNetworkActivity;

@end

@interface UIApplication (KeyboardFrame)

- (CGRect)keyboardFrame;

@end

NS_ASSUME_NONNULL_END
