/*!
 @header    UINavigationController+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.5
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NSFileManagerFileType) {
    NSFileManagerFileTypeOther,
    NSFileManagerFileTypePlist NS_ENUM_AVAILABLE_IOS(2_0),//only allow data type NSArray or NSDictionary
    NSFileManagerFileTypeJSON  NS_ENUM_AVAILABLE_IOS(2_0),//allow data type NSData, NSArray or NSDictionary
    NSFileManagerFileTypeXML NS_ENUM_AVAILABLE_IOS(8_0),//allow data type NSData, NSArray or NSDictionary
};

typedef void(^NSFileManagerCompletion)(BOOL success) API_AVAILABLE(ios(2.0));

NS_ASSUME_NONNULL_BEGIN

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"

NSURL * _Nullable NSFileManagerSaveWithObject(id object,
                                              NSString *fileName,
                                              NSString *__nullable folderName,
                                              NSFileManagerFileType fileType,
                                              dispatch_block_t __nullable completion
                                              ) NS_DEPRECATED_IOS(2_0, 9_0,"Use NSFileManagerSaveData() instead.");

void NSFileManagerSaveData(id object,
                            NSString *filePath,
                            NSFileManagerFileType fileType,
                            NSFileManagerCompletion __nullable completion_t
                            ) API_AVAILABLE(ios(7.1));

NSString *NSFileManagerDocumentsPath() API_AVAILABLE(ios(2.0));

#pragma clang diagnostic pop

#pragma mark - NSFileManager (Helper)

@interface NSFileManager (Helper)

/*!
 * @abstract Create a new folder & file.
 *
 * @param folderPath It's a kind of NSString. ie: "a/b/c/c","/a/b/c","/a/b/c/d","a","/a","a/"
 * @param completion_t The completion block will be returned
 */
- (void) createFolderAtPath:(NSString *)folderPath completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Create a new folder & file.
 *
 * @param folderPath It's a kind of NSString. ie: "a/b/c/c","/a/b/c","/a/b/c/d","a","/a","a/"
 * @param data It's a kind of NSData. The data will be saved.
 * @param fileName It's a kind of NSString. ie: "a.json", "b.txt",...
 * @param completion_t The completion block will be returned
 */
- (void) createFile:(NSString *)fileName inFolderPath:(nullable NSString *)folderPath contents:(NSData *)data completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Create a new folder & file.
 *
 * @param filePath It's a kind of NSString. ie: "a/b/c/c/b.txt","/a/b/c/b.txt","/a/b/c/d/b.txt","a","/a/b.txt","a/b.txt"
 * @param data It's a kind of NSData. The data will be saved.
 * @param completion_t The completion block will be returned
 */
- (void) createFileAtPath:(NSString *)filePath contents:(NSData *)data completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Delete folder & file.
 *
 * @param filePath It's a kind of NSString. ie: "a/b/c/c/b.txt","/a/b/c/b.txt","/a/b/c/d/b.txt","a","/a/b.txt","a/b.txt"
 * @param completion_t The completion block will be returned
 */
- (void) deleteFileAtPath:(NSString *)filePath completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Delete folder & file.
 *
 * @param path It's a kind of NSString. ie: "a/b/c/c","/a/b/c","/a/b/c/d","a","/a","a/"
 * @param completion_t The completion block will be returned
 */
- (void) deleteFolderAtPath:(NSString *)path completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);
- (void) deleteFile:(NSString *)fileName inFolderPath:(nullable NSString *)folderPath completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract URL full path of file & folder
 */
- (NSURL *) URLForFolder:(NSString *)folderPath NS_AVAILABLE_IOS(7_1);

- (NSURL *) URLForFile:(NSString *)fileName inFolderPath:(NSString *)folderPath NS_AVAILABLE_IOS(7_1);

- (NSURL *) URLForFileAtPath:(NSString *)filePath NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Check the existence of folder & file
 */
- (BOOL) isExistFileWithName:(NSString *)fileName inFolderPath:(NSString *)folderPath NS_AVAILABLE_IOS(7_1);

- (BOOL) isExistFolderAtPath:(NSString *)folderAtPath NS_AVAILABLE_IOS(7_1);

- (BOOL) isExistFileAtPath:(NSString *)filePath NS_AVAILABLE_IOS(7_1);

/*!
 * @abstract Data of file
 */
- (nullable NSData *) fileWithName:(NSString *)file inFolderPath:(NSString *)folder NS_AVAILABLE_IOS(7_1);

- (nullable NSData *) fileAtPath:(NSString *)filePath NS_AVAILABLE_IOS(7_1);

- (unsigned long long int) sizeOfFolder:(NSString *)folderPath NS_AVAILABLE_IOS(7_1);

- (void) deleteAllFilesAtFolderPath:(NSString *)folderPath completion:(nullable NSFileManagerCompletion)completion_t NS_AVAILABLE_IOS(7_1);
@end

#pragma mark - NSFileManager (BasicManager)
@interface NSFileManager (BasicManager)

/*!
 * @abstract Create new folder.
 *
 * @param folder It's a kind of NSString. It's name of folder. It must not contain any of the following character special.
 * @param agree It's bool value. If YES, the folder will be replaced.
 */
+ (void) createFolder:(NSString *)folder agreeToReplaceIfExist:(BOOL)agree completion:(nullable void(^)(BOOL success))block NS_DEPRECATED_IOS(2_0, 9_0,"createFolder:agreeToReplaceIfExist:completion has been replaced by createFolderAtPath:completion:");

/*!
 * @abstract Delete file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) deleteFile:(NSString *)file inFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block  NS_DEPRECATED_IOS(2_0, 9_0,"deleteFile:inFolder:completion: has been replaced by deleteFile:inFolderPath:");

/*!
 * @abstract Delete folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) deleteFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block NS_DEPRECATED_IOS(2_0, 9_0,"deleteFolder:completion: has been replaced by deleteFolderAtPath:completion:");

/*!
 * @abstract Empty folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) deleteAllFileInFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block  NS_DEPRECATED_IOS(2_0, 9_0,"deleteAllFileInFolder:completion: has been replaced by deleteAllFilesAtFolderPath:completion:");

/*!
 * @abstract add new file to folder.
 *
 * @param data It's a kind of NSData. It's data that will be used to add in "Documents".
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) addFile:(NSData *)data fileName:(NSString *)file intoFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block NS_DEPRECATED_IOS(2_0, 9_0,"addFile:fileName:intoFolder:completion has been replaced by createFileAtPath:contents:completion:");

/*!
 * @abstract Check exist folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (BOOL) isExistFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"isExistFolder: has been replaced by isExistFolderAtPath:");

/*!
 * @abstract Check exist file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (BOOL) isExistFile:(NSString *)file inFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"isExistFile:inFolder: has been replaced by isExistFileWithName:inFolderPath:");

/*!
 * @abstract Get size of folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (unsigned long long int) getSizeOfFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"getSizeOfFolder: has been replaced by sizeOfFolder:");

/*!
 * @abstract Get all folders that have been created by user.
 *
 * @return Array folders.
 */
+ (NSArray *) allFolder NS_DEPRECATED_IOS(2_0, 9_0,"createFolder:agreeToReplaceIfExist:completion has been replaced by createFolderAtPath:completion:");

/*!
 * @abstract Get data from "Documents" with name file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 *
 * @return Data of file.
 */
+ (NSData *) getFileWithName:(NSString *)file inFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"getFileWithName:inFolder: has been replaced by fileWithName:inFolderPath:");

/*!
 * @abstract Get URL from "Documents" with name file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 *
 * @return URL of file.
 */
+ (NSURL *) URLWithFileName:(NSString *)fileName inFolder:(NSString *)folder  NS_DEPRECATED_IOS(2_0, 9_0,"URLWithFileName:inFolder: has been replaced by URLForFile:inFolderPath:");

+ (NSURL *) URLOfFolder:(NSString *)foldername  NS_DEPRECATED_IOS(2_0, 9_0,"URLOfFolder: has been replaced by URLForFolder:");

@end

NS_ASSUME_NONNULL_END
