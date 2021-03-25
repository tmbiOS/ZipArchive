#import <Foundation/Foundation.h>
#if SWIFT_PACKAGE
#import "SSZipArchive.h"
#elif COCOAPODS
#import <SSZipArchive/SSZipArchive.h>
#else
#import <ZipArchive/SSZipArchive.h>
#endif

/**
 * Test delegate by collecting its calls
 */
@interface CollectingDelegate : NSObject <SSZipArchiveDelegate>
@property(nonatomic, retain) NSMutableArray<NSString *> *files;
@end
