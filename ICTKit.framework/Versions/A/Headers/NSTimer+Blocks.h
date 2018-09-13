/*!
 @header    NSTimer+Blocks.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   9.0
 */

#import <Foundation/Foundation.h>

/** Adds blocks to the NSTimer class.
*/
@interface NSTimer (Blocks)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

/// Creates and schedules an NSTimer specified to fire after the given time interval and which will execute the given block.
+ (instancetype) scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval
                                         block:(dispatch_block_t)inBlock
                                       repeats:(BOOL)inRepeats NS_DEPRECATED_IOS(5_0, 11_0, "Use +scheduledTimerWithTimeInterval:repeats:completion: instead.");

/// Creates an NSTimer specified to fire after the given time interval and which will execute the given block.
+ (instancetype) timerWithTimeInterval:(NSTimeInterval)inTimeInterval
                                block:(dispatch_block_t)inBlock
                              repeats:(BOOL)inRepeats NS_DEPRECATED_IOS(5_0, 11_0, "Use +timerWithTimeInterval:repeats:completion: instead.");

#pragma clang diagnostic pop

/// Creates and returns a new NSTimer object initialized with the specified block object. This timer needs to be scheduled on a run loop (via -[NSRunLoop addTimer:]) before it will fire.
/// - parameter:  timeInterval  The number of seconds between firings of the timer. If seconds is less than or equal to 0.0, this method chooses the nonnegative value of 0.1 milliseconds instead
/// - parameter:  repeats  If YES, the timer will repeatedly reschedule itself until invalidated. If NO, the timer will be invalidated after it fires.
/// - parameter:  block  The execution body of the timer; the timer itself is passed as the parameter to this block when executed to aid in avoiding cyclical references
+ (instancetype)timerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats completion:(void (^)(NSTimer *timer))block NS_AVAILABLE_IOS(8_0);

/// Creates and returns a new NSTimer object initialized with the specified block object and schedules it on the current run loop in the default mode.
/// - parameter:  ti    The number of seconds between firings of the timer. If seconds is less than or equal to 0.0, this method chooses the nonnegative value of 0.1 milliseconds instead
/// - parameter:  repeats  If YES, the timer will repeatedly reschedule itself until invalidated. If NO, the timer will be invalidated after it fires.
/// - parameter:  block  The execution body of the timer; the timer itself is passed as the parameter to this block when executed to aid in avoiding cyclical references
+ (instancetype)scheduledTimerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats completion:(void (^)(NSTimer *timer))block NS_AVAILABLE_IOS(8_0);

@end
