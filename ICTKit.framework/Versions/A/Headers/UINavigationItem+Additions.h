//
//  UINavigationItem+Additions.h
//  HarryFramework
//
//  Created by HarryTran on 10/25/14.
//  Copyright (c) 2014 Harry Tran. All rights reserved.
//

#import <UIKit/UIKit.h>

// UINavigationItem+Additions.h
@interface UINavigationItem (Additions)

- (void)addLeftBarButtonItem:(nullable UIBarButtonItem *)leftBarButtonItem  NS_AVAILABLE_IOS(7_0);
- (void)addRightBarButtonItem:(nullable UIBarButtonItem *)rightBarButtonItem  NS_AVAILABLE_IOS(7_0);

@end
