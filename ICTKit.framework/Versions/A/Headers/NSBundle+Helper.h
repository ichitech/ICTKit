/*!
 @header    NSBundle+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.15
 */

#import <Foundation/Foundation.h>

#define kKeyPreferredLanguage @"kKeyPreferredLanguage"

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (Helper)

/**
 Get the ICTKit bundle.

 @return NSBundle of ICTKit
 */
+ (NSBundle *)defaultICTKitBundle NS_AVAILABLE_IOS(8_0);

+ (NSBundle *)currentPreferredLanguageBundle NS_AVAILABLE_IOS(8_0);

+ (NSBundle *)getBundleWithPreferredLanguage:(nullable NSString *)preferredLanguage;

- (void) setPreferredLanguage:(nonnull NSString *)preferredLanguage NS_AVAILABLE_IOS(8_0);

- (void) clearPreferredLanguage NS_AVAILABLE_IOS(8_0);

@end

@interface NSBundle (Predicate)

+ (nullable NSBundle *) myResourcesBundle NS_DEPRECATED_IOS(2_0, 10_0, "+myResourcesBundle has been replaced by +defaultICTKitBundle");

+ (nullable NSBundle *) myPreferredLanguageResourcesBundle NS_DEPRECATED_IOS(2_0, 10_0, "+myPreferredLanguageResourcesBundle has been replaced by +currentPreferredLanguageBundle");

+ (nullable NSBundle *) myResourcesBundleWithPreferredLanguage:(nullable NSString *)preferredLanguage NS_DEPRECATED_IOS(2_0, 10_0, "+myResourcesBundleWithPreferredLanguage: has been replaced by +getBundleWithPreferredLanguage:");

+ (void) setPreferredLanguage:(nonnull NSString *)preferredLanguage NS_DEPRECATED_IOS(2_0, 10_0, "+setPreferredLanguage has been replaced by -setPreferredLanguage");

+ (void) clearPreferredLanguage NS_DEPRECATED_IOS(2_0, 10_0, "+clearPreferredLanguage has been replaced by -clearPreferredLanguage");

@end

NS_ASSUME_NONNULL_END
