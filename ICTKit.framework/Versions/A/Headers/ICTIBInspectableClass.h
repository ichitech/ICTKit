/*!
 @header    ICTIBInspectableClass.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   7.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImageView (IBInspectableClass)

/**
 * Set the tintColor of current image.
 */

@property (nonatomic, strong) IBInspectable UIColor *imageTintColor ;

@end

@interface UIButton (IBInspectableClass)

/**
 * Set the tintColor of current image for state UIControlStateNormal.
 */
@property (nonatomic, strong) IBInspectable UIColor *imageTintColor ;

/**
 * Set the tintColor of current background image for state UIControlStateNormal.
 */
@property (nonatomic, strong) IBInspectable UIColor *backgroundImageTintColor;

/**
 * Set localizable string of button title for state UIControlStateNormal.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString;

- (void)reloadlocalizableString;

@end

@interface UILabel (IBInspectableClass)

/**
 * Set localizable string of text title.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString ;

- (void)reloadlocalizableString;

@end

@interface UIBarButtonItem (IBInspectableClass)

/**
 * Set localizable string of bar button title.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString ;

- (void)reloadlocalizableString;

@end

@interface UIView (IBInspectableClass)

@property (nonatomic, assign) IBInspectable CGFloat cornerRadius ;

@property (nonatomic, assign) IBInspectable CGFloat borderWidth ;

@property (nonatomic, assign) IBInspectable UIColor *borderColor;

@end
