//
//  ICTGoogleTracking.h
//  HarryFramework
//
//  Created by Harry Tran on 1/8/16.
//  Copyright © 2016 Harry Tran. All rights reserved.
//

#import <Foundation/Foundation.h>
#if __has_include(<GoogleAnalytics/GAI.h>)
    #import <GoogleAnalytics/GAI.h>
    #import <GoogleAnalytics/GAITracker.h>
    #import <GoogleAnalytics/GAIFields.h>
#else
    #if __has_include(<GAI.h>)
        #import "GAI.h"
        #import "GAITracker.h"
        #import "GAIFields.h"
    #else
        #if __has_include("GAI.h")
            #import "GAI.h"
            #import "GAITracker.h"
            #import "GAIFields.h"
        #endif
    #endif
#endif

#if __has_include(<AFNetworking/AFNetworking.h>)
    #import <AFNetworking/AFNetworking.h>
#else
    #if __has_include(<AFNetworking.h>)
        #import "AFNetworking.h"
    #else
        #if __has_include("AFNetworking.h")
            #import "AFNetworking.h"
        #endif
    #endif
#endif

#if TARGET_IPHONE_SIMULATOR
    #define ICT_ALLOW_GT 0
#else
    #ifdef DEBUG                                   
        #define ICT_ALLOW_GT 0
    #else
        #define ICT_ALLOW_GT 1
    #endif
#endif

#if (__has_include(<GoogleAnalytics/GAI.h>) || __has_include(<GAI.h>) || __has_include("GAI.h"))
BOOL ICTGoogleTrackingViewControllerBasic(id viewController) ;
BOOL ICTGoogleTrackingViewControllerBlock(id viewController, dispatch_block_t completion) ;

#if (__has_include(<AFNetworking/AFNetworking.h>) || __has_include(<AFNetworking.h>) || __has_include("AFNetworking.h"))
BOOL ICTGoogleTrackingNetworkRequestOperation(AFHTTPRequestOperation *operation, NSDictionary *sender);
#endif

#endif

@interface ICTGoogleTracking : NSObject

@end
