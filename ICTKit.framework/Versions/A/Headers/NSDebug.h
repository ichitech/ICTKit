/*!
 @header    NSDebug.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.2
 */

#import "NSDefine.h"

#define MyLocalizedDocumentation(key, comment) \
NSLocalizedStringFromTableInBundle((key),nil,[NSBundle myPreferredLanguageResourcesBundle],(comment))

#define MyLocalizedDocumentationWithPreferredLanguage(key, comment, preferredLanguage) \
NSLocalizedStringFromTableInBundle((key),nil,[NSBundle myResourcesBundleWithPreferredLanguage:preferredLanguage],(comment))

// define some macros
#ifndef __has_feature
#define __has_feature(x) 0
#endif
#ifndef __has_extension
#define __has_extension __has_feature // Compatibility with pre-3.0 compilers.
#endif

#if __has_feature(objc_arc) && __clang_major__ >= 3
#define NSARC_ENABLED 1
#endif // __has_feature(objc_arc)

#if NSARC_ENABLED
#define NSRETAIN(xx) 
#define NSRELEASE(xx)  xx = nil
#define NSAUTORELEASE(xx)  (xx)
#define CONST_VOID(desc) (__bridge const void *)(desc)
#else
#define NSRETAIN(xx)           [xx retain]
#define NSRELEASE(xx)          [xx release], xx = nil
#define NSAUTORELEASE(xx)      [xx autorelease]
#define CONST_VOID(desc) (const void *)(desc)
#endif

#ifndef NSLog
#if DEBUG
#define NSLog(fmt, ...) NSLog((@"%s [Line %d] " fmt),__PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define NSLog(fmt, ...)
#endif
#endif

#if TARGET_IPHONE_SIMULATOR
    # define NSSimulatorLog(fmt, ...) NSLog((@"%s [Line %d] " fmt),__PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
    # define NSSimulatorLog(fmt, ...)
#endif


