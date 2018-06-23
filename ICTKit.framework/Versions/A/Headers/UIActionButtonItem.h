/*!
 @header    UIAlertViewButtonItem.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.15
 @deprecated Stop supporting on iOS 8.3 or upper.
 */

#import <Foundation/Foundation.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

NS_CLASS_DEPRECATED_IOS(2_0, 8_3, "UIActionButtonItem is deprecated. Use UIAlertAction instead")
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

#pragma clang diagnostic pop
