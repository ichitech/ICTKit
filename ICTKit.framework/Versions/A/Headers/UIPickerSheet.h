/*!
 @header    UIPickerSheet.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 Global CyberSoft. All rights reserved.
 @version  6.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class UIPickerSheet;

typedef void(^UIPickerSheetCompletion)(UIPickerSheet *picker,BOOL finish);

@interface UIPickerSheet : NSObject

@property (nonatomic, strong, readonly) UINavigationBar     *navigationBar;
@property (nonatomic, strong, readonly) UIPickerView        *pickerView;
@property (nonatomic, strong, readonly) UIView              *backgroundView;
@property (nonatomic, strong, readonly) UIBarButtonItem     *leftBarButtonItem;
@property (nonatomic, strong, readonly) UIBarButtonItem     *rightBarButtonItem;
@property (nonatomic, strong) UIPickerSheetCompletion       finishBlock;
@property (nonatomic, assign) NSTimeInterval                timeAnimation;

- (void)showCompletion:(UIPickerSheetCompletion)completion;
//use if custom bar button item
- (void)cancel;
- (void)done;

@end
