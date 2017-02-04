/*!
 @header    UIAlertViewButtonItem.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <Foundation/Foundation.h>

NS_CLASS_DEPRECATED_IOS(2_0, 8_3, "UIActionSheet is deprecated. Use UIAlertController with a preferredStyle of UIAlertControllerStyleAlert instead")
@interface UIActionButtonItem : NSObject
{
    NSString *label;
    void (^action)();
}
@property (retain, nonatomic) NSString *label;

@property (copy, nonatomic) void (^action)();

+(id)item;

+(id)itemWithLabel:(NSString *)inLabel;

+(id)itemWithLabel:(NSString *)inLabel action:(void(^)(void))action;

@end

