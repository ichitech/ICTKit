/*!
 @header    UIDevice+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.0
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

#define iOS_6 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
#define iOS_7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define iOS_8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define iOS_9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define iOS_10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define iOS_11 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define iPHONE_DEVICE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
#define iPAD_DEVICE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

//Deprecated
BOOL HTSystemVersionGreaterOrEqualThan(CGFloat version) NS_DEPRECATED_IOS(4_0, 7_1, "Use UIDeviceSystemVersionIsGreaterThanOrEqualTo() instead.");
BOOL iPHONE_OS_5() NS_DEPRECATED_IOS(4_0, 7_0, "Use UIDeviceModelIsIphone5() instead.");
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone5() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone6() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone6Plus() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");
CGSize UIDeviceDifferenceSizeBetweenCurrentDeviceAndIphone4() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");

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
BOOL UIDeviceModelIsIphone5C() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone5S() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone6() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone6Plus() NS_AVAILABLE_IOS(6_0);
BOOL UIDeviceModelIsIphone6S() NS_AVAILABLE_IOS(7_0);
BOOL UIDeviceModelIsIphone6SPlus() NS_AVAILABLE_IOS(7_0);
BOOL UIDeviceModelIsIphone7() NS_AVAILABLE_IOS(8_0);
BOOL UIDeviceModelIsIphone7Plus() NS_AVAILABLE_IOS(8_0);
BOOL UIDeviceModelIsIphone8() NS_AVAILABLE_IOS(8_0);
BOOL UIDeviceModelIsIphone8Plus() NS_AVAILABLE_IOS(8_0);
BOOL UIDeviceModelIsIphoneX() NS_AVAILABLE_IOS(8_0);

//check InterfaceIdiom
BOOL UIDeviceInterfaceIdiomIphone() NS_AVAILABLE_IOS(4_0);
BOOL UIDeviceInterfaceIdiomIpad() NS_AVAILABLE_IOS(4_0);

#pragma clang diagnostic pop

typedef NS_ENUM(NSInteger, UIDeviceVersion){
    UIDeviceVersionIPhone4           = 3,
    UIDeviceVersionIPhone4S          = 4,
    UIDeviceVersionIPhone5           = 5,
    UIDeviceVersionIPhone5C          = 6,
    UIDeviceVersionIPhone5S          = 7,
    UIDeviceVersionIPhone6           = 8,
    UIDeviceVersionIPhone6Plus       = 9,
    UIDeviceVersionIPhone6S          = 10,
    UIDeviceVersionIPhone6SPlus      = 11,
    UIDeviceVersionIPhone7           = 12,
    UIDeviceVersionIPhone7Plus       = 13,
    UIDeviceVersionIPhoneSE          = 14,
    
    UIDeviceVersionIPad1             = 15,
    UIDeviceVersionIPad2             = 16,
    UIDeviceVersionIPadMini          = 17,
    UIDeviceVersionIPad3             = 18,
    UIDeviceVersionIPad4             = 19,
    UIDeviceVersionIPadAir           = 20,
    UIDeviceVersionIPadMini2         = 21,
    UIDeviceVersionIPadAir2          = 22,
    UIDeviceVersionIPadMini3         = 23,
    UIDeviceVersionIPadMini4         = 24,
    UIDeviceVersionIPadPro12Dot9Inch = 25,
    UIDeviceVersionIPadPro9Dot7Inch  = 26,
    
    UIDeviceVersionIPodTouch1Gen     = 27,
    UIDeviceVersionIPodTouch2Gen     = 28,
    UIDeviceVersionIPodTouch3Gen     = 29,
    UIDeviceVersionIPodTouch4Gen     = 30,
    UIDeviceVersionIPodTouch5Gen     = 31,
    UIDeviceVersionIPodTouch6Gen     = 32,
    
    UIDeviceVersionSimulator         =  0,
    
    UIDeviceVersionIPhone8           = 40,
    UIDeviceVersionIPhone8Plus       = 41,
    UIDeviceVersionIPhoneX           = 42,
    UIDeviceVersionIPad5             = 33,
    UIDeviceVersionIPadPro12Dot9InchGen2 = 34,
    UIDeviceVersionIPadPro10Dot5Inch  = 35,
    
    UIDeviceVersionAppleTV2G         = 36,
    UIDeviceVersionAppleTV3          = 37,
};

typedef NS_ENUM(NSInteger, UIDeviceSize){
    UIDeviceSizeUnknown         = 0,
    UIDeviceSizeScreen3Dot5inch = 1,
    UIDeviceSizeScreen4inch     = 2,
    UIDeviceSizeScreen4Dot7inch = 3,
    UIDeviceSizeScreen5Dot5inch = 4,
    UIDeviceSizeScreen5Dot8inch = 5
};

@interface UIDevice (Helper)

/**
 Get the list of devices.

 @return NSDictionary
 */
- (NSDictionary*)deviceNames NS_AVAILABLE_IOS(8_0);

/**
 Get the platform code for device.

 @return NSString
 @example iPhone9,4 iPod1,1 iPad1,1 x86_64
 */
- (NSString *) platform NS_AVAILABLE_IOS(4_0);

/**
 Get the device model of device.

 @return NSString
 @example iPhone4 iPhone5S iPhone6
 */
- (NSString *) platformModelName NS_AVAILABLE_IOS(8_0);
- (NSString *) platformModel NS_DEPRECATED_IOS(4_0, 11_0, "Use -platformModelName() instead.");

/**
 Get the version of device.

 @return UIDeviceVersion
 */
- (UIDeviceVersion)deviceVersion NS_AVAILABLE_IOS(8_0);

/**
 Get the resolution size.
 
 @return UIDeviceSize
 */
- (UIDeviceSize)resolutionSize NS_AVAILABLE_IOS(8_0);

/**
 Get the device size.
 
 @return UIDeviceSize
 */
- (UIDeviceSize)deviceSize NS_AVAILABLE_IOS(8_0);

/**
 Get the device model of device.
 
 @return NSString
 @example iPhone4 iPhone5S iPhone6
 */
+ (NSString *) modelNameForPlatform:(NSString *)platform NS_AVAILABLE_IOS(7_0);

@end

