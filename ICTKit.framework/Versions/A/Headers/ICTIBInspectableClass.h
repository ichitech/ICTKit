/*!
 @header    ICTIBInspectableClass.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIImageView (IBInspectableClass)

/**
 * Set the tintColor of current image.
 */
@property (nonatomic, strong) IBInspectable UIColor *imageTintColor;// NS_DEPRECATED_IOS(6_0, 10_0, "Use -localizable instead.");
//@property (nonatomic, strong) IBInspectable UIColor *iTintColor NS_AVAILABLE_IOS(8_0);

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
@property (nonatomic, strong) IBInspectable NSString *localizableString;// NS_DEPRECATED_IOS(6_0, 10_0, "Use -localizable instead.");
    
//@property (nonatomic, strong) IBInspectable NSString *localizable NS_AVAILABLE_IOS(8_0);
    
- (void)reloadlocalizableString NS_DEPRECATED_IOS(6_0, 10_0, "Use -reloadLocalizable instead.");
    
- (void)reloadLocalizable NS_AVAILABLE_IOS(8_0);

@end

@interface UILabel (IBInspectableClass)

/**
 * Set localizable string of text title.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString;// NS_DEPRECATED_IOS(6_0, 10_0, "Use -localizable instead.");
    
//@property (nonatomic, strong) IBInspectable NSString *localizable NS_AVAILABLE_IOS(8_0);
    
- (void)reloadlocalizableString NS_DEPRECATED_IOS(6_0, 10_0, "Use -reloadLocalizable instead.");

- (void)reloadLocalizable NS_AVAILABLE_IOS(8_0);

@end

@interface UIBarButtonItem (IBInspectableClass)

/**
 * Set localizable string of bar button title.
 */
@property (nonatomic, strong) IBInspectable NSString *localizableString;// NS_DEPRECATED_IOS(6_0, 10_0, "Use -localizable instead.");
    
//@property (nonatomic, strong) IBInspectable NSString *localizable NS_AVAILABLE_IOS(8_0);
    
- (void)reloadlocalizableString NS_DEPRECATED_IOS(6_0, 10_0, "Use -reloadLocalizable instead.");
    
- (void)reloadLocalizable NS_AVAILABLE_IOS(8_0);

@end

@interface UIView (IBInspectableClass)

@property (nonatomic, assign) IBInspectable CGFloat cornerRadius ;

@property (nonatomic, assign) IBInspectable CGFloat borderWidth ;

@property (nonatomic, assign) IBInspectable UIColor *borderColor;

@end


@interface UITextField (IBInspectableClass)
    
@property (nonatomic, strong) IBInspectable NSString *localizablePlaceholder ;
    
- (void)reloadLocalizablePlaceholder;
    
@end
