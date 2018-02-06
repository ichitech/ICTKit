/*!
 @header    UIPrintHTMLPageToPDF.h
 @abstract  ICTKit iOS SDK Source
 @copyright Copyright 2013 IchiTech. All rights reserved.
 @version   8.8
 */

#import <UIKit/UIKit.h>

#define kPaperSizeA4 CGSizeMake(595,842)
#define kPaperSizeLetter CGSizeMake(612,792)

typedef void(^UIPrintPDFBlock)(BOOL success, NSString *PDFPath, NSError *error);

@interface UIPrintHTMLPageToPDF : UIViewController

@property (nonatomic, strong, readonly) NSString *PDFpath;

/*!
 * @abstract Create PDF by passing in the URL to a webpage.
 *
 * @param <URL> URL of page that will be used to create PDF file.
 * @param <PDFpath> Path will be used to save file. If NIL, default path is "Documents/PDFGeneral.pdf".
 * @param <pageSize> Size of page. If NIL, default size is A4 .
 * @param <pageMargins> The margin clears an area around an element (outside the border). The top, right, bottom, and left margin can be changed independently using separate properties. If NIL, default pageMargins is (0,0,0,0).
 * @param <handler> UIPrintPDFBlock will be returned when completed general PDF file.
 */
+ (id)createPDFWithURL:(NSURL*)URL
            pathForPDF:(NSString*)PDFpath
              pageSize:(CGSize)pageSize
               margins:(UIEdgeInsets)pageMargins
            completion:(UIPrintPDFBlock)handler;

/*!
 * @abstract Create PDF by passing in the HTML as a String.
 *
 * @param <HTML> HTML string that will be used to create PDF file.
 * @param <PDFpath> Path will be used to save file. If NIL, default path is "Documents/PDFGeneral.pdf".
 * @param <pageSize> Size of page. If NIL, default size is A4 .
 * @param <pageMargins> The margin clears an area around an element (outside the border). The top, right, bottom, and left margin can be changed independently using separate properties. If NIL, default pageMargins is (10, 5, 10, 5).
 * @param <handler> UIPrintPDFBlock will be returned when completed general PDF file.
 */
+ (id)createPDFWithHTML:(NSString*)HTML
             pathForPDF:(NSString*)PDFpath
               pageSize:(CGSize)pageSize
                margins:(UIEdgeInsets)pageMargins
             completion:(UIPrintPDFBlock)handler;

/*!
 * @abstract Create PDF by passing in the HTML as a String, with a base URL.
 *
 * @param <HTML> HTML string that will be used to create PDF file.
 * @param <URL>  Base URL.
 * @param <PDFpath> Path will be used to save file. If NIL, default path is "Documents/PDFGeneral.pdf".
 * @param <pageSize> Size of page. If NIL, default size is A4 .
 * @param <pageMargins> The margin clears an area around an element (outside the border). The top, right, bottom, and left margin can be changed independently using separate properties. If NIL, default pageMargins is (10, 5, 10, 5).
 * @param <handler> UIPrintPDFBlock will be returned when completed general PDF file.
 */
+ (id)createPDFWithHTML:(NSString*)HTML
                baseURL:(NSURL*)baseURL
             pathForPDF:(NSString*)PDFpath
               pageSize:(CGSize)pageSize
                margins:(UIEdgeInsets)pageMargins
             completion:(UIPrintPDFBlock)handler;


@end
