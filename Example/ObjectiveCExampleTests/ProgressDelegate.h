//
//  ProgressDelegate.h
//  ObjectiveCExample
//
//  Created by Antoine Cœur on 04/10/2017.
//

#import <Foundation/Foundation.h>
#if SWIFT_PACKAGE
#import "SSZipArchive.h"
#elif COCOAPODS
#import <SSZipArchive/SSZipArchive.h>
#else
#import <ZipArchive/SSZipArchive.h>
#endif

@interface ProgressDelegate : NSObject <SSZipArchiveDelegate>
{
@public
    NSMutableArray *progressEvents;
}

@end
