/*!
 @header    NSFileManager+Helper.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   13.4.1
 */

#import <Foundation/Foundation.h>
#import "NSFileManager+Creation.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^NSFileManagerCompletion)(BOOL success) NS_DEPRECATED_IOS(2_0, 13_0,"Use NSFileManagerResult instead.");

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
                           ) NS_SWIFT_NAME(FileManagerSave(_:atPath:type:_:)) NS_DEPRECATED_IOS(2_0, 10_0,"Use FileManagerCreateFile() instead.");

#pragma clang diagnostic pop

#pragma mark - NSFileManager (Helper)

@interface NSFileManager (HELPER_DEPRECATED)

/*!
 * @abstract Create a new folder & file.
 *
 * @param folderPath It's a kind of NSString. ie: "a/b/c/c","/a/b/c","/a/b/c/d","a","/a","a/"
 * @param completion_t The completion block will be returned
 */
- (void) createFolderAtPath:(NSString *)folderPath completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -createFolder:overwite:completion instead.");

/*!
 * @abstract Create a new folder & file.
 *
 * @param folderPath It's a kind of NSString. ie: "a/b/c/c","/a/b/c","/a/b/c/d","a","/a","a/"
 * @param data It's a kind of NSData. The data will be saved.
 * @param fileName It's a kind of NSString. ie: "a.json", "b.txt",...
 * @param completion_t The completion block will be returned
 */
- (void) createFile:(NSString *)fileName inFolderPath:(nullable NSString *)folderPath contents:(NSData *)data completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -createFile:content:overwite:completion instead.");

/*!
 * @abstract Create a new folder & file.
 *
 * @param filePath It's a kind of NSString. ie: "a/b/c/c/b.txt","/a/b/c/b.txt","/a/b/c/d/b.txt","a","/a/b.txt","a/b.txt"
 * @param data It's a kind of NSData. The data will be saved.
 * @param completion_t The completion block will be returned
 */
- (void) createFileAtPath:(NSString *)filePath contents:(NSData *)data completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -createFile:content:overwite:completion instead.");

/*!
 * @abstract Delete folder & file.
 *
 * @param filePath It's a kind of NSString. ie: "a/b/c/c/b.txt","/a/b/c/b.txt","/a/b/c/d/b.txt","a","/a/b.txt","a/b.txt"
 * @param completion_t The completion block will be returned
 */
- (void) deleteFileAtPath:(NSString *)filePath completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -deleteItem:completion instead.");
- (void) deleteFolderAtPath:(NSString *)path completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -deleteItem:completion instead.");
- (void) deleteFile:(NSString *)fileName inFolderPath:(nullable NSString *)folderPath completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -deleteItem:completion instead.");
- (void) deleteAllFilesAtFolderPath:(NSString *)folderPath completion:(nullable NSFileManagerCompletion)completion_t NS_DEPRECATED_IOS(2_0, 13_0,"Use -deleteItem:completion instead.");

/*!
 * @abstract URL full path of file & folder
 */
- (NSURL *) URLForFolder:(NSString *)folderPath  NS_DEPRECATED_IOS(2_0, 13_0,"Use @property -homeDirectoryURL instead.");

- (NSURL *) URLForFile:(NSString *)fileName inFolderPath:(NSString *)folderPath NS_DEPRECATED_IOS(2_0, 13_0,"Use @property -homeDirectoryURL instead.");

- (NSURL *) URLForFileAtPath:(NSString *)filePath NS_DEPRECATED_IOS(2_0, 13_0,"Use @property -homeDirectoryURL instead.");

/*!
 * @abstract Check the existence of folder & file
 */
- (BOOL) isExistFileWithName:(NSString *)fileName inFolderPath:(NSString *)folderPath NS_DEPRECATED_IOS(2_0, 13_0,"Use -isExistInHomeDirectory instead.");

- (BOOL) isExistFolderAtPath:(NSString *)folderAtPath NS_DEPRECATED_IOS(2_0, 13_0,"Use -isExistInHomeDirectory instead.");

- (BOOL) isExistFileAtPath:(NSString *)filePath NS_DEPRECATED_IOS(2_0, 13_0,"Use -isExistInHomeDirectory instead.");

/*!
 * @abstract Data of file
 */
- (nullable NSData *) fileWithName:(NSString *)file inFolderPath:(NSString *)folder NS_AVAILABLE_IOS(7_1);

- (nullable NSData *) fileAtPath:(NSString *)filePath NS_AVAILABLE_IOS(7_1);

- (unsigned long long int) sizeOfFolder:(NSString *)folderPath NS_DEPRECATED_IOS(2_0, 13_0,"Use @property -size instead.");

@end

#pragma mark - NSFileManager (DEPRECATED)
@interface NSFileManager (DEPRECATED)

/*!
 * @abstract Create new folder.
 *
 * @param folder It's a kind of NSString. It's name of folder. It must not contain any of the following character special.
 * @param agree It's bool value. If YES, the folder will be replaced.
 */
+ (void) createFolder:(NSString *)folder agreeToReplaceIfExist:(BOOL)agree completion:(nullable void(^)(BOOL success))block NS_DEPRECATED_IOS(2_0, 9_0,"Use -createFolderAtPath:completion: instead.");

/*!
 * @abstract Delete file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) deleteFile:(NSString *)file inFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block  NS_DEPRECATED_IOS(2_0, 9_0,"Use -deleteFile:inFolderPath: instead.");

/*!
 * @abstract Delete folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) deleteFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block NS_DEPRECATED_IOS(2_0, 9_0,"Use -deleteFolderAtPath:completion: instead.");

/*!
 * @abstract Empty folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) deleteAllFileInFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block  NS_DEPRECATED_IOS(2_0, 9_0,"Use -deleteAllFileInFolder:completion: instead.");

/*!
 * @abstract add new file to folder.
 *
 * @param data It's a kind of NSData. It's data that will be used to add in "Documents".
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (void) addFile:(NSData *)data fileName:(NSString *)file intoFolder:(NSString *)folder completion:(nullable void(^)(BOOL success))block NS_DEPRECATED_IOS(2_0, 9_0,"Use -createFileAtPath:contents:completion: instead.");

/*!
 * @abstract Check exist folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (BOOL) isExistFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"Use -isExistFolderAtPath: instead.");

/*!
 * @abstract Check exist file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (BOOL) isExistFile:(NSString *)file inFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"Use -isExistFileWithName:inFolderPath: instead.");

/*!
 * @abstract Get size of folder.
 *
 * @param folder It's a kind of NSString. It's name of folder.
 */
+ (unsigned long long int) getSizeOfFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"Use -getSizeOfFolder: instead.");

/*!
 * @abstract Get all folders that have been created by user.
 *
 * @return Array folders.
 */
+ (NSArray *) allFolder NS_DEPRECATED_IOS(2_0, 9_0,"Use -createFolderAtPath:completion: instead.");

/*!
 * @abstract Get data from "Documents" with name file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 *
 * @return Data of file.
 */
+ (NSData *) getFileWithName:(NSString *)file inFolder:(NSString *)folder NS_DEPRECATED_IOS(2_0, 9_0,"Use -fileWithName:inFolderPath: instead.");

/*!
 * @abstract Get URL from "Documents" with name file.
 *
 * @param file It's a kind of NSString. It's name of file.
 * @param folder It's a kind of NSString. It's name of folder.
 *
 * @return URL of file.
 */
+ (NSURL *) URLWithFileName:(NSString *)fileName inFolder:(NSString *)folder  NS_DEPRECATED_IOS(2_0, 9_0,"Use -URLForFile:inFolderPath: instead.");

+ (NSURL *) URLOfFolder:(NSString *)foldername  NS_DEPRECATED_IOS(2_0, 9_0,"Use -URLForFolder: instead.");

@end

NS_ASSUME_NONNULL_END
