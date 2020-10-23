/*!
 @header    NSFileManager+Creation.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   14.0.1
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
    NSFileManagerFileTypeZip,
}  NS_SWIFT_NAME(FileManagerType);

NS_ASSUME_NONNULL_BEGIN

typedef void(^NSFileManagerFileResult)(BOOL success, FilePathSeparation *file, NSError  * _Nullable error) API_AVAILABLE(ios(2.0));
typedef void(^NSFileManagerFolderResult)(BOOL success, FolderPathSeparation *folder, NSError  * _Nullable error) API_AVAILABLE(ios(2.0));
typedef void(^NSFileManagerItemResult)(BOOL success, ItemPathSeparation *item, NSError  * _Nullable error) API_AVAILABLE(ios(2.0));

NSArray <NSString *>* NSFileUnsupportedCharacters(void) NS_SWIFT_NAME(FileUnsupportedCharacters()) API_AVAILABLE(ios(2.0));

NSString *NSFileExtensionOfType(NSFileManagerFileType type) NS_SWIFT_NAME(FileExtension(ofType:)) API_AVAILABLE(ios(2.0));

NSFileManagerFileType NSFileManagerFileTypeOf(NSString *fileName) NS_SWIFT_NAME(FileManage(ofType:)) API_AVAILABLE(ios(2.0));

NSString *NSFileManagerDocumentsPath(void) NS_SWIFT_NAME(FileManagerDocumentsPath()) API_AVAILABLE(ios(2.0));

void NSFileManagerCreateFile(NSString *filePath, id object , NSFileManagerFileResult __nullable completion_t) NS_SWIFT_NAME(FileManagerCreate(atPath:data:_:)) API_AVAILABLE(ios(9.1));

void NSFileManagerOverwriteFile(NSString *filePath, id object , NSFileManagerFileResult __nullable completion_t) NS_SWIFT_NAME(FileManagerOverwrite(atPath:data:_:)) API_AVAILABLE(ios(9.1));

#pragma mark - NSFilePathSeparation
NS_SWIFT_NAME(SPItemPath)
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

NS_SWIFT_NAME(SPFolderPath)
@interface FolderPathSeparation: ItemPathSeparation

@property (nonatomic, assign, readonly) unsigned long long int size;

@end

NS_SWIFT_NAME(SPFilePath)
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
           completion:(nullable NSFileManagerFolderResult)completion_t NS_SWIFT_NAME(create(folder:_:)) API_AVAILABLE(ios(10.0)) ;
- (void) createFolder:(FolderPathSeparation *)folderSeparation NS_SWIFT_NAME(create(folder:)) API_AVAILABLE(ios(10.0));
- (void) createFolder:(FolderPathSeparation *)folderSeparation
             overwite:(BOOL)overwite NS_SWIFT_NAME(create(folder:overwite:)) API_AVAILABLE(ios(10.0));
- (void) createFolder:(FolderPathSeparation *)folderSeparation
             overwite:(BOOL)overwite
           completion:(nullable NSFileManagerFolderResult)completion_t NS_SWIFT_NAME(create(folder:overwite:_:)) API_AVAILABLE(ios(10.0));

#pragma mark - Create File
- (void) createFile:(FilePathSeparation *)fileSeparation
            content:(NSObject *)object
         completion:(nullable NSFileManagerFileResult)completion_t NS_SWIFT_NAME(create(file:content:_:)) API_AVAILABLE(ios(10.0));
- (void) createFile:(FilePathSeparation *)fileSeparation content:(NSObject *)object NS_SWIFT_NAME(create(file:content:)) API_AVAILABLE(ios(10.0));
- (void) createFile:(FilePathSeparation *)fileSeparation
            content:(NSObject *)object
           overwite:(BOOL)overwite
         completion:(nullable NSFileManagerFileResult)completion_t NS_SWIFT_NAME(create(file:content:overwite:_:)) API_AVAILABLE(ios(10.0));
- (void) createFile:(FilePathSeparation *)fileSeparation
            content:(NSObject *)object
           overwite:(BOOL)overwite  NS_SWIFT_NAME(create(file:content:overwite:)) API_AVAILABLE(ios(10.0));

#pragma mark - Delete Item
- (void) deleteItem:(ItemPathSeparation *)itemSeparation
         completion:(nullable NSFileManagerItemResult)completion_t NS_SWIFT_NAME(delete(item:_:)) API_AVAILABLE(ios(10.0));
- (void) deleteItem:(ItemPathSeparation *)itemSeparation NS_SWIFT_NAME(delete(item:)) API_AVAILABLE(ios(10.0));

#pragma mark - Truncate Directory
- (void) truncateFolder:(FolderPathSeparation *)folderSeparation
             completion:(nullable NSFileManagerFolderResult)completion_t NS_SWIFT_NAME(truncate(folder:_:)) API_AVAILABLE(ios(10.0));
- (void) truncateFolder:(FolderPathSeparation *)folderSeparation NS_SWIFT_NAME(truncate(folder:)) API_AVAILABLE(ios(10.0));

#pragma mark - Move Item
- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation NS_SWIFT_NAME(move(item:to:)) API_AVAILABLE(ios(10.0));
- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation
         overwite:(BOOL)overwite  NS_SWIFT_NAME(move(item:to:overwite:)) API_AVAILABLE(ios(10.0));

- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation
       completion:(nullable NSFileManagerItemResult)completion_t NS_SWIFT_NAME(move(item:to:_:)) API_AVAILABLE(ios(10.0));
- (void) moveItem:(ItemPathSeparation *)itemSeparation
               to:(FolderPathSeparation *)toItemSeparation
         overwite:(BOOL)overwite
       completion:(nullable NSFileManagerItemResult)completion_t NS_SWIFT_NAME(move(item:to:overwite:_:)) API_AVAILABLE(ios(10.0));
@end

@interface NSFileManager (Reader)

- (NSDictionary *) dictionaryWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(dictionary(inContentOf:))  API_AVAILABLE(ios(10.0));
- (NSArray *) arrayWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(array(inContentOf:)) API_AVAILABLE(ios(10.0));
- (NSString *) stringWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(string(inContentOf:)) API_AVAILABLE(ios(10.0));
- (nullable NSData *) dataWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(data(inContentOf:)) API_AVAILABLE(ios(10.0));
- (nullable UIImage *) imageWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(image(inContentOf:)) API_AVAILABLE(ios(10.0));
- (nullable UIImageView *) imageViewWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(imageView(inContentOf:)) API_AVAILABLE(ios(10.0));
- (nullable NSJSONSerialization *) jsonWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(json(inContentOf:)) API_AVAILABLE(ios(10.0));
- (nullable id) objectWithContentsOfFileSeparation:(FilePathSeparation *)fileSeparation  NS_SWIFT_NAME(object(inContentOf:)) API_AVAILABLE(ios(10.0));

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
