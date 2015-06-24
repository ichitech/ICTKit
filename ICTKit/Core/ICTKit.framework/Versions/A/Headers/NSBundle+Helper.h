//
//  NSBundle+Helper.h
//  HarryFramework
//
//  Created by HarryTran on 1/9/15.
//  Copyright (c) 2015 Harry Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kKeyPreferredLanguage @"kKeyPreferredLanguage"

@interface NSBundle (Helper)

+ (void) setPreferredLanguage:(NSString *)preferredLanguage NS_AVAILABLE_IOS(7_0);

+ (void) clearPreferredLanguage NS_AVAILABLE_IOS(7_0);

+ (NSBundle *) myResourcesBundle NS_AVAILABLE_IOS(2_0);

+ (NSBundle *) myPreferredLanguageResourcesBundle NS_AVAILABLE_IOS(2_0);

+ (NSBundle *) myResourcesBundleWithPreferredLanguage:(NSString *)preferredLanguage NS_AVAILABLE_IOS(7_0);

@end
