//
//  MSERManager.h
//  LogoDetector
//
//  Created by sambo on 07/05/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <opencv2/features2d/features2d.hpp>
#import "MSERFeature.h"

/*
 Singelton class providing function related to msers
 */
@interface MSERManager : NSObject

+ (MSERManager *) sharedInstance;

/*
 Extracts all msers into provided vector
 */
- (void) detectRegions: (cv::Mat &) gray intoVector: (std::vector<std::vector<cv::Point>> &) vector;

/*
 Extracts feature from the mser. For some MSERs feature can be NULL !!!
 */
- (MSERFeature *) extractFeature: (std::vector<cv::Point> *) mser;

@end
