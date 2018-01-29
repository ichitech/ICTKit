/*!
 @header    NSLocalizedStringCustom.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.2
 */

#import <Foundation/Foundation.h>

#define NSLocalizedStringCustom(key, comment) \
[[NSLocalizedStringCustom shared] localizedStringForKey:(key) value:(comment)]

#define NSLocalizationSetLanguage(language) \
[[NSLocalizedStringCustom shared] setLanguage:(language)]

#define NSLocalizationGetLanguage \
[[NSLocalizedStringCustom shared] getLanguage]

#define NSLocalizationReset \
[[NSLocalizedStringCustom shared] resetLocalization]

@interface NSLocalizedStringCustom : NSObject {
    @private
	NSString *language;
}

/*!
 * @constant Singleton instance.
 *
 * @note You really shouldn't care about this functions and use the MACROS.
 */
+ (NSLocalizedStringCustom *)shared NS_AVAILABLE_IOS(4_0);

/*!
 * @abstract Gets the current localized string as in NSLocalizedStringCustom
 *
 * @example NSLocalizedStringCustom(@"Text to localize",@"Alternative text, in case hte other is not find");
 */
- (NSString *)localizedStringForKey:(NSString *)key value:(NSString *)comment NS_AVAILABLE_IOS(4_0);

/*!
 * @abstract Sets the desired language of the ones you have.
 *
 * @example NSLocalizationSetLanguage(@"Italian");
 *
 * @note If this function is not called it will use the default OS language.
 *       If the language does not exists y returns the default OS language.
 */
- (void) setLanguage:(NSString*) language NS_AVAILABLE_IOS(4_0);

/*!
 * @abstract Just gets the current setted up language.
 *
 * @example NSString * currentL = NSLocalizationGetLanguage;
 *
 * @return "es","fr",...
 */
- (NSString*) getLanguage NS_AVAILABLE_IOS(4_0);

/*!
 * @abstract Resets the localization system, so it uses the OS default language.
 *
 * @example NSLocalizationReset.
 */
- (void) resetLocalization NS_AVAILABLE_IOS(4_0);

@end
