/*!
 @header    UISideBarViewController.h
 @abstract  ICTKit iOS SDK Source
 @version   8.9
 @deprecated Stop supporting on iOS 7.1 or upper.
 */

#import <UIKit/UIKit.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

/*!
 * @const Notification that gets posted when the underRight view will appear.
 */
extern NSString *const UISideBarViewUnderRightWillAppear;

/*!
 * @const Notification that gets posted when the underLeft view will appear.
 */
extern NSString *const UISideBarViewUnderLeftWillAppear;

/*!
 * @const Notification that gets posted when the underLeft view will disappear.
 */
extern NSString *const UISideBarViewUnderLeftWillDisappear;

/*!
 * @const Notification that gets posted when the underRight view will disappear.
 */
extern NSString *const UISideBarViewUnderRightWillDisappear;

/*!
 * @const Notification that gets posted when the top view is anchored to the left side of the screen.
 */
extern NSString *const UISideBarViewTopDidAnchorLeft;

/*!
 * @const Notification that gets posted when the top view is anchored to the right side of the screen.
 */
extern NSString *const UISideBarViewTopDidAnchorRight;

/*!
 * @const Notification that gets posted when the top view will be centered on the screen.
 */
extern NSString *const UISideBarViewTopWillReset;

/*!
 * @const Notification that gets posted when the top view is centered on the screen.
 */
extern NSString *const UISideBarViewTopDidReset;

/*!
 * @enum SBViewWidthLayout width of under views.
 */
typedef enum {
  /** Under view will take up the full width of the screen */
  SBFullWidth,
  /** Under view will have a fixed width equal to anchorRightRevealAmount or anchorLeftRevealAmount. */
  SBFixedRevealWidth,
  /** Under view will have a variable width depending on rotation equal to the screen's width - anchorRightPeekAmount or anchorLeftPeekAmount. */
  SBVariableRevealWidth
} SBViewWidthLayout;

/*!
 * @enum SBSide side of screen
 */
typedef enum {
  /** Left side of screen */
  SBLeft,
  /** Right side of screen */
  SBRight
} SBSide;

/*!
 * @enum SBResetStrategy top view behavior while anchored.
 */
typedef enum {
  /** No reset strategy will be used */
  SBNone = 0,
  /** Tapping the top view will reset it */
  SBTapping = 1 << 0,
  /** Panning will be enabled on the top view. If it is panned and released towards the reset position it will reset, otherwise it will slide towards the anchored position. */
  SBPanning = 1 << 1
} SBResetStrategy;

/*!
 * @abstract UISideBarViewController is a view controller container that presents its child view controllers in two layers. The top layer can be panned to reveal the layers below it.
 */
NS_CLASS_DEPRECATED_IOS(2_0, 7_1, "UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController")
@interface UISideBarViewController : UIViewController{
  CGPoint startTouchPosition;
  BOOL topViewHasFocus;
}

/** Returns the view controller that will be visible when the top view is slide to the right.
 
 This view controller is typically a menu or top-level view that switches out the top view controller.
 */
@property (nonatomic, strong) UIViewController *underLeftViewController NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the view controller that will be visible when the top view is slide to the left.
 
 This view controller is typically a supplemental view to the top view.
 */
@property (nonatomic, strong) UIViewController *underRightViewController NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the top view controller.
 
 This is the main view controller that is presented above the other view controllers.
 */
@property (nonatomic, strong) UIViewController *topViewController NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the number of points the top view is visible when the top view is anchored to the left side.
 
 This value is fixed after rotation. If the number of points to reveal needs to be fixed, use anchorLeftRevealAmount.
 
 @see anchorLeftRevealAmount
 */
@property (nonatomic, assign) CGFloat anchorLeftPeekAmount NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the number of points the top view is visible when the top view is anchored to the right side.
 
 This value is fixed after rotation. If the number of points to reveal needs to be fixed, use anchorRightRevealAmount.
 
 @see anchorRightRevealAmount
 */
@property (nonatomic, assign) CGFloat anchorRightPeekAmount NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the number of points the under right view is visible when the top view is anchored to the left side.
 
 This value is fixed after rotation. If the number of points to peek needs to be fixed, use anchorLeftPeekAmount.
 
 @see anchorLeftPeekAmount
 */
@property (nonatomic, assign) CGFloat anchorLeftRevealAmount NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the number of points the under left view is visible when the top view is anchored to the right side.
 
 This value is fixed after rotation. If the number of points to peek needs to be fixed, use anchorRightPeekAmount.
 
 @see anchorRightPeekAmount
 */
@property (nonatomic, assign) CGFloat anchorRightRevealAmount NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Specifies whether or not the top view can be panned past the anchor point.
 
 Set to NO if you don't want to show the empty space behind the top and under view.
 
 By defaut, this is set to YES
 */
@property (nonatomic, assign) BOOL shouldAllowPanningPastAnchor NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Specifies if the user should be able to interact with the top view when it is anchored.
 
 By default, this is set to NO
 */
@property (nonatomic, assign) BOOL shouldAllowUserInteractionsWhenAnchored NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Specifies if the top view snapshot requires a pan gesture recognizer.
 
 This is useful when panGesture is added to the navigation bar instead of the main view.
 
 By default, this is set to NO
 */
@property (nonatomic, assign) BOOL shouldAddPanGestureRecognizerToTopViewSnapshot NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Specifies the behavior for the under left width
 
 By default, this is set to SBFullWidth
 */
@property (nonatomic, assign) SBViewWidthLayout underLeftWidthLayout NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Specifies the behavior for the under right width
 
 By default, this is set to SBFullWidth
 */
@property (nonatomic, assign) SBViewWidthLayout underRightWidthLayout NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns the strategy for resetting the top view when it is anchored.
 
 By default, this is set to SBPanning | SBTapping to allow both panning and tapping to reset the top view.
 
 If this is set to SBNone, then there must be a custom way to reset the top view otherwise it will stay anchored.
 */
@property (nonatomic, assign) SBResetStrategy resetStrategy NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns a horizontal panning gesture for moving the top view.
 
 This is typically added to the top view or a top view's navigation bar.
 */
- (UIPanGestureRecognizer *)panGesture NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Slides the top view in the direction of the specified side.
 
 A peek amount or reveal amount must be set for the given side. The top view will anchor to one of those specified values.
 
 @param side The side for the top view to slide towards.
 */
- (void)anchorTopViewTo:(SBSide)side NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Slides the top view in the direction of the specified side.
 
 A peek amount or reveal amount must be set for the given side. The top view will anchor to one of those specified values.
 
 @param side The side for the top view to slide towards.
 @param animations Perform changes to properties that will be animated while top view is moved off screen. Can be nil.
 @param complete Executed after the animation is completed. Can be nil.
 */
- (void)anchorTopViewTo:(SBSide)side animations:(void(^)())animations onComplete:(void(^)())complete NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Slides the top view off of the screen in the direction of the specified side.
 
 @param side The side for the top view to slide off the screen towards.
 */
- (void)anchorTopViewOffScreenTo:(SBSide)side NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Slides the top view off of the screen in the direction of the specified side.
 
 @param side The side for the top view to slide off the screen towards.
 @param animations Perform changes to properties that will be animated while top view is moved off screen. Can be nil.
 @param complete Executed after the animation is completed. Can be nil.
 */
- (void)anchorTopViewOffScreenTo:(SBSide)side animations:(void(^)())animations onComplete:(void(^)())complete NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Slides the top view back to the center. */
- (void)resetTopView NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Slides the top view back to the center.

 @param animations Perform changes to properties that will be animated while top view is moved back to the center of the screen. Can be nil.
 @param complete Executed after the animation is completed. Can be nil.
 */
- (void)resetTopViewWithAnimations:(void(^)())animations onComplete:(void(^)())complete NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns true if the underLeft view is showing (even partially) */
- (BOOL)underLeftShowing NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns true if the underRight view is showing (even partially) */
- (BOOL)underRightShowing NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

/** Returns true if the top view is completely off the screen */
- (BOOL)topViewIsOffScreen NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");

@end

/** UIViewController extension */

@interface UIViewController(SlidingViewExtension)
/** Convience method for getting access to the UISideBarViewController instance */
- (UISideBarViewController *)slidingBarViewController NS_DEPRECATED_IOS(2_0, 7_1,"UISideBarViewController has been replaced by ECSlidingViewController. Please check out it ~> https://github.com/ECSlidingViewController/ECSlidingViewController");
@end

#pragma clang diagnostic pop
