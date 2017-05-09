//
//  CameraViewController.h
//  LogoDetector
//
//  Created by sambo on 07/05/17.
//  Copyright (c) 2017 sambo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <opencv2/highgui/cap_ios.h>

@interface CameraViewController : UIViewController < CvVideoCameraDelegate >

@property (weak, nonatomic) IBOutlet UIImageView *img;
@property (weak, nonatomic) IBOutlet UIButton *btn;

@end
