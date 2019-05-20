/*!
 @header    UIPickerSheet.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 Global CyberSoft. All rights reserved.
 @version   12.2
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UIPickerSheet;

typedef void(^UIPickerSheetCompletion)(UIPickerSheet *picker,BOOL finish) NS_DEPRECATED_IOS(2_0, 10_0, "UIPickerSheetCompletion is deprecated.");
typedef void(^UIPickerSheetCompose)(UIPickerSheet *picker) NS_DEPRECATED_IOS(2_0, 10_0, "UIPickerSheetCompose is deprecated.");

NS_CLASS_DEPRECATED_IOS(2_0, 10_0, "UIPickerSheet is deprecated. Use ActionSheetPicker instead.")
@interface UIPickerSheet : NSObject

/**
 Create the singleton picker object.
 
 @return UIDatePickerSheet object.
 */
+ (instancetype)shareInstance NS_AVAILABLE_IOS(8_0);

+ (instancetype) new NS_DEPRECATED_IOS(2_0, 9_0, "Use +shareInstance instead.");
- (instancetype) init NS_DEPRECATED_IOS(2_0, 9_0, "Use +shareInstance instead.");

/**
 Get the current navigation bar.
 */
@property (nonatomic, strong, readonly, nullable)  UINavigationBar      *navigationBar NS_AVAILABLE_IOS(7_0);

/**
 Get the current pickerDate.
 */
@property (nonatomic, strong, readonly)  UIPickerView         *pickerView NS_AVAILABLE_IOS(7_0);

/**
 Get the current backgroundView.
 */
@property (nonatomic, strong, readonly, nullable)  UIView     *backgroundView NS_AVAILABLE_IOS(7_0);

/**
 Get the current left bar button item.
 */
@property (nonatomic, strong, readonly)  UIBarButtonItem      *leftBarButtonItem NS_AVAILABLE_IOS(7_0);

/**
 Get the current right bar button item.
 */
@property (nonatomic, strong, readonly)  UIBarButtonItem      *rightBarButtonItem NS_AVAILABLE_IOS(7_0);


/**
 Set up the time of animation when showing the picker.
 */
@property (nonatomic, assign)            NSTimeInterval       timeAnimation NS_AVAILABLE_IOS(7_0);


/**
 Show the picker date with completion block.
 
 @param completion UIDatePickerSheetCompletion block will be called after dismissing.
 */
- (void) showCompletion:(UIPickerSheetCompletion)completion NS_DEPRECATED_IOS(2_0, 9_0, "Use -showInView:compose:completion: instead.");
- (void) done;

/**
 Show the date picker sheet in the destination view.
 
 @param view       The destination view will display the picker. if NIL the WINDOW is set by default.
 @param compose    The compose block allows to custom the picker (font, text color,...).
 @param completion The completion block will be called after dismissing.
 @note  NOT USE the method -(void)showCompletion: after calling this method.
 */
- (void) showInView:(nullable __kindof UIView *)view
            compose:(nullable UIPickerSheetCompose)compose
         completion:(nonnull UIPickerSheetCompletion)completion NS_AVAILABLE_IOS(8_0);


/**
 Dismiss the picker date.
 */
- (void) dismiss NS_AVAILABLE_IOS(8_0);
- (void) cancel NS_DEPRECATED_IOS(2_0, 9_0, "Use -dismiss instead.");

@end


NS_ASSUME_NONNULL_END
