/*!
 @header    UIView+Positioning.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
  @version   8.13
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - UIView (Positioning)

/// These category methods are probably pretty dangerous.  Their purpose is to allow you to quickly and easily position your view within another view.
@interface UIView (Positioning)

// WARNING: Remember these are all acting on the FRAME, which is the coordinates within the parent view!

/// @name Operations on the CENTER property of the view

/// Sets the x coordinate of center.
@property CGFloat x NS_AVAILABLE_IOS(2_0);
/// Sets the y coordinate of center.
@property CGFloat y NS_AVAILABLE_IOS(2_0);

/// @name Operations on the edges of the view.

/// Sets the top edge of the view
@property CGFloat top NS_AVAILABLE_IOS(2_0);
/// Sets the left edge of the view
@property CGFloat left NS_AVAILABLE_IOS(2_0);

/// Sets the width of the view
@property CGFloat width NS_AVAILABLE_IOS(2_0);
/// Sets the height of the view
@property CGFloat height NS_AVAILABLE_IOS(2_0);

// @name set/get right/bottom sides of view - will move origin to position right/bottom at location

/// Sets the right edge of the view to the given location by moving origin appropriately. Does not change width.
@property CGFloat right NS_AVAILABLE_IOS(2_0);
/// Sets the bottom edge of the view to the given location by moving origin appropriately. Does not change height.
@property CGFloat bottom NS_AVAILABLE_IOS(2_0);

/// Gets the center of the view's bounds.
@property (readonly) CGPoint boundsCenter NS_AVAILABLE_IOS(2_0);

/// Gets the top left corner of the view's frame.
@property (readonly) CGPoint topLeft NS_AVAILABLE_IOS(2_0);
/// Gets the top right corner of the view's frame.
@property (readonly) CGPoint topRight NS_AVAILABLE_IOS(2_0);
/// Gets the bottom left corner of the view's frame.
@property (readonly) CGPoint bottomLeft NS_AVAILABLE_IOS(2_0);
/// Gets the bottom right corner of the view's frame.
@property (readonly) CGPoint bottomRight NS_AVAILABLE_IOS(2_0);

/// Gets the top left corner of the view's bounds.
@property (readonly) CGPoint topLeftBounds NS_AVAILABLE_IOS(2_0);
/// Gets the top right corner of the view's bounds.
@property (readonly) CGPoint topRightBounds NS_AVAILABLE_IOS(2_0);
/// Gets the bottom left corner of the view's bounds.
@property (readonly) CGPoint bottomLeftBounds NS_AVAILABLE_IOS(2_0) ;
/// Gets the bottom right corner of the view's bounds.
@property (readonly) CGPoint bottomRightBounds NS_AVAILABLE_IOS(2_0);

//+(void)beginRemoveViewAnimationForView:(UIView *)inView;

/// Given an array of subviews, adjust their frames to evenly distribute them within the parent view.
-(void)evenlyDistributeHorizontallySubviewsInArray:(NSArray *)inSubviews NS_AVAILABLE_IOS(6_0);
/// Given a two dimensional array of arrays of subviews, distribute them evenly within the receiver. All rows must have all the same number of elements. If you have a row with fewer elements, fill with NSNull to pad the row.
-(void)spreadSubviewsIntoGrid:(NSArray *)inGridOfSubviews NS_AVAILABLE_IOS(6_0);

/// Returns the frame of the receiver within the coordinate system of the given view.
-(CGRect)frameInRelationToView:(UIView *)inView NS_AVAILABLE_IOS(6_0);

@end

#pragma mark - UIView (Border)

@interface UIView (Border)

- (void) addBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addBottomBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addLeftBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addRightBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

- (void) addTopBorderWithColor:(UIColor *)color andWidth:(CGFloat)borderWidth NS_AVAILABLE_IOS(6_0);

@end

#pragma mark - UIView (Subview)

@interface UIView (Subview)

- (NSArray <__kindof UIView *>*)allSubViews;

@end
