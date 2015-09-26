/*!
 @header    UIDatePickerSheet.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 Global CyberSoft. All rights reserved.
 @version  7.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class UIDatePickerSheet;

typedef void(^UIDatePickerSheetCompletion)(UIDatePickerSheet *picker,BOOL finish);

@interface UIDatePickerSheet : NSObject

@property (nonatomic, strong, readonly)   UINavigationBar      *navigationBar;
@property (nonatomic, strong, readonly)   UIDatePicker         *pickerDate;
@property (nonatomic, strong, readonly)   UIView               *backgroundView;
@property (nonatomic, strong, readonly)   UIBarButtonItem      *leftBarButtonItem;
@property (nonatomic, strong, readonly)   UIBarButtonItem      *rightBarButtonItem;

@property (nonatomic, assign)   NSTimeInterval                 timeAnimation;
@property (nonatomic, strong, nullable)   UIDatePickerSheetCompletion    finishBlock;

- (void) showCompletion:(UIDatePickerSheetCompletion)completion;
//use if custom bar button item
- (void)cancel;
- (void)done;

@end

NS_ASSUME_NONNULL_END