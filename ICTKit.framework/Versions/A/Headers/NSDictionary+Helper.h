/*!
 @header    NSDate+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.1
 */


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (QueryString)

/*!
 * Initializes a new dictionary containing the keys and values from the
 * specified query string.
 *
 * @param queryString The query parameters to parse
 *
 * @returns A new dictionary containing the specified query parameters.
 *
**/
+ (nullable NSDictionary *)dictionaryWithQueryString:(nonnull NSString *)queryString NS_AVAILABLE_IOS(6_0) ;

/*!
 *
 * Returns the dictionary as a query string.
 *
**/
- (nullable NSString *)queryStringValue NS_AVAILABLE_IOS(6_0);

@end

@interface NSDictionary (Primitive)

-(BOOL)hasKey:(NSString*)key;

-(BOOL)boolForKey:(NSString*)key;
-(int)intForKey:(NSString*)key;
-(NSInteger)integerForKey:(NSString*)key;
-(NSUInteger)unsignedIntegerForKey:(NSString*)key;
-(CGFloat)cgFloatForKey:(NSString*)key;
-(int)charForKey:(NSString*)key;
-(float)floatForKey:(NSString*)key;
-(CGPoint)pointForKey:(NSString*)key;
-(CGSize)sizeForKey:(NSString*)key;
-(CGRect)rectForKey:(NSString*)key;

@end

@interface NSMutableDictionary(Primitive)

-(void)setBool:(BOOL)i forKey:(NSString*)key;
-(void)setInt:(int)i forKey:(NSString*)key;
-(void)setInteger:(NSInteger)i forKey:(NSString*)key;
-(void)setUnsignedInteger:(NSUInteger)i forKey:(NSString*)key;
-(void)setCGFloat:(CGFloat)f forKey:(NSString*)key;
-(void)setChar:(char)c forKey:(NSString*)key;
-(void)setFloat:(float)i forKey:(NSString*)key;
-(void)setPoint:(CGPoint)o forKey:(NSString*)key;
-(void)setSize:(CGSize)o forKey:(NSString*)key;
-(void)setRect:(CGRect)o forKey:(NSString*)key;

@end

@interface NSDictionary (ForcedUTF8)

- (nullable NSString *) forcedUTF8String NS_AVAILABLE_IOS(7_0);

@end

NS_ASSUME_NONNULL_END
