//
//  ICTGoogleTracking.h
//  HarryFramework
//
//  Created by Harry Tran on 1/8/16.
//  Copyright © 2016 Harry Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ICTGoogleTracking : NSObject

/**
 *  Make the parameter from the NSURLSessionDataTask and response object.
 *
 *  @param task   NSURLSessionDataTask.
 *  @param object Response object from server.
 *
 *  @return Dictionary paramter.
 */
+ (NSDictionary *)loggingSessionDataTask:(NSURLSessionDataTask *)task sender:(id)object;

/**
 *  Generate the category based on the current build configuration.
 *
 *  @return String of category.
 */
+ (NSString *)basicCategory;

/**
 *  Get the current wifi information.
 *
 *  @return The dictionary information.
 */
+ (NSDictionary *)currentWifiInfo;


@end
