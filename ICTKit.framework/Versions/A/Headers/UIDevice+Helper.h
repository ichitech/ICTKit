/*!
 @header    UIDevice+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.0
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
#define iOS_12 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 12.0)
#define iOS_13 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 13.0)
#define iPHONE_DEVICE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone)
#define iPAD_DEVICE ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)

// Deprecated
BOOL HTSystemVersionGreaterOrEqualThan(CGFloat version) NS_DEPRECATED_IOS(4_0, 7_1, "Use UIDeviceSystemVersionIsGreaterThanOrEqualTo() instead.");
BOOL iPHONE_OS_5() NS_DEPRECATED_IOS(4_0, 7_0, "Use UIDeviceModelIsIphone5() instead.");
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone5() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone6() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");
CGSize UIDeviceDifferenceSizeBetweenIphone4AndIphone6Plus() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");
CGSize UIDeviceDifferenceSizeBetweenCurrentDeviceAndIphone4() NS_DEPRECATED_IOS(4_0, 11_0, "Stop supporting on iOS 11.0 or upper.");

// Compare ios version
BOOL UIDeviceSystemVersionIsEqualTo(CGFloat version) NS_SWIFT_NAME(UIDeviceVersion(isEqualTo:)) API_AVAILABLE(ios(6.0));
BOOL UIDeviceSystemVersionIsGreaterThan(CGFloat version) NS_SWIFT_NAME(UIDeviceVersion(isGreaterThan:)) API_AVAILABLE(ios(6.0));
BOOL UIDeviceSystemVersionIsGreaterThanOrEqualTo(CGFloat version) NS_SWIFT_NAME(UIDeviceVersion(isGreaterThanOrEqualTo:)) API_AVAILABLE(ios(6.0));
BOOL UIDeviceSystemVersionIsLessThan(CGFloat version) NS_SWIFT_NAME(UIDeviceVersion(isLessThan:)) API_AVAILABLE(ios(6.0));
BOOL UIDeviceSystemVersionIsLessThanOrEqualTo(CGFloat version) NS_SWIFT_NAME(UIDeviceVersion(isLessThanOrEqualTo:)) API_AVAILABLE(ios(6.0));

// Check iphone system
BOOL UIDeviceModelIsIphone4();
BOOL UIDeviceModelIsIphone4S();
BOOL UIDeviceModelIsIphone5();
BOOL UIDeviceModelIsIphone5C();
BOOL UIDeviceModelIsIphone5S();
BOOL UIDeviceModelIsIphone6();
BOOL UIDeviceModelIsIphone6Plus();
BOOL UIDeviceModelIsIphone6S();
BOOL UIDeviceModelIsIphone6SPlus();
BOOL UIDeviceModelIsIphone7();
BOOL UIDeviceModelIsIphone7Plus();
BOOL UIDeviceModelIsIphone8();
BOOL UIDeviceModelIsIphone8Plus();
BOOL UIDeviceModelIsIphoneX();
BOOL UIDeviceModelIsIphoneXR();
BOOL UIDeviceModelIsIphoneXS();
BOOL UIDeviceModelIsIphoneXSMax();
BOOL UIDeviceModelIsIphone11();
BOOL UIDeviceModelIsIphone11Pro();
BOOL UIDeviceModelIsIphone11ProMax();

// Check InterfaceIdiom
BOOL UIDeviceInterfaceIdiomIphone(void) NS_SWIFT_NAME(isIphoneDevice()) API_AVAILABLE(ios(4.0));
BOOL UIDeviceInterfaceIdiomIpad(void)  NS_SWIFT_NAME(isIpadDevice()) API_AVAILABLE(ios(4.0));

#pragma clang diagnostic pop

typedef NS_ENUM(NSInteger, UIDeviceVersion){
    UIDeviceVersionSimulator =  0,
    UIDeviceVersionIPhone4,
    UIDeviceVersionIPhone4S,
    UIDeviceVersionIPhone5,
    UIDeviceVersionIPhone5C,
    UIDeviceVersionIPhone5S,
    UIDeviceVersionIPhone6,
    UIDeviceVersionIPhone6Plus,
    UIDeviceVersionIPhone6S,
    UIDeviceVersionIPhone6SPlus,
    UIDeviceVersionIPhone7,
    UIDeviceVersionIPhone7Plus,
    UIDeviceVersionIPhoneSE,
    
    UIDeviceVersionIPhone8,
    UIDeviceVersionIPhone8Plus,
    UIDeviceVersionIPhoneX,
    
    UIDeviceVersionIPhoneXR,
    UIDeviceVersionIPhoneXS,
    UIDeviceVersionIPhoneXSMax,
    
    UIDeviceVersionIPhone11,
    UIDeviceVersionIPhone11Pro,
    UIDeviceVersionIPhone11ProMax,
    
    UIDeviceVersionIPadMini,
    UIDeviceVersionIPadMini2,
    UIDeviceVersionIPadMini3,
    UIDeviceVersionIPadMini4,
    UIDeviceVersionIPadMini5,

    UIDeviceVersionIPad1,
    UIDeviceVersionIPad2,
    UIDeviceVersionIPad3,
    UIDeviceVersionIPad4,
    UIDeviceVersionIPad5,
    UIDeviceVersionIPad6,
    UIDeviceVersionIPad7,

    UIDeviceVersionIPadAir,
    UIDeviceVersionIPadAir2,
    UIDeviceVersionIPadAir3,
    
    UIDeviceVersionIPodTouch1Gen,
    UIDeviceVersionIPodTouch2Gen,
    UIDeviceVersionIPodTouch3Gen,
    UIDeviceVersionIPodTouch4Gen,
    UIDeviceVersionIPodTouch5Gen,
    UIDeviceVersionIPodTouch6Gen,
    
    UIDeviceVersionIPadPro9Dot7Inch,
    UIDeviceVersionIPadPro10Dot5Inch,
    UIDeviceVersionIPadPro11Inch,
    UIDeviceVersionIPadPro12Dot9Inch,
    UIDeviceVersionIPadPro12Dot9InchGen2,
    UIDeviceVersionIPadPro12Dot9InchGen3,

    UIDeviceVersionAppleTV2G,
    UIDeviceVersionAppleTV3,
};

typedef NS_ENUM(NSInteger, UIDeviceSize){
    UIDeviceSizeUnknown         = 0,
    UIDeviceSizeScreen3Dot5inch = 1,
    UIDeviceSizeScreen4inch     = 2,
    UIDeviceSizeScreen4Dot7inch = 3,
    UIDeviceSizeScreen5Dot5inch = 4,
    UIDeviceSizeScreen5Dot8inch = 5,
    UIDeviceSizeScreen6Dot1inch = 6,
    UIDeviceSizeScreen6Dot5inch = 7
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
- (UIDeviceVersion) deviceVersion NS_AVAILABLE_IOS(8_0);

/**
 Get the resolution size.
 @return UIDeviceSize
 */
- (UIDeviceSize) resolutionSize NS_AVAILABLE_IOS(8_0);

/**
 Get the device size.
 @return UIDeviceSize
 */
- (UIDeviceSize) deviceSize NS_AVAILABLE_IOS(8_0);

/**
 Get the device model of device.
 @return NSString
 @example iPhone4 iPhone5S iPhone6
 */
+ (NSString *) modelNameForPlatform:(NSString *)platform NS_AVAILABLE_IOS(7_0);

- (UIDeviceVersion) deviceVersionFromPlatform:(NSString *)platform NS_AVAILABLE_IOS(8_0);

@end

