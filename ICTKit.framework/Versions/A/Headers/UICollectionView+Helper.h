//
//  UICollectionView+Helper.h
//  HarrySDK
//
//  Created by HarryTran on 5/17/19.
//  Copyright © 2019 Harry Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UICollectionView (Helper)

- (nullable NSIndexPath *)indexPathForRowWithEvent:(UIEvent *__nonnull)event NS_AVAILABLE_IOS(7_0);

- (nullable NSIndexPath *)indexPathForItemWithEvent:(UIEvent *__nonnull)event NS_AVAILABLE_IOS(7_0);

@end

NS_ASSUME_NONNULL_END
