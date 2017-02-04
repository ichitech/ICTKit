/*!
 @header    NSDate+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (DateCompare)

+(NSDate *)normalizedDateWithDate:(NSDate *) date NS_AVAILABLE_IOS(4_0);

///Compare with TODAY
+(BOOL)isEqualToDateIgnoringTime:(NSDate *) date NS_AVAILABLE_IOS(4_0);

+(BOOL)isEarlierThanDate:(NSDate *) date NS_AVAILABLE_IOS(4_0);

+(BOOL)isLaterThanDate:(NSDate *) date NS_AVAILABLE_IOS(4_0);

+(NSString *)getDayOfTheWeek:(NSDate *)date  NS_AVAILABLE_IOS(4_0);

///Compare with other DAY and Ignoring time
+(BOOL)isEqualToDateIgnoringTime:(NSDate *) dateFist andDateSecond:(NSDate *)dateSecond NS_AVAILABLE_IOS(4_0);

@end

@interface NSDate (Helper)

+(NSDate *)dateWithString:(NSString *)StringDate
                formatter:(NSString *)formatDate NS_AVAILABLE_IOS(5_0);

+ (NSDate *)dateWithString:(NSString *)StringDate
                 formatter:(NSString *)formatDate
                withLocale:(nullable NSLocale *)locale NS_AVAILABLE_IOS(5_0);

-(NSString *)stringWithFormatter:(NSString *)format NS_AVAILABLE_IOS(7_0);

-(NSString *)stringWithFormatter:(NSString *)format withLocale:(nullable NSLocale *)locale NS_AVAILABLE_IOS(7_0);

+(NSString *)changeTime24hFrom12hWithDateString:(NSString *)string NS_AVAILABLE_IOS(4_0);

+(NSString *)changeTime12hFrom24hWithDateString:(NSString *)string NS_AVAILABLE_IOS(4_0);

+(NSString *)stringTimeOfDayFromSecond:(float)second NS_AVAILABLE_IOS(4_0);

+(NSString *)stringSecondFromTimeOfDay:(NSString *)stringTime NS_AVAILABLE_IOS(4_0);

@end

/*
 Date Format
 -----------
 < 1 minute       	= "Just now"
 < 1 hour         	= "x minutes ago"
 Today            	= "x hours ago"
 Yesterday        	= "Yesterday at 1:28pm"
 < Last 7 days    	= "Friday at 1:48am"
 < Last 30 days   	= "March 30 at 1:14 pm"
 < 1 year         	= "September 15"
 Anything else    	= "September 9, 2011"
 */
@interface NSDate (NVFacebookTimeAgo)

/*!
 * @abstract Returns the Time Ago date format
 */
+ (NSString*)stringDateFormatAsTimeAgoWithDateString:(NSString *)dateString
                                           formatter:(NSString *)formatdate
                                    allowGMTTimeZone:(BOOL)isGMTTimeZone NS_AVAILABLE_IOS(6_0);


/*
 Formatted As Time Ago
 Returns the time formatted as Time Ago (in the style of Facebook's mobile date formatting)
 */
- (NSString *) formattedAsTimeAgo NS_DEPRECATED_IOS(2_0, 7_1, "formattedAsTimeAgo has been replaced by timeAgoFromDate:");

- (NSString *) timeAgoFromDate:(NSDate * _Nullable)date NS_AVAILABLE_IOS(7_0);

@end

/** Various utilities for NSDate. Some of these are fairly specific to some needs I had.  Many could be improved.  Your mileage may vary.  Offer void where prohibited by law.
 */
@interface NSDate (Utils)
/// Returns a date set to midnight today.
+(instancetype)todayAtMidnight NS_AVAILABLE_IOS(4_0);
/// returns a date set to midnight tomorrow.
+(instancetype)tomorrowAtMidnight NS_AVAILABLE_IOS(4_0);
/// Converts a string of the form YYYYMMDD to an NSDate
+(instancetype)dateWithYYYYMMDD:(NSString *)inDateString NS_AVAILABLE_IOS(4_0);
/// Converts a string of the form YYYYMMDDhhmmss to an NSDate.
+(instancetype)dateWithYYYYMMDDhhmmss:(NSString *)inDateString NS_AVAILABLE_IOS(4_0);
/// Converts a string formatted using in compliance with ISO8601 to an NSDate
+(nullable instancetype)dateWithISO8601Date:(NSString *)inDateString NS_AVAILABLE_IOS(4_0);

/// Returns a new NSDate object with the same date as the receiver, but with the time set to midnight.
-(NSDate *)dateAtMidnight NS_AVAILABLE_IOS(4_0);

/** Returns a string designed to be used for user interaction.
 
 If the receiver is the same date as today, it will return "Today"
 If the receiver is yesterday, it'll return "Yesterday"
 If the receiver is within 1 week prior to today, it'll return the day of the week (Monday, Tuesday, etc)
 Otherwise, it returns the date printed according to the locale settings.
 
 */
-(NSString *)niceDescription NS_AVAILABLE_IOS(4_0);
/// Returns the same thing as -niceDescription but includes the time.
-(NSString *)niceDescriptionWithTime NS_AVAILABLE_IOS(4_0);

/// Converts the receiver to a string of the form YYYYMMDD
-(NSString *)toYYYYMMDD NS_AVAILABLE_IOS(4_0);
/// Converts the receiver to a string of the form YYYYMMDDhhmmss
-(NSString *)toYYYYMMDDhhmmss NS_AVAILABLE_IOS(4_0);
/// Converts the receiver to a string in compliance with ISO8601
-(NSString *)toISO8601 NS_AVAILABLE_IOS(4_0);
/// Returns an NSDate which is inDays (+/-) days different from sender.
-(NSDate *)dateByAddingDays:(NSInteger)inDays NS_AVAILABLE_IOS(4_0);
/// Returns YES if inDate is the same date as the receiver.
-(BOOL)sameDayAsDate:(NSDate *)inDate NS_AVAILABLE_IOS(4_0);
/// Returns YES if otherDate is later in time than the receiver.
-(BOOL)isLaterThanDate:(NSDate *)otherDate NS_AVAILABLE_IOS(4_0);
/// Returns YES if otherDate is earlier in time than the receiver.
-(BOOL)isEarlierThanDate:(NSDate *)otherDate NS_AVAILABLE_IOS(4_0);

@end

@interface NSDate(HDEPRECATED)

+ (NSString *)determineDate:(NSDate *)date NS_DEPRECATED_IOS(2_0, 7_1, "determineDate: has been replaced by niceDescription");

+ (NSString *)formatDate:(NSDate *)date formatType:(NSString *)type NS_DEPRECATED_IOS(2_0, 7_1, "formatDate:formatType: has been replaced by stringTimeWithFormatter:");

+ (NSDate *)dateWithTimeInterval:(float)Second NS_DEPRECATED_IOS(2_0, 7_1, "dateWithTimeInterval: has been replaced by dateWithTimeIntervalSince1970");

+ (NSDate *)dateWithDate:(NSDate *)date formatter:(NSString *)fomatDate NS_DEPRECATED_IOS(2_0, 7_1);

+ (NSString *)stringWithDate:(NSDate *)Date formatter:(NSString *)formatDate NS_DEPRECATED_IOS(2_0, 8_0, "stringWithDate:formatter: has been replaced by stringTimeWithFormatter:");

- (NSString *)stringTimeWithFormatter:(NSString *)format NS_DEPRECATED_IOS(2_0, 7_1, "stringTimeWithFormatter: has been replaced by stringWithFormatter:");

+ (NSString *)stringWithDateString:(NSString *)StringDate
                   beforeFormatter:(NSString *)formatDateFirst
                    afterFormatter:(NSString *)fomatDateConveter NS_DEPRECATED_IOS(2_0, 7_1);

+ (CGFloat)timeIntervalSince1970WithDateString:(NSString *)StringDate NS_DEPRECATED_IOS(2_0, 7_1);

+ (CGFloat)timeIntervalSince1970WithDateString:(NSString *)StringDate formatter:(NSString *)formatdate NS_DEPRECATED_IOS(2_0, 7_1);

+ (NSString *)timeIntervelFromGMTWithDate:(NSDate *)date NS_DEPRECATED_IOS(2_0, 7_1);

+ (NSDate *)dateLocalReturnFromSystem:(NSDate *)date NS_DEPRECATED_IOS(2_0, 6_1);

+ (NSDate *)dateNowSystem NS_DEPRECATED_IOS(2_0, 6_1);

@end

NS_ASSUME_NONNULL_END
