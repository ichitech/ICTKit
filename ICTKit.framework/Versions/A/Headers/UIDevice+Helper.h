/*!
 @header    UIDevice+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define iOS_6 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define iOS_7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define iOS_8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define iPHONE_DEVICE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
#define iPAD_DEVICE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

//Deprecated
BOOL HTSystemVersionGreaterOrEqualThan(CGFloat version) NS_DEPRECATED_IOS(4_0, 7_1, "HTSystemVersionGreaterOrEqualThan() has been replaced by UIDeviceSystemVersionIsGreaterThanOrEqualTo()");
BOOL iPHONE_OS_5() NS_DEPRECATED_IOS(4_0, 7_0, "iPHONE_OS_5() has been replaced by UIDeviceModelIsIphone5()");

//compare ios version
BOOL UIDeviceSystemVersionIsEqualTo(CGFloat version) NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceSystemVersionIsGreaterThan(CGFloat version) NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceSystemVersionIsGreaterThanOrEqualTo(CGFloat version) NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceSystemVersionIsLessThan(CGFloat version) NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceSystemVersionIsLessThanOrEqualTo(CGFloat version) NS_AVAILABLE_IOS(6_0);

//check iphone system
BOOL UIDeviceModelIsIphone4() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone4S() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone5() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone5S() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone6() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone6Plus() NS_AVAILABLE_IOS(6_0);

//check InterfaceIdiom
BOOL UIDeviceInterfaceIdiomIphone() NS_AVAILABLE_IOS(4_0);
BOOL UIDeviceInterfaceIdiomIpad() NS_AVAILABLE_IOS(4_0);

//diffrence size
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone5() NS_AVAILABLE_IOS(7_0);
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone6() NS_AVAILABLE_IOS(7_0);
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone6Plus() NS_AVAILABLE_IOS(7_0);
CGSize UIDeviceDifferenceSizeBetweenCurrentDeviceAndIphone4() NS_AVAILABLE_IOS(7_0);

@interface UIDevice (Helper)

//Returns platform code for device
- (NSString *) platform NS_AVAILABLE_IOS(4_0);
//Returns device model of device
- (NSString *) platformModel NS_AVAILABLE_IOS(4_0);

@end

