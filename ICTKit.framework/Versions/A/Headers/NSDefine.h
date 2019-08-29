/*!
 @header    NSDefine.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.4
 */

#if __has_feature(objc_arc)
#define stabilized strong
#define NSDEALOC(object)
#else
#define stabilized retain
#define NSDEALOC(object)  [object dealoc]
#endif

/*!
 * @abstract Define NSAsser
 */
#define CALL_CASH_APP(msg) [[NSAssertionHandler currentHandler] handleFailureInMethod:_cmd object:self file:[NSString stringWithUTF8String:__FILE__] lineNumber:__LINE__ description:msg]


/*!
 * @struct NSLength.
 */
typedef struct _NSLength {
    NSUInteger minimum;
    NSUInteger maximum;
} NSLength;

NS_INLINE NSLength NSMakeLength(NSUInteger minimum, NSUInteger maximum) {
    NSLength r;
    r.minimum = minimum;
    r.maximum = maximum;
    return r;
}


#pragma mark - Define

#define USER_DEFAULTS [NSUserDefaults standardUserDefaults]
#define LOAD_NIB(nibName) [[[NSBundle mainBundle] loadNibNamed:nibName owner:self options:nil] objectAtIndex:0]



