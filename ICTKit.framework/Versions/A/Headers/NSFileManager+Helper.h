/*!
 @header    UINavigationController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version  7.0
 */

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, NSFileManagerFileType) {
    NSFileManagerFileTypeOther = 0,
    NSFileManagerFileTypePlist = 1,//only allow data type NSArray or NSDictionary
    NSFileManagerFileTypeJSON = 2,//allow data type NSData, NSArray or NSDictionary
};

NS_ASSUME_NONNULL_BEGIN

NSURL *NSFileManagerSaveWithObject(id __nonnull object, NSString *__nonnull fileName, NSString *__nullable folderName, NSFileManagerFileType fileType, dispatch_block_t __nullable completion)  NS_AVAILABLE_IOS(7_1);

@interface NSFileManager (BasicManager)

/*!
 * @abstract Create new folder.
 *
 * @param <folder> It's a kind of NSString. It's name of folder. It must not contain any of the following character special.
 * @param <agree> It's bool value. If YES, the folder will be replaced.
 */
+ (void) createFolder:(NSString *)folder agreeToReplaceIfExist:(BOOL)agree completion:(nullable void(^)(BOOL success))block NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Delete file.
 *
 * @param <file> It's a kind of NSString. It's name of file.
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (void) deleteFile:(NSString *)file inFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block  NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Delete folder.
 *
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (void) deleteFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Empty folder.
 *
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (void) deleteAllFileInFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block  NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract add new file to folder.
 *
 * @param <data> It's a kind of NSData. It's data that will be used to add in "Documents".
 * @param <file> It's a kind of NSString. It's name of file.
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (void) addFile:(NSData *)data fileName:(NSString *)file intoFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Check exist folder.
 *
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (BOOL) isExistFolder:(NSString *)folder NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Check exist file.
 *
 * @param <file> It's a kind of NSString. It's name of file.
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (BOOL) isExistFile:(NSString *)file inFolder:(NSString *)folder NS_AVAILABLE_IOS(5_0);

/*!
 * @abstract Get size of folder.
 *
 * @param <folder> It's a kind of NSString. It's name of folder.
 */
+ (unsigned long long int) getSizeOfFolder:(NSString *)folder NS_AVAILABLE_IOS(5_0) ;

/*!
 * @abstract Get all folders that have been created by user.
 *
 * @return Array folders.
 */
+ (NSArray *) allFolder  NS_AVAILABLE_IOS(5_0) ;

/*!
 * @abstract Get data from "Documents" with name file.
 *
 * @param <file> It's a kind of NSString. It's name of file.
 * @param <folder> It's a kind of NSString. It's name of folder.
 *
 * @return Data of file.
 */
+ (NSData *) getFileWithName:(NSString *)file inFolder:(NSString *)folder NS_AVAILABLE_IOS(5_0) ;

/*!
 * @abstract Get URL from "Documents" with name file.
 *
 * @param <file> It's a kind of NSString. It's name of file.
 * @param <folder> It's a kind of NSString. It's name of folder.
 *
 * @return URL of file.
 */
+ (NSURL *) URLWithFileName:(NSString *)fileName inFolder:(NSString *)folder  NS_AVAILABLE_IOS(5_0);

+ (NSURL *) URLOfFolder:(NSString *)foldername  NS_AVAILABLE_IOS(5_0);

@end

NS_ASSUME_NONNULL_END
