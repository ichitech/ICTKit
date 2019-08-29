/*!
 @header    NSFileManager+Creation.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   12.3
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class FilePathSeparation, FolderPathSeparation, ItemPathSeparation, UIImage, UIImageView, NSJSONSerialization;

typedef NS_ENUM(NSInteger, NSFileManagerFileType) {
    NSFileManagerFileTypeOther,
    NSFileManagerFileTypePlist,
    NSFileManagerFileTypeJSON,
    NSFileManagerFileTypeXML,
    NSFileManagerFileTypeUnknown,
    NSFileManagerFileTypePNG,
    NSFileManagerFileTypeJPEG,
    NSFileManagerFileTypeJPG,
    NSFileManagerFileTypeGIF,
    NSFileManagerFileTypeTXT,
    NSFileManagerFileTypePDF,
};

NS_ASSUME_NONNULL_BEGIN

typedef void(^NSFileManagerFileResult)(BOOL success, FilePathSeparation *file, NSError  * _Nullable error) API_AVAILABLE(ios(2.0));
typedef void(^NSFileManagerFolderResult)(BOOL success, FolderPathSeparation *folder, NSError  * _Nullable error) API_AVAILABLE(ios(2.0));
typedef void(^NSFileManagerItemResult)(BOOL success, ItemPathSeparation *item, NSError  * _Nullable error) API_AVAILABLE(ios(2.0));

NSArray <NSString *>* NSFileUnsupportedCharacters(void) API_AVAILABLE(ios(2.0));

NSString *NSFileExtensionOfType(NSFileManagerFileType type) API_AVAILABLE(ios(2.0));

NSFileManagerFileType NSFileManagerFileTypeOf(NSString *fileName);

NSString *NSFileManagerDocumentsPath(void) API_AVAILABLE(ios(2.0));

#pragma mark - NSFilePathSeparation
@interface ItemPathSeparation: NSObject

/**
 Init the item separation object.
 
 @param subPaths the array of sub paths. For example: [a,b,c,text.txt] => a/b/c/text.txt
 @return #ItemPathSeparation object
 */
- (nullable instancetype) initWithSubPaths:(NSArray <NSString *> *)subPaths;

/**
 Init the item separation object.
 
 @param path the path of item. For example: a/b/c/text.txt => [a,b,c,text.txt]
 @return #ItemPathSeparation object
 */
- (nullable instancetype) initWithPath:(NSString *)path;

@property (nonatomic, strong, readonly) NSString *path;
@property (nonatomic, strong, readonly) NSArray <NSString *> *subPaths;
@property (nonatomic, strong, readonly) NSString *homeDirectoryPath;
@property (nonatomic, strong, readonly) NSURL    *homeDirectoryURL;


/**
 Check if the item is existed.
 @return #BOOL value
 */
- (BOOL) isExistInHomeDirectory;

- (BOOL) isInRootHomeDirectory;

/**
 Check if the item is a directory.
 @return #BOOL value
 */
- (BOOL) isDirectory;

@end

@interface FolderPathSeparation: ItemPathSeparation

@property (nonatomic, assign, readonly) unsigned long long int size;

@end

@interface FilePathSeparation: ItemPathSeparation

/**
 Init the file separation object.
 The file will be saved to Root of Home Directory.

 @param fileName name of file should be created.
 @return #FilePathSeparation object
 */
- (nullable instancetype) initWithFileName:(NSString *)fileName;

/**
 Init the file separation object.
 The file will be saved to #folderPath.
 
 @param fileName name of file should be created.
 @param folderPath path should be saved file.
 @return #FilePathSeparation object
 */
- (nullable instancetype) initWithFileName:(NSString *)fileName folderPath:(NSString *)folderPath;

/**
 Init the file separation object.
 The file will be saved to Root of Home Directory.
 The file name is automatically generated.
 
 @param type type of file should be created.
 @return #FilePathSeparation object
 */
- (nullable instancetype) initWithFileType:(NSFileManagerFileType)type;

/**
 Init the file separation object.
 The file will be saved to #folderPath.
 The file name is automatically generated.
 
 @param type type of file should be created.
 @return #FilePathSeparation object
 */
- (nullable instancetype) initWithFileType:(NSFileManagerFileType)type folderPath:(NSString *)folderPath;

@property (nonatomic, strong, readonly) NSString *fileName;
@property (nonatomic, strong, readonly, nullable) FolderPathSeparation *folderSeparation;
@property (nonatomic, assign, readonly) NSFileManagerFileType type;

@end

@interface NSFileManager (HomeDirectoryCreation)

#pragma mark - Create Directory
- (void) createFolder:(FolderPathSeparation *)folderSeparation
           completion:(nullable NSFileManagerFolderResult)completion_t API_AVAILABLE(ios(10.0));
- (void) createFolder:(FolderPathSeparation *)folderSeparation API_AVAILABLE(ios(10.0));
- (void) createFolder:(FolderPathSeparation *)folderSeparation
             overwite:(BOOL)overwite API_AVAILABLE(ios(10.0));
- (void) createFolder:(FolderPathSeparation *)folderSeparation
             overwite:(BOOL)overwite
           completion:(nullable NSFileManagerFolderResult)completion_t API_AVAILABLE(ios(10.0));

#pragma mark - Create File
- (void) createFile:(FilePathSeparation *)fileSeparation
            content:(NSObject *)object
         completion:(nullable NSFileManagerFileResult)completion_t API_AVAILABLE(ios(10.0));
- (void) createFile:(FilePathSeparation *)fileSeparation content:(NSObject *)object API_AVAILABLE(ios(10.0));
- (void) createFile:(FilePathSeparation *)fileSeparation
            content:(NSObject *)object
           overwite:(BOOL)overwite
         completion:(nullable NSFileManagerFileResult)completion_t API_AVAILABLE(ios(10.0));
- (void) createFile:(FilePathSeparation *)fileSeparation
            content:(NSObject *)object
           overwite:(BOOL)overwite API_AVAILABLE(ios(10.0));

#pragma mark - Delete Item
- (void) deleteItem:(ItemPathSeparation *)itemSeparation
         completion:(nullable NSFileManagerItemResult)completion_t API_AVAILABLE(ios(10.0));
- (void) deleteItem:(ItemPathSeparation *)itemSeparation API_AVAILABLE(ios(10.0));

#pragma mark - Truncate Directory
- (void) truncateFolder:(FolderPathSeparation *)folderSeparation
             completion:(nullable NSFileManagerFolderResult)completion_t API_AVAILABLE(ios(10.0));
- (void) truncateFolder:(FolderPathSeparation *)folderSeparation API_AVAILABLE(ios(10.0));

#pragma mark - Move Item
- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation API_AVAILABLE(ios(10.0));
- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation
         overwite:(BOOL)overwite API_AVAILABLE(ios(10.0));

- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation
       completion:(nullable NSFileManagerItemResult)completion_t API_AVAILABLE(ios(10.0));
- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation
         overwite:(BOOL)overwite
       completion:(nullable NSFileManagerItemResult)completion_t API_AVAILABLE(ios(10.0));
@end

@interface NSFileManager (Reader)

- (NSDictionary *) dictionaryWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (NSArray *) arrayWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (NSString *) stringWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (nullable NSData *) dataWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (nullable UIImage *) imageWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (nullable UIImageView *) imageViewWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (nullable NSJSONSerialization *) jsonWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));
- (nullable NSObject *) objectWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface NSDictionary (Reader)

+ (instancetype) dictionaryWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface NSArray (Reader)

+ (instancetype) arrayWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface NSString (Reader)

+ (instancetype) stringWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface NSData (Reader)

+ (nullable instancetype) dataWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface UIImage (FMReader)

+ (nullable instancetype) imageWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface UIImageView (FMReader)

+ (nullable instancetype) imageViewWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface NSJSONSerialization (Reader)

+ (nullable instancetype) jsonWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

@interface NSObject (Reader)

+ (nullable instancetype) objectWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation API_AVAILABLE(ios(10.0));

@end

NS_ASSUME_NONNULL_END
