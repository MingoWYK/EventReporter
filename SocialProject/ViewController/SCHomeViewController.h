//
//  SCHomeViewController.h
//  SocialProject
//
//  Created by wengyuankai on 8/23/17.
//  Copyright © 2017 wengyuankai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end

