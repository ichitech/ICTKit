/*!
 @header    UIApplication+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   6.0
 */

#import <UIKit/UIKit.h>

#define APP_DELEGATE    APPDELEGATE()
#define WINDOW          WIN_DOW()

//Deprecated
id APPDELEGATE() NS_DEPRECATED_IOS(4_0, 8_0, "APP_DELEGATE() has been replaced by AppDelegate()");
UIWindow *WIN_DOW() NS_DEPRECATED_IOS(4_0, 8_0, "WIN_DOW() has been replaced by Window()");

id UIMainAppDelegate() NS_AVAILABLE_IOS(7_0);
UIWindow *Window() NS_AVAILABLE_IOS(7_0);

@interface UIApplication (Helper)

+ (NSString *) appVersion NS_AVAILABLE_IOS(2_0);
+ (NSString *) build NS_AVAILABLE_IOS(2_0);
+ (NSString *) versionBuild NS_AVAILABLE_IOS(2_0);

@end
