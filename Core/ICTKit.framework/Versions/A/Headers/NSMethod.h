//
//  NSMethod.h
//  HarryFramework
//
//  Created by BinhTran on 9/23/14.
//  Copyright (c) 2014 Harry Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - NSString

//trim — Strip whitespace (or other characters) from the beginning and end of a string.
NSString *trim (NSString *input);

//exportNull - Convert NSNull to an object. If inputClass is nil, default is NSString.
id exportNull (id input,Class inputClass);

//compare Class
BOOL objcIsKindOfClass(id object, Class inputClass);