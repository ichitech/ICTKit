/*!
 @header    NSTimer+Blocks.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <Foundation/Foundation.h>

/** Adds blocks to the NSTimer class.
*/
@interface NSTimer (Blocks)

/// Creates and schedules an NSTimer specified to fire after the given time interval and which will execute the given block.
+(instancetype) scheduledTimerWithTimeInterval:(NSTimeInterval)inTimeInterval
                                         block:(void (^)())inBlock
                                       repeats:(BOOL)inRepeats NS_AVAILABLE_IOS(5_0);

/// Creates an NSTimer specified to fire after the given time interval and which will execute the given block.
+(instancetype) timerWithTimeInterval:(NSTimeInterval)inTimeInterval
                                block:(void (^)())inBlock
                              repeats:(BOOL)inRepeats NS_AVAILABLE_IOS(5_0);

@end
