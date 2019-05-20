//
//  NSSet+Helper.h
//  HarrySDK
//
//  Created by BinhTran on 5/10/19.
//  Copyright © 2019 Harry Tran. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSSet (Helper)

- (NSString *)descriptionWithIndent:(NSUInteger)level NS_AVAILABLE_IOS(10_0);

@end

NS_ASSUME_NONNULL_END
