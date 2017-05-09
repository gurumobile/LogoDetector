//
//  MLManager.h
//  LogoDetector
//
//  Created by sambo on 07/05/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "MSERFeature.h"

/*
 This singleton class wraps object recognition function
 */
@interface MLManager : NSObject

+ (MLManager *) sharedInstance;

/*
 Stores feature from the biggest MSER in the templateImage
 */
- (void) learn: (UIImage *) templateImage;

/*
 Sum of differences between logo feature and given feature
 */
- (double) distance: (MSERFeature *) feature;

/*
 Returns true if the given feature is similar to the one learned from the template
 */
- (BOOL) isToptalLogo: (MSERFeature *) feature;

@end
