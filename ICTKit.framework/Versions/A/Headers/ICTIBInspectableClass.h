/*!
 @header    ICTIBInspectableClass.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   6.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImageView (IBInspectableClass)

@property (nonatomic, strong) IBInspectable UIColor *imageTintColor ;

@end

@interface UIButton (IBInspectableClass)

@property (nonatomic, strong) IBInspectable UIColor *imageTintColor ;

@property (nonatomic, strong) IBInspectable UIColor *backgroundImageTintColor;

@property (nonatomic, strong) IBInspectable NSString *localizableString;

@end

@interface UIView (IBInspectableClass)

@property (nonatomic, assign) IBInspectable CGFloat cornerRadius ;
@property (nonatomic, assign) IBInspectable CGFloat borderWidth ;
@property (nonatomic, assign) IBInspectable UIColor *borderColor;

@end

@interface UILabel (IBInspectableClass)

@property (nonatomic, strong) IBInspectable NSString *localizableString ;

@end

@interface UIBarButtonItem (IBInspectableClass)

@property (nonatomic, strong) IBInspectable NSString *localizableString ;

@end