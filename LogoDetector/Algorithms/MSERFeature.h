//
//  MSERFeature.h
//  LogoDetector
//
//  Created by sambo on 07/05/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSERFeature : NSObject

@property NSInteger numberOfHoles;
@property double convexHullAreaRate;
@property double minRectAreaRate;
@property double skeletLengthRate;
@property double contourAreaRate;

-(double) distace: (MSERFeature *) other;

-(NSString *)description;

-(NSString *)toString;

@end
