/*!
 @header    ICTIBInspectableClass.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImageView (IBInspectableClass)

/**
 * Set the tintColor of current image.
 */
@property (nonatomic, strong) IBInspectable UIColor *imageTintColor API_AVAILABLE(ios(7.0));

@end

@interface UIButton (IBInspectableClass)

/**
 * Set the tintColor of current image for state UIControlStateNormal.
 */
@property (nonatomic, strong) IBInspectable UIColor *imageTintColor API_AVAILABLE(ios(7.0));

/**
 * Set the tintColor of current background image for state UIControlStateNormal.
 */
@property (nonatomic, strong) IBInspectable UIColor *backgroundImageTintColor API_AVAILABLE(ios(7.0));

/**
 * Set localizable string of button title for state UIControlStateNormal.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString API_AVAILABLE(ios(7.0));

- (void)reloadLocalizable API_AVAILABLE(ios(7.0));
- (void)reloadlocalizableString NS_DEPRECATED_IOS(6_0, 10_0, "Use -reloadLocalizable instead.");

@end

@interface UILabel (IBInspectableClass)

/**
 * Set localizable string of text title.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString;

- (void)reloadLocalizable API_AVAILABLE(ios(7.0));
- (void)reloadlocalizableString NS_DEPRECATED_IOS(6_0, 10_0, "Use -reloadLocalizable instead.");

@end

@interface UIBarButtonItem (IBInspectableClass)

/**
 * Set localizable string of bar button title.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString;

- (void)reloadLocalizable API_AVAILABLE(ios(7.0));
- (void)reloadlocalizableString NS_DEPRECATED_IOS(6_0, 10_0, "Use -reloadLocalizable instead.");

@end

@interface UIView (IBInspectableClass)

@property (nonatomic, assign) IBInspectable CGFloat cornerRadius API_AVAILABLE(ios(7.0));
@property (nonatomic, assign) IBInspectable CGFloat borderWidth API_AVAILABLE(ios(7.0));
@property (nonatomic, assign) IBInspectable UIColor *borderColor API_AVAILABLE(ios(7.0));

@end


@interface UITextField (IBInspectableClass)
    
@property (nonatomic, strong) IBInspectable NSString *localizablePlaceholder API_AVAILABLE(ios(7.0));
@property (nonatomic, strong) IBInspectable UIColor  *placeholderColor API_AVAILABLE(ios(7.0));

- (void)reloadLocalizablePlaceholder API_AVAILABLE(ios(7.0));
    
@end
